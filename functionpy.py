import re

def identify_purpose(code):
    if re.search(r'\bcalculate\b|\bsum\b|\badd\b', code):
        return "This function calculates the sum of two numbers."
    elif re.search(r'\breverse\b|\binvert\b', code):
        return "This function reverses the given string or array."
    elif re.search(r'\bsort\b|\border\b|\barrange\b', code):
        return "This function sorts the elements of an array."
    elif re.search(r'\bsearch\b|\bfind\b|\blocate\b', code):
        return "This function searches for an element in an array or list."
    elif re.search(r'\bvalidate\b|\bcheck\b|\bverify\b', code):
        return "This function validates input data."
    elif re.search(r'\bfactorial\b|\bcompute factorial\b', code):
        return "This function calculates the factorial of a number."
    elif re.search(r'\bfibonacci\b|\bcompute fibonacci\b', code):
        return "This function calculates the Fibonacci sequence."
    elif re.search(r'\bencrypt\b|\bdecrypt\b|\bcipher\b', code):
        return "This function encrypts or decrypts data."
    elif re.search(r'\bparse\b|\bextract\b|\bdata\b', code):
        return "This function parses or extracts data from a string."
    elif re.search(r'\bconvert\b|\btransform\b|\bchange\b', code):
        return "This function converts or transforms data from one format to another."
    elif re.search(r'\bgenerate\b|\bcreate\b|\bmake\b', code):
        return "This function generates or creates something."
    elif re.search(r'\bfilter\b|\bselect\b|\bextract\b', code):
        return "This function filters, selects, or extracts elements based on certain criteria."
    elif re.search(r'\bcalculate\b|\bcompute\b|\bestimate\b', code):
        return "This function performs a calculation or estimation."
    elif re.search(r'\bparse\b|\binterpret\b|\bunderstand\b', code):
        return "This function parses or interprets data or commands."
    elif re.search(r'\bmerge\b|\bcombine\b|\bjoin\b', code):
        return "This function merges, combines, or joins multiple entities together."
    elif re.search(r'\bmanipulate\b|\bmodify\b|\bchange\b', code):
        return "This function manipulates or modifies data or objects."
    elif re.search(r'\bformat\b|\bstyle\b|\bpresentation\b', code):
        return "This function formats or styles text or data."
    elif re.search(r'\bvalidate\b|\bcheck\b|\bverify\b', code):
        return "This function validates input data."
    elif re.search(r'\bgenerate\b|\bcreate\b|\bmake\b', code):
        return "This function generates or creates something."
    elif re.search(r'\bserialize\b|\bdeserialize\b|\bencode\b|\bdecode\b', code):
        return "This function serializes or deserializes data, or encodes/decodes it."
    elif re.search(r'\bcalculate\b|\bcompute\b|\bestimate\b', code):
        return "This function performs a calculation or estimation."
    elif re.search(r'\bencode\b|\bdecode\b|\bconvert\b', code):
        return "This function encodes or decodes data or converts between formats."
    elif re.search(r'\bvalidate\b|\bcheck\b|\bverify\b', code):
        return "This function validates input data."
    elif re.search(r'\bcalculate\b|\bcompute\b|\bestimate\b', code):
        return "This function performs a calculation or estimation."
    elif re.search(r'\bencode\b|\bdecode\b|\bconvert\b', code):
        return "This function encodes or decodes data or converts between formats."
    elif re.search(r'\bvalidate\b|\bcheck\b|\bverify\b', code):
        return "This function validates input data."
    elif re.search(r'\bextract\b|\bretrieve\b|\bget\b', code):
        return "This function extracts or retrieves data from a source."
    elif re.search(r'\bformat\b|\bstyle\b|\bpresentation\b', code):
        return "This function formats or styles text or data."
    elif re.search(r'\bsanitize\b|\bclean\b|\bfilter\b', code):
        return "This function sanitizes, cleans, or filters input data."
    elif re.search(r'\bcalculate\b|\bcompute\b|\bestimate\b', code):
        return "This function performs a calculation or estimation."
    elif re.search(r'\bencode\b|\bdecode\b|\bconvert\b', code):
        return "This function encodes or decodes data or converts between formats."
    elif re.search(r'\bvalidate\b|\bcheck\b|\bverify\b', code):
        return "This function validates input data."
    elif re.search(r'\btransform\b|\bconvert\b|\bchange\b', code):
        return "This function transforms, converts, or changes data or objects."
    elif re.search(r'\bprocess\b|\bhandle\b|\bmanage\b', code):
        return "This function processes, handles, or manages data or operations."
    elif re.search(r'\bcalculate\b|\bcompute\b|\bestimate\b', code):
        return "This function performs a calculation or estimation."
    elif re.search(r'\bencode\b|\bdecode\b|\bconvert\b', code):
        return "This function encodes or decodes data or converts between formats."
    elif re.search(r'\bvalidate\b|\bcheck\b|\bverify\b', code):
        return "This function validates input data."
    elif re.search(r'\btransform\b|\bconvert\b|\bchange\b', code):
        return "This function transforms, converts, or changes data or objects."
    elif re.search(r'\bprocess\b|\bhandle\b|\bmanage\b', code):
        return "This function processes, handles, or manages data or operations."
    elif re.search(r'\bcalculate\b|\bcompute\b|\bestimate\b', code):
        return "This function performs a calculation or estimation."
    elif re.search(r'\bencode\b|\bdecode\b|\bconvert\b', code):
        return "This function encodes or decodes data or converts between formats."
    elif re.search(r'\bvalidate\b|\bcheck\b|\bverify\b', code):
        return "This function validates input data."
    elif re.search(r'\btransform\b|\bconvert\b|\bchange\b', code):
        return "This function transforms, converts, or changes data or objects."
    elif re.search(r'\bprocess\b|\bhandle\b|\bmanage\b', code):
        return "This function processes, handles, or manages data or operations."
    else:
        return "The purpose of this function is not recognized."

def comment_function(function_name, code, purpose):
    commented_code = f"# Function: {function_name}\n"
    commented_code += f"# Purpose: {purpose}\n"
    commented_code += code + "\n"
    return commented_code

if __name__ == "__main__":
    function_name = "sum"
    code = """
def sum(a, b):
    return a + b
"""

    purpose = identify_purpose(code)
    commented_code = comment_function(function_name, code, purpose)
    
    print("Commented code:\n", commented_code)
