
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
        iVar7 = func_?();
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
        fStack_1 = (float)iVar7 + fStack_1;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  iVar6 = (*pcVar9)();
  return iVar6;
}


/* IEnumerator Start() */

IEnumerator *
Assembly-CSharp.dll::AddDotsToTruncatedText::AddDotsToTruncatedText_Start
          (AddDotsToTruncatedText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AddDotsToTruncatedText___Start_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    this_00[1].monitor = (MonitorData *)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}

