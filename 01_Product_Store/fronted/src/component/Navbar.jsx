import { Container, Flex, Link, Text, HStack } from '@chakra-ui/react';

const Navbar = () => {
	return (
		<Container maxW={'1140px'} px={4}>
			<Flex
				h="16"
				alignItems={'center'}
				justifyContent={'space-between'}
				flexDir={{
					base: 'column',
					sm: 'row',
				}}>
				<Text
					fontSize={{ base: '22', sm: '28' }}
					fontWeight={'bold'}
					textTransform={'uppercase'}
					textAlign={'center'}
					bgGradient={'linera(to-r, cyan.400, blue.500)'}
					bgClip={'text'}>
					<Link to={'/'}>Product Store 🛒</Link>
				</Text>

				<HStack spacing={2} alignItems={'center'}>
					<Link to={'/create'}></Link>
				</HStack>
			</Flex>
		</Container>
	);
};

export default Navbar;
