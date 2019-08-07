from chatterbot import ChatBot
from chatterbot.trainers import ChatterBotCorpusTrainer

bot = ChatBot('Training Example')

trainer = ChatterBotCorpusTrainer(bot)

trainer.train(
    "chatterbot.corpus.zomato"
)

while True:
	request = input('You: ')
	response = bot.get_response(request)
	print('Bot: ',response)
