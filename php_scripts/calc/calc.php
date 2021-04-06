<?php 

$nb = 0;

function calc()
{
    global $nb;
    $parameter = func_get_args();

        if (!$parameter) 
        {
            return $nb;
        }
            elseif ($parameter[0] === '+')
            {
                $nb += $parameter[1];
            }
            elseif ($parameter[0] === '-')
            {
                $nb -= $parameter[1];
            }
            elseif ($parameter[0] === '*')
            {
                $nb *= $parameter[1];
            }
            elseif ($parameter[0] === '=')
            {
                $nb = $parameter[1];
            }
            elseif ($parameter[0] === '/')
            {
                if ($parameter[1] === 0)
                {
                echo "Division by 0!\n";
                return;
                }
                else 
                    {
                        $nb = intdiv($nb, $parameter[1]);
                    }
            }
            elseif ($parameter[0] === '%')
            {
                if ($parameter[1] === 0)
                {
                echo "Division by 0!\n";
                return;
                }
                else 
                    {
                    $nb %= $parameter[1];
                    }
            } 
        return ($nb);
}
