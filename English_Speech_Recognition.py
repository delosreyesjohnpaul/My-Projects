import speech_recognition
import pyttsx3

sr = speech_recognition.Recognizer()

with speech_recognition.Microphone() as sourse2:
    
    print("Silence Please")
    
    sr.adjust_for_ambient_noise(sourse2, duration = 2)
    
    print("Speak now Please...")
    
    audio2 = sr.listen(sourse2)
    
    text = sr.recognize_google(audio2)
    text = text.lower()
    
    print("Did You Say: "+ text)