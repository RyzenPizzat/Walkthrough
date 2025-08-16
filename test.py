from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time

driver = webdriver.Chrome()  # Pastikan chromedriver sudah terinstall dan PATH sudah disetting

url = "https://www.instagram.com/accounts/login/"  # Ganti dengan url form pendaftaran yang kamu punya izin aksesnya

for i in range(5):  # coba daftar 5 kali
    driver.get(url)
    time.sleep(2)
    
    username_input = driver.find_element(By.NAME, "username")
    password_input = driver.find_element(By.NAME, "password")
    email_input = driver.find_element(By.NAME, "email")

    username_input.send_keys(f"user_test_{i}")
    password_input.send_keys("admin#123")
    email_input.send_keys(f"user_test_{i}@gmail.com")

    submit_button = driver.find_element(By.XPATH, "//button[@type='submit']")
    submit_button.click()
    
    time.sleep(5)  # tunggu proses selesai
    
driver.quit()
