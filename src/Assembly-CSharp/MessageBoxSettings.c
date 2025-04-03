
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_Initialize
               (MessageBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__MessageBoxSettings);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_textColor);
    func_?(&StringLiteral_billboard);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_test);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_text);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_textSize);
    cRam_? = '\x01';
  }
  id = woID;
  this_00 = (this_02->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    uVar1 = func_?();
code_?:
    func_?(uVar1);
code_?:
    func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Text,(MethodInfo *)0x0);
    if (id != -1) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_03,id,(MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar2->fields).data;
          puStack_3 = &uStack_4;
          uStack_4 = 0x3e4ccccd;
          in_stack_5 = TypeInfo__System__Single;
          pOVar6 = (Object *)func_?(TypeInfo__System__Single);
          if (this_04 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryAdd
                      ((Dictionary_2_System_Object_System_Object_ *)this_04,
                       (Object *)StringLiteral_textSize,pOVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                      );
            if ((TypeInfo__MessageBoxSettings->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MessageBoxSettings);
            }
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryAdd
                      ((Dictionary_2_System_Object_System_Object_ *)this_04,
                       (Object *)StringLiteral_textColor,
                       (Object *)TypeInfo__MessageBoxSettings->static_fields->defaultColor,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                      );
            this = (MessageBoxSettings *)((uint)this & 0xffffff);
            pOVar6 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryAdd
                      ((Dictionary_2_System_Object_System_Object_ *)this_04,
                       (Object *)StringLiteral_billboard,pOVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                      );
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_04,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (this_04 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_04,(Object *)StringLiteral_text,
               (Object *)StringLiteral_test,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_3 = (undefined4 *)0x3e4ccccd;
    pOVar6 = (Object *)func_?(TypeInfo__System__Single,&puStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_04,(Object *)StringLiteral_textSize
               ,pOVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__MessageBoxSettings->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MessageBoxSettings);
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_04,
               (Object *)StringLiteral_textColor,
               (Object *)TypeInfo__MessageBoxSettings->static_fields->defaultColor,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    in_stack_5 = (Single__Class *)((int)&root + 3);
    root = (GameObject *)((uint)root & 0xffffff);
    pOVar6 = (Object *)func_?(TypeInfo__System__Boolean,in_stack_5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_04,
               (Object *)StringLiteral_billboard,pOVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
code_?:
    unaff_EBX.m_Index = (int32_t)(this_02->fields).sizeSlider;
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                       (Object *)StringLiteral_textSize,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar1 = CONCAT44(TypeInfo__System__Single,TVar7.m_Index);
    if (((SettingsSlider *)unaff_EBX.m_Index == (SettingsSlider *)0x0) || (TVar7.m_Index == 0))
    goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar8 = (float *)func_?(TVar7.m_Index);
    SettingsSlider::SettingsSlider_Initialize
              ((SettingsSlider *)unaff_EBX.m_Index,StringLiteral_textSize,*pfVar8,0.1,0.4,
               (MethodInfo *)0x0);
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                       (Object *)StringLiteral_textSize,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar1 = CONCAT44(TypeInfo__System__Single,TVar7.m_Index);
    if (TVar7.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar8 = (float *)func_?(TVar7.m_Index);
    MessageBoxSettings_SetTextSize(this_02,*pfVar8,(MethodInfo *)0x0);
    unaff_EBX.m_Index = (int32_t)(this_02->fields).inputField;
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                       (Object *)StringLiteral_text,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((SettingsSlider *)unaff_EBX.m_Index == (SettingsSlider *)0x0) goto code_?;
    value.m_Index = 0;
    if (TVar7.m_Index != 0) {
      if (*(String__Class **)TVar7.m_Index == TypeInfo__System__String) {
        value = TVar7;
      }
      if ((String *)value.m_Index == (String *)0x0) {
        func_?(TVar7.m_Index,TypeInfo__System__String);
        goto code_?;
      }
    }
    SettingsInputField::SettingsInputField_Initialize
              ((SettingsInputField *)unaff_EBX.m_Index,StringLiteral_text,(String *)value.m_Index,
               (MethodInfo *)0x0);
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                           (Object *)StringLiteral_textColor,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    in_stack_5 = (Single__Class *)TypeInfo__System__Single;
    woID = unaff_EBX.m_Index;
    if (unaff_EBX.m_Index == 0) {
      iVar9 = 0;
      (this_02->fields).color = (Single__Array *)0x0;
code_?:
      unaff_EBX.m_Index = (int32_t)&(this_02->fields).color;
      func_?(unaff_EBX.m_Index,iVar9);
      pSVar10 = *(Single__Array **)unaff_EBX.m_Index;
      pSVar11 = (this_02->fields).colorR;
      if (pSVar10 == (Single__Array *)0x0) goto code_?;
      if (pSVar10->max_length != 0) {
        if (pSVar11 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar11,StringLiteral_colorR,pSVar10->vector[0],0.0,1.0,(MethodInfo *)0x0);
          pSVar10 = *(Single__Array **)unaff_EBX.m_Index;
          pSVar11 = (this_02->fields).colorG;
          if (pSVar10 != (Single__Array *)0x0) {
            if (pSVar10->max_length < 2) goto code_?;
            if (pSVar11 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar11,StringLiteral_colorG,pSVar10->vector[1],0.0,1.0,(MethodInfo *)0x0);
              pSVar10 = *(Single__Array **)unaff_EBX.m_Index;
              pSVar11 = (this_02->fields).colorB;
              if (pSVar10 != (Single__Array *)0x0) {
                if (pSVar10->max_length < 3) goto code_?;
                if (pSVar11 != (SettingsSlider *)0x0) {
                  SettingsSlider::SettingsSlider_Initialize
                            (pSVar11,StringLiteral_colorB,pSVar10->vector[2],0.0,1.0,(MethodInfo *)0x0
                            );
                  pSVar10 = *(Single__Array **)unaff_EBX.m_Index;
                  pIVar12 = (this_02->fields).preview;
                  if (pSVar10 != (Single__Array *)0x0) {
                    if (((pSVar10->max_length == 0) || (pSVar10->max_length < 2)) ||
                       (pSVar10->max_length < 3)) goto code_?;
                    if (pIVar12 != (Image *)0x0) {
                      (*(code *)(pIVar12->klass->vtable).set_color.method)
                                (pIVar12,pSVar10->vector[0],pSVar10->vector[1],pSVar10->vector[2],
                                 0x3f800000,(pIVar12->klass->vtable).get_raycastTarget.methodPtr);
                      this_01 = (this_02->fields).billboardToggle;
                      TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::TextureId]::
                              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                          *)this_04,(Object *)StringLiteral_billboard,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                      uVar1 = CONCAT44(TypeInfo__System__Boolean,TVar7.m_Index);
                      if ((this_01 != (SettingsToggle *)0x0) && (TVar7.m_Index != 0)) {
                        if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
                            (TypeInfo__System__Boolean->_0).element_class) {
                          pbVar13 = (bool *)func_?(TVar7.m_Index);
                          SettingsToggle::SettingsToggle_Initialize
                                    (this_01,StringLiteral_billboard,*pbVar13,(MethodInfo *)0x0);
                          return;
                        }
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    pSVar10 = (Single__Array *)
             func_?(unaff_EBX.m_Index,TypeInfo__System__Single,TypeInfo__System__Single);
    if (pSVar10 == (Single__Array *)0x0) goto code_?;
    unaff_EBX.m_Index = (int32_t)&(this_02->fields).color;
    *(Single__Array **)unaff_EBX.m_Index = pSVar10;
    in_stack_5 = (Single__Class *)TypeInfo__System__Single;
    iVar9 = func_?(woID,TypeInfo__System__Single,TypeInfo__System__Single);
    if (iVar9 != 0) goto code_?;
  }
  func_?(woID,in_stack_5);
code_?:
  func_?(unaff_EBX.m_Index,in_stack_5);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_OnSettingChanged
               (MessageBoxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__MessageBoxSettings);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_textColor);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_textSize);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_textSize,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pDVar2 = mscorlib.dll::System::Convert::Convert_ToDecimal
                        ((Decimal *)&stack0xffffffe8,value,(MethodInfo *)0x0);
    puVar3 = (undefined *)pDVar2->hi;
    ppDVar4 = (Decimal__Class **)pDVar2->lo;
    iVar5 = pDVar2->mid;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      puVar3 = &UNK_?;
      ppDVar4 = (Decimal__Class **)TypeInfo__System__Math;
      func_?();
    }
    if (cRam_? == '\0') {
      ppDVar4 = &TypeInfo__System__Decimal;
      puVar3 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
      puVar3 = &UNK_?;
      ppDVar4 = (Decimal__Class **)TypeInfo__System__Decimal;
      func_?();
    }
    d.hi = (int32_t)ppDVar4;
    d.flags = (int32_t)puVar3;
    d.lo = iVar5;
    d.mid = 1;
    d.ulomidLE._0_4_ = 0;
    d.ulomidLE._4_4_ = iVar5;
    pDVar2 = mscorlib.dll::System::Decimal::Decimal_Round
                        ((Decimal *)&stack0xffffffe8,d,in_stack_6,unaff_EBP);
    iVar5 = pDVar2->flags;
    iVar7 = pDVar2->hi;
    iVar8 = pDVar2->lo;
    iVar9 = pDVar2->mid;
    if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value_00.hi = iVar7;
    value_00.flags = iVar5;
    value_00.lo = iVar8;
    value_00.mid = iVar9;
    value_00.ulomidLE._0_4_ = 0;
    value_00.ulomidLE._4_4_ = in_stack_10;
    value_02 = mscorlib.dll::System::Decimal::Decimal_op_Explicit_5(value_00,in_stack_11);
    MessageBoxSettings_SetTextSize((MessageBoxSettings *)&UNK_?,value_02,(MethodInfo *)0x0);
    pSVar12 = _UNK_?;
    value_01 = (Object *)func_?();
    if (pSVar12 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(pSVar12,key,value_01,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_colorR,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_colorG,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_colorB,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((TypeInfo__MessageBoxSettings->_1).cctor_finished_or_no_cctor == 0) {
          this = (MessageBoxSettings *)&UNK_?;
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          this = (MessageBoxSettings *)&StringLiteral__quad;
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_text,(MethodInfo *)0x0);
        if ((bVar1 != 0) && (value != (Object *)0x0)) {
          pSVar13 = (String *)0x0;
          if ((String__Class *)value->klass == TypeInfo__System__String) {
            pSVar13 = (String *)value;
          }
          if (pSVar13 != (String *)0x0) {
            pSVar14 = mscorlib.dll::System::String::String_ToLower(pSVar13,(MethodInfo *)0x0);
            if (pSVar14 == (String *)0x0) goto code_?;
            bVar1 = mscorlib.dll::System::String::String_Contains
                              (pSVar14,StringLiteral__quad,(MethodInfo *)0x0);
            if (bVar1 != 0) {
              iVar5 = mscorlib.dll::System::String::String_IndexOf_5
                                (pSVar14,StringLiteral__quad,StringComparison__Enum_Ordinal,
                                 (MethodInfo *)0x0);
              iVar7 = mscorlib.dll::System::String::String_IndexOf_6
                                (pSVar14,::StringLiteral__,iVar5,StringComparison__Enum_Ordinal,
                                 (MethodInfo *)0x0);
              iVar15 = 0;
              if (iVar7 < 0) {
                value = (Object *)
                        mscorlib.dll::System::String::String_Substring_1
                                  (pSVar13,0,iVar5,(MethodInfo *)0x0);
              }
              else {
                pSVar14 = mscorlib.dll::System::String::String_Substring_1
                                   (pSVar13,0,iVar5,(MethodInfo *)0x0);
                pSVar13 = mscorlib.dll::System::String::String_Substring
                                   (pSVar13,iVar15 + 1,(MethodInfo *)0x0);
                value = (Object *)
                        mscorlib.dll::System::String::String_Concat_3
                                  (pSVar14,pSVar13,(MethodInfo *)0x0);
              }
            }
          }
        }
        pSVar12 = (this->fields).settingsBase;
        if (pSVar12 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(pSVar12,key,value,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pSVar16 = (this->fields).color;
      if ((pSVar16 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar17 = (float *)func_?();
      if (2 < pSVar16->max_length) {
        pSVar16->vector[2] = *pfVar17;
        pSVar12 = (this->fields).settingsBase;
        if (pSVar12 == (SettingsBase *)0x0) goto code_?;
        SettingsBase::SettingsBase_OnSettingChanged
                  (pSVar12,StringLiteral_textColor,(Object *)(this->fields).color,(MethodInfo *)0x0);
        pSVar16 = (this->fields).color;
        if (pSVar16 == (Single__Array *)0x0) goto code_?;
        if (((pSVar16->max_length != 0) && (1 < pSVar16->max_length)) && (2 < pSVar16->max_length)) {
          if ((this->fields).preview != (Image *)0x0) {
            func_?();
            return;
          }
          goto code_?;
        }
      }
    }
    else {
      pSVar16 = (this->fields).color;
      if ((pSVar16 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar17 = (float *)func_?();
      if (1 < pSVar16->max_length) {
        pSVar16->vector[1] = *pfVar17;
        goto code_?;
      }
    }
  }
  else {
    pSVar16 = (this->fields).color;
    if ((pSVar16 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar17 = (float *)func_?();
      if (pSVar16->max_length != 0) {
        pSVar16->vector[0] = *pfVar17;
code_?:
        pSVar12 = (this->fields).settingsBase;
        if (pSVar12 == (SettingsBase *)0x0) goto code_?;
        SettingsBase::SettingsBase_OnSettingChanged
                  (pSVar12,StringLiteral_textColor,(Object *)(this->fields).color,(MethodInfo *)0x0);
        pSVar16 = (this->fields).color;
        pIVar18 = (this->fields).preview;
        if (pSVar16 == (Single__Array *)0x0) goto code_?;
        if (((pSVar16->max_length != 0) && (1 < pSVar16->max_length)) && (2 < pSVar16->max_length)) {
          if (pIVar18 != (Image *)0x0) {
            (*(code *)(pIVar18->klass->vtable).set_color.method)();
            return;
          }
          goto code_?;
        }
      }
    }
    else {
code_?:
      func_?();
    }
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Object RemoveQuadFromText(String, Object) */

Object * Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_RemoveQuadFromText
                   (String *key,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__quad);
    func_?(&StringLiteral_text);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality(key,StringLiteral_text,(MethodInfo *)0x0)
  ;
  if ((bVar1 != 0) && (val != (Object *)0x0)) {
    pSVar2 = (String *)0x0;
    if ((String__Class *)val->klass == TypeInfo__System__String) {
      pSVar2 = (String *)val;
    }
    if (pSVar2 != (String *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_ToLower(pSVar2,(MethodInfo *)0x0);
      if (pSVar3 == (String *)0x0) {
        func_?();
        pcVar4 = (code *)swi(3);
        pOVar5 = (Object *)(*pcVar4)();
        return pOVar5;
      }
      bVar1 = mscorlib.dll::System::String::String_Contains
                        (pSVar3,StringLiteral__quad,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        startIndex = mscorlib.dll::System::String::String_IndexOf_5
                               (pSVar3,StringLiteral__quad,StringComparison__Enum_Ordinal,
                                (MethodInfo *)0x0);
        iVar6 = mscorlib.dll::System::String::String_IndexOf_6
                          (pSVar3,::StringLiteral__,startIndex,StringComparison__Enum_Ordinal,
                           (MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar2,0,startIndex,(MethodInfo *)0x0);
        if (-1 < iVar6) {
          pSVar2 = mscorlib.dll::System::String::String_Substring
                             (pSVar2,iVar6 + 1,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar3,pSVar2,(MethodInfo *)0x0);
          return (Object *)pSVar2;
        }
        return (Object *)pSVar3;
      }
    }
  }
  return val;
}


/* Void SetTextSize(Single) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_SetTextSize
               (MessageBoxSettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&StringLiteral_Large);
    func_?(&StringLiteral_Huge);
    func_?(&StringLiteral_Small);
    func_?(&StringLiteral_Medium);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if ((float)((uint)(value - _UNK_?) & _UNK_?) <
      TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
    pTVar1 = (this->fields).sizeLabel;
    pSVar2 = StringLiteral_Small;
  }
  else {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    if ((float)((uint)(value - _UNK_?) & _UNK_?) <
        TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
      pTVar1 = (this->fields).sizeLabel;
      pSVar2 = StringLiteral_Medium;
    }
    else {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      if ((float)((uint)(value - _UNK_?) & _UNK_?) <
          TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
        pTVar1 = (this->fields).sizeLabel;
        pSVar2 = StringLiteral_Large;
      }
      else {
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <=
            (float)((uint)(value - _UNK_?) & _UNK_?)) {
          return;
        }
        pTVar1 = (this->fields).sizeLabel;
        pSVar2 = StringLiteral_Huge;
      }
    }
  }
  pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MessageBoxSettings() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MessageBoxSettings);
    func_?(&TypeInfo__System__Single);
    func_?(&F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_Field);
    cRam_? = '\x01';
  }
  array = (Single__Array *)func_?(TypeInfo__System__Single,4);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,_F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_Field,
             (MethodInfo *)0x0);
  TypeInfo__MessageBoxSettings->static_fields->defaultColor = array;
  func_?(TypeInfo__MessageBoxSettings->static_fields,array);
  return;
}


/* MessageBoxSettings() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings__ctor
               (MessageBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,4);
  ppSVar2 = &(this->fields).color;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

