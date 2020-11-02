

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    let n = s.length;
    let i =0;
    for(i=0;i<n;i++)
    {
        if(s[i] == 'a'||s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i')
        {
            console.log(s[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(s[i] !== 'a'&& s[i] !== 'e' && s[i] !== 'o' && s[i] !== 'u' && s[i] !== 'i')
        {
            console.log(s[i]);
        }
    }
}

