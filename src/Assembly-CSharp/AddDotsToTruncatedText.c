
/* Int32 CalculateLengthOfMessage(String) */

int32_t Assembly-CSharp.dll::AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                  (AddDotsToTruncatedText *this,String *message,MethodInfo *method)

{
  fStack_1 = 0.0;
  func_?(&stack0xffffffc0,0,0x34);
  if (message != (String *)0x0) {
    pCVar2 = mscorlib.dll::System::String::String_ToCharArray(message,(MethodInfo *)0x0);
    uVar3 = 0;
    if (pCVar2 != (Char__Array *)0x0) {
      puVar4 = pCVar2->vector;
      while( true ) {
        if ((int)pCVar2->max_length <= (int)uVar3) {
          return (int)fStack_1;
        }
        if (pCVar2->max_length <= uVar3) break;
        ch = *puVar4;
        pTVar5 = (this->fields).text;
        if (pTVar5 == (Text *)0x0) goto code_?;
        this_00 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_font(pTVar5,(MethodInfo *)0x0)
        ;
        pTVar5 = (this->fields).text;
        if (pTVar5 == (Text *)0x0) goto code_?;
        this_01 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                            (pTVar5,(MethodInfo *)0x0);
        if (this_01 == (TextGenerator *)0x0) goto code_?;
        iVar6 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                TextGenerator_get_fontSizeUsedForBestFit(this_01,(MethodInfo *)0x0);
        if (this_00 == (Font *)0x0) goto code_?;
        UnityEngine.TextRenderingModule.dll::UnityEngine::Font::Font_GetCharacterInfo_1
                  (this_00,ch,(CharacterInfo *)&stack0xffffffc0,iVar6,(MethodInfo *)0x0);
        iVar6 = UnityEngine.TextRenderingModule.dll::UnityEngine::CharacterInfo::
                CharacterInfo_get_advance((CharacterInfo *)&stack0xffffffc0,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
        fStack_1 = (float)iVar6 + fStack_1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  iVar6 = (*pcVar7)();
  return iVar6;
}


/* IEnumerator Start() */

IEnumerator *
Assembly-CSharp.dll::AddDotsToTruncatedText::AddDotsToTruncatedText_Start
          (AddDotsToTruncatedText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AddDotsToTruncatedText___Start_d__1);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AddDotsToTruncatedText___Start_d__1);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}

