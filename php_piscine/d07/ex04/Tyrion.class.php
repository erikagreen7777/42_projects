<?php

class Tyrion {
	public function sleepWith($name) {
		if ($name instanceof Lannister) {
			echo "Not even if I'm drunk ! \n";
		}
		if ($name instanceof Sansa) {
			echo "Let's do this.\n";
		}
	}
}
?>