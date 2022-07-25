# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map_gen                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlanzas <dlanzas.42madrid.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 13:34:11 by dlanzas           #+#    #+#              #
#    Updated: 2022/07/25 13:34:13 by dlanzas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
print "o";
}
else {
print ".";
}
}
print "\n";
}
