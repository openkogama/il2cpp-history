
/* Single GetScreenScaleValue() */

float Assembly-CSharp.dll::ScaleToPhysicalSize::ScaleToPhysicalSize_GetScreenScaleValue
                (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScaleToPhysicalSize);
    func_?(&TypeInfo__ScreenSizeOptimizer);
    func_?(&StringLiteral_widthSquared__);
    func_?(&StringLiteral_physicalScreenSizeInches__);
    func_?(&StringLiteral_DPI__);
    func_?(&StringLiteral_screen_h__);
    func_?(&StringLiteral__vs_);
    func_?(&StringLiteral_Screen_size_in_inches__);
    func_?(&StringLiteral_heightSquared__);
    func_?(&StringLiteral_Falling_back_to_base_DPI);
    func_?(&StringLiteral_magniute_0);
    func_?(&StringLiteral_screen_w__);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
  if (fVar1 == 0.0) {
    if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ScaleToPhysicalSize);
    }
    ScaleToPhysicalSize_PrintLog(StringLiteral_Falling_back_to_base_DPI,(MethodInfo *)0x0);
  }
  SStack_2.m_value = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).x;
  fStack_3 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  SVar4.m_value = SStack_2.m_value;
  IVar5.m_value = (int32_t)fStack_3;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar6 = (double)((float)IVar5.m_value * (float)IVar5.m_value + SVar4.m_value * SVar4.m_value);
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  if ((float)dVar6 == 0.0) {
    if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ScaleToPhysicalSize);
    }
    ScaleToPhysicalSize_PrintLog(StringLiteral_magniute_0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  }
  pSVar7 = mscorlib.dll::System::Single::Single_ToString(&SStack_2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  pSVar8 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xffffffe4,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_screen_w__,pSVar7,StringLiteral__vs_,pSVar8,(MethodInfo *)0x0);
  if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  ScaleToPhysicalSize_PrintLog(pSVar7,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&stack0x00000028,(MethodInfo *)0x0);
  IStack9.m_value =
       UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(&stack0x00000014,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_screen_h__,pSVar7,StringLiteral__vs_,pSVar8,(MethodInfo *)0x0);
  ScaleToPhysicalSize_PrintLog(pSVar7,(MethodInfo *)0x0);
  fStack10 = in_stack_11 * in_stack_11;
  fStack12 = in_stack_13 * in_stack_13;
  dVar6 = (double)(fStack10 + fStack12);
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fStack14 = (float)dVar6 / in_stack_15.m_value;
  pSVar7 = mscorlib.dll::System::Single::Single_ToString(&stack0x00000034,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_DPI__,pSVar7,(MethodInfo *)0x0);
  ScaleToPhysicalSize_PrintLog(pSVar7,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::Single::Single_ToString(&stack0x00000068,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_widthSquared__,pSVar7,(MethodInfo *)0x0);
  ScaleToPhysicalSize_PrintLog(pSVar7,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&stack0x00000088,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_heightSquared__,pSVar7,(MethodInfo *)0x0);
  ScaleToPhysicalSize_PrintLog(pSVar7,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&stack0x00000090,(MethodInfo *)0x0);
  SStack16.m_value = (float)&UNK_?;
  pSVar7 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_physicalScreenSizeInches__,pSVar7,(MethodInfo *)0x0);
  ScaleToPhysicalSize_PrintLog(pSVar7,(MethodInfo *)0x0);
  if (_UNK_? <= in_stack_17) {
    SStack18.m_value = in_stack_17 / _UNK_?;
    pSVar7 = mscorlib.dll::System::Single::Single_ToString(&stack0x000000b0,(MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Screen_size_in_inches__,pSVar7,(MethodInfo *)0x0);
    if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ScaleToPhysicalSize_PrintLog(pSVar7,(MethodInfo *)0x0);
    return in_stack_19;
  }
  return 1.0;
}


/* Void PrintLog(String) */

void Assembly-CSharp.dll::ScaleToPhysicalSize::ScaleToPhysicalSize_PrintLog
               (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ScaleToPhysicalSize);
    func_?(&StringLiteral_ScaleToPhysicalSize__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ScaleToPhysicalSize);
  }
  if (TypeInfo__ScaleToPhysicalSize->static_fields->debugging != 0) {
    message = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_ScaleToPhysicalSize__,s,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ScaleToPhysicalSize::ScaleToPhysicalSize_Start
               (ScaleToPhysicalSize *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__ScaleToPhysicalSize);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
          IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                    ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)0x0,in_stack_2);
  if (bVar1 != 0) {
    return;
  }
  if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ScaleToPhysicalSize);
  }
  fVar3 = ScaleToPhysicalSize_GetScreenScaleValue((MethodInfo *)0x0);
  pRVar4 = (this->fields).moveTarget;
  if (pRVar4 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar4,(MethodInfo *)0x0);
    pRVar4 = (this->fields).moveTarget;
    if (pRVar4 != (RectTransform *)0x0) {
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(pRVar4,(MethodInfo *)0x0);
      this_00 = (this->fields).moveTarget;
      fVar6 = VVar5.y / fVar3;
      if (this_00 != (RectTransform *)0x0) {
        VVar5.y = fVar6;
        VVar5.x = (float)pRVar4 / fVar3;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (this_00,VVar5,(MethodInfo *)0x0);
        pRVar4 = (this->fields).moveTarget;
        if (pRVar4 != (RectTransform *)0x0) {
          VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_get_sizeDelta(pRVar4,(MethodInfo *)0x0);
          value.y = VVar5.y / fVar6;
          value.x = (float)this_00 / fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar4,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* ScaleToPhysicalSize() */

void Assembly-CSharp.dll::ScaleToPhysicalSize::ScaleToPhysicalSize__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScaleToPhysicalSize);
    cRam_? = '\x01';
  }
  TypeInfo__ScaleToPhysicalSize->static_fields->dpiScale = -1.0;
  TypeInfo__ScaleToPhysicalSize->static_fields->debugging = 0;
  return;
}


/* Single get_DpiScale() */

float Assembly-CSharp.dll::ScaleToPhysicalSize::ScaleToPhysicalSize_get_DpiScale(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__ScaleToPhysicalSize);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
          IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                    ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)0x0,in_ECX);
  if (bVar1 == 0) {
    if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ScaleToPhysicalSize);
    }
    if (TypeInfo__ScaleToPhysicalSize->static_fields->dpiScale <= 0.0 &&
        TypeInfo__ScaleToPhysicalSize->static_fields->dpiScale != 0.0) {
      if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ScaleToPhysicalSize);
      }
      fVar2 = ScaleToPhysicalSize_GetScreenScaleValue((MethodInfo *)0x0);
      TypeInfo__ScaleToPhysicalSize->static_fields->dpiScale = fVar2;
    }
    if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ScaleToPhysicalSize);
    }
    return TypeInfo__ScaleToPhysicalSize->static_fields->dpiScale;
  }
  return 1.0;
}

