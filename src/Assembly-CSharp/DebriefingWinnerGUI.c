
/* Void ActivateScoreImage(WinningConditionType) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
               (DebriefingWinnerGUI *this,WinningConditionType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).winConImages;
  while (pLVar1 != (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    pLVar1 = (this->fields).winConImages;
    if (pLVar1 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
    pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
             Interpreter::InstructionList+DebugView+InstructionView]::
             List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                       (&IStack_3,
                        (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                         *)pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                       );
    pLVar1 = (this->fields).winConImages;
    IStack_3._instruction = pIVar2->_instruction;
    if (statType == pIVar2->_index) {
      if (pLVar1 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      apMStack_4[0] =
           MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
      ;
      iVar5 = func_?(apMStack_4,pLVar1,index);
      IStack_3._instruction = *(Instruction **)(iVar5 + 0x10);
      if ((*(Component **)(iVar5 + 4) == (Component *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(iVar5 + 4),(MethodInfo *)0x0),
         pGVar6 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
      pLVar1 = (this->fields).winConImages;
      if (pLVar1 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      iVar5 = func_?(apMStack_4,pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                             );
      pGVar6 = *(GameObject **)(iVar5 + 8);
      IStack_3._instruction = *(Instruction **)(iVar5 + 0x10);
      if (pGVar6 == (GameObject *)0x0) break;
      value = 1;
    }
    else {
      if (pLVar1 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      apMStack_4[0] =
           MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
      ;
      iVar5 = func_?(&IStack_3,pLVar1,index);
      uStack_7 = *(undefined4 *)(iVar5 + 0x10);
      if ((*(Component **)(iVar5 + 4) == (Component *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(iVar5 + 4),(MethodInfo *)0x0),
         pGVar6 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).winConImages;
      if (pLVar1 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      iVar5 = func_?(apMStack_4,pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                             );
      pGVar6 = *(GameObject **)(iVar5 + 8);
      IStack_3._instruction = *(Instruction **)(iVar5 + 0x10);
      if (pGVar6 == (GameObject *)0x0) break;
      value = 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,value,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).winConImages;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetAdditionalInformation(String, WinningConditionType) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetAdditionalInformation
               (DebriefingWinnerGUI *this,String *text,WinningConditionType__Enum winConType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality(text,::StringLiteral__,(MethodInfo *)0x0)
  ;
  if (bVar1 != 0) {
    return;
  }
  index = 0;
  pLVar2 = (this->fields).winConImages;
  while (pLVar2 != (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) {
    if ((pLVar2->fields)._size <= index) {
      return;
    }
    pLVar2 = (this->fields).winConImages;
    if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
    pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
             Interpreter::InstructionList+DebugView+InstructionView]::
             List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                       (&IStack_4,
                        (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                         *)pLVar2,index,
                        MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                       );
    IStack_4._instruction = pIVar3->_instruction;
    if (pIVar3->_index == winConType) {
      if ((this->fields).winConImages == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0)
      break;
      iVar5 = func_?();
      if (*(GameObject **)(iVar5 + 0x10) == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar5 + 0x10),1,(MethodInfo *)0x0);
      pLVar2 = (this->fields).winConImages;
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      iVar5 = func_?(&stack0xffffffd4,pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                             );
      IStack_4._instruction = *(Instruction **)(iVar5 + 0x10);
      if (*(int *)(iVar5 + 0xc) == 0) break;
      func_?(0x4b,*(int *)(iVar5 + 0xc),text);
    }
    index = index + 1;
    pLVar2 = (this->fields).winConImages;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTimerText(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetTimerText
               (DebriefingWinnerGUI *this,String *time,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pTStack_2 = (this->fields).timer;
  if (pTStack_2 != (Text *)0x0) {
    pIStack_1 = (pTStack_2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSStack_3 = time;
    (*(code *)(pTStack_2->klass->vtable).set_text.method)();
    return;
  }
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetWinValue(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinValue
               (DebriefingWinnerGUI *this,String *winVal,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pTStack_2 = (this->fields).winValue;
  if (pTStack_2 != (Text *)0x0) {
    pIStack_1 = (pTStack_2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSStack_3 = winVal;
    (*(code *)(pTStack_2->klass->vtable).set_text.method)();
    return;
  }
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetWinnerImage(Color, RenderTexture) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerImage
               (DebriefingWinnerGUI *this,Color startColor,RenderTexture *image,MethodInfo *method)

{
  this_00 = (this->fields).backgroundImage;
  if (this_00 != (ImageAnimator *)0x0) {
    end.g = startColor.g * _UNK_?;
    end.r = startColor.r * _UNK_?;
    end.b = startColor.b * _UNK_?;
    end.a = 1.0;
    ImageAnimator::ImageAnimator_SetColor(this_00,startColor,end,(MethodInfo *)0x0);
    this_01 = (this->fields).winnerImage;
    if (this_01 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_01,(Texture *)image,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetWinnerText(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerText
               (DebriefingWinnerGUI *this,String *winner,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pTStack_2 = (this->fields).winnerName;
  if (pTStack_2 != (Text *)0x0) {
    pIStack_1 = (pTStack_2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSStack_3 = winner;
    (*(code *)(pTStack_2->klass->vtable).set_text.method)();
    return;
  }
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

