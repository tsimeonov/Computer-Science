import { Container, Text, VStack } from '@chakra-ui/react';

const HomePage = () => {
	return (
		<Container maxW="container.xl" py={12}>
			<VStack spacing={8}>
				<Text
					fontSize={'3xl'}
					fontWeight={'bold'}
					bgGradient={'linear(to-r, cyan.400, blue.500)'}
					bgClip={'text'}
					textAlign={'center'}>
					Current Products
				</Text>

				<Text
					fontSize={'xl'}
					textAlign={'center'}
					fontWeight={'bold'}
					color={'gray.500'}>
					No Product Found{' '}
				</Text>
			</VStack>
		</Container>
	);
};

export default HomePage;
