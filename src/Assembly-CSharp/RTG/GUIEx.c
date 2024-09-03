
/* Void PopColor() */

void Assembly-CSharp.dll::RTG::GUIEx::GUIEx_PopColor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GUIEx);
    func_?(&TypeInfo__UnityEngine__GUI);
    func_?(&MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Pop__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GUIEx);
  }
  pSVar1 = TypeInfo__RTG__GUIEx->static_fields->_colorStack;
  if (pSVar1 != (Stack_1_UnityEngine_Color_ *)0x0) {
    if (0 < (pSVar1->fields)._size) {
      if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__GUIEx);
      }
      this = (Stack_1_UnityEngine_Rect_ *)TypeInfo__RTG__GUIEx->static_fields->_colorStack;
      if (this == (Stack_1_UnityEngine_Rect_ *)0x0) goto code_?;
      pRVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::Rect]::
               Stack_1_UnityEngine_Rect__Pop
                         ((Rect *)&stack0xffffffec,this,
                          MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Pop__
                         );
      fVar3 = pRVar2->m_XMin;
      puVar4 = (undefined *)pRVar2->m_YMin;
      pGVar5 = (GUI__Class *)pRVar2->m_Width;
      fVar6 = pRVar2->m_Height;
      if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
        puVar4 = &UNK_?;
        pGVar5 = TypeInfo__UnityEngine__GUI;
        func_?();
      }
      value.g = (float)puVar4;
      value.r = fVar3;
      value.b = (float)pGVar5;
      value.a = fVar6;
      UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_set_color(value,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PushColor(Color) */

void Assembly-CSharp.dll::RTG::GUIEx::GUIEx_PushColor(Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GUIEx);
    func_?(&TypeInfo__UnityEngine__GUI);
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Push_UnityEngine__Color_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GUIEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GUIEx);
  }
  this = (Stack_1_UnityEngine_Rect_ *)TypeInfo__RTG__GUIEx->static_fields->_colorStack;
  if ((TypeInfo__UnityEngine__GUI->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__GUI);
  }
  pRVar1 = (Rect *)UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_get_color
                             ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  if (this != (Stack_1_UnityEngine_Rect_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::Rect]::
    Stack_1_UnityEngine_Rect__Push
              (this,*pRVar1,
               MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Push_UnityEngine__Color_
              );
    UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_set_color(color,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GUIEx() */

void Assembly-CSharp.dll::RTG::GUIEx::GUIEx__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GUIEx);
    func_?(&MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Stack__);
    func_?(&TypeInfo__System__Collections__Generic__Stack<UnityEngine::Color>);
    cRam_? = '\x01';
  }
  this = (Stack_1_UnityEngine_Color_ *)
         func_?(TypeInfo__System__Collections__Generic__Stack<UnityEngine::Color>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Dynamic::
  BindingRestrictions+TestBuilder+AndNode]::
  Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___ctor
            ((Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)this,
             MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Stack__);
  TypeInfo__RTG__GUIEx->static_fields->_colorStack = this;
  func_?(TypeInfo__RTG__GUIEx->static_fields,this);
  return;
}

