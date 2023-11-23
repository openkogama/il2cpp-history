
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::WaterBoxSettings::WaterBoxSettings_Initialize
               (WaterBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pWVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&FBFE4CA61EC299680879894A16CA776F81F23454312659AC8736249AA1E9722B_Field);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_lethal);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_waterColor);
    func_?(&StringLiteral_colorG);
    cRam_? = '\x01';
  }
  id = woID;
  this_00 = (pWVar1->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    uVar2 = func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_WaterPlane,(MethodInfo *)0x0);
    if (id != -1) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_02,id,(MethodInfo *)0x0), pMVar3 != (MVWorldObject *)0x0)) &&
         (this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar3->fields).data,
         this_03 !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) goto code_?;
      goto code_?;
    }
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    array = (Array *)func_?(TypeInfo__System__Single,3);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (array,_FBFE4CA61EC299680879894A16CA776F81F23454312659AC8736249AA1E9722B_Field,
               (MethodInfo *)0x0);
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_03,
               (Object *)StringLiteral_waterColor,(Object *)array,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this = (WaterBoxSettings *)((uint)this & 0xffffff);
    pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_lethal,
               pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
code_?:
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                       (Object *)StringLiteral_waterColor,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar5.m_Index != 0) {
      root = (GameObject *)TypeInfo__System__Single;
      this = (WaterBoxSettings *)&UNK_?;
      woID = TVar5.m_Index;
      pSVar6 = (Single__Array *)func_?();
      if (pSVar6 != (Single__Array *)0x0) {
        (pWVar1->fields).color = pSVar6;
        root = (GameObject *)TypeInfo__System__Single;
        this = (WaterBoxSettings *)&UNK_?;
        woID = TVar5.m_Index;
        pGVar7 = (GameObject *)func_?();
        if (pGVar7 != (GameObject *)0x0) goto code_?;
      }
      this = (WaterBoxSettings *)&UNK_?;
      woID = TVar5.m_Index;
      func_?();
      goto code_?;
    }
    (pWVar1->fields).color = (Single__Array *)0x0;
    pGVar7 = (GameObject *)0x0;
code_?:
    woID = (int32_t)&(pWVar1->fields).color;
    this = (WaterBoxSettings *)&UNK_?;
    root = pGVar7;
    func_?();
    pSVar6 = (pWVar1->fields).color;
    pSVar8 = (pWVar1->fields).colorR;
    if (pSVar6 == (Single__Array *)0x0) goto code_?;
    if (pSVar6->max_length == 0) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_colorR,pSVar6->vector[0],0.0,1.0,(MethodInfo *)0x0);
    pSVar6 = (pWVar1->fields).color;
    pSVar8 = (pWVar1->fields).colorG;
    if (pSVar6 == (Single__Array *)0x0) goto code_?;
    if (pSVar6->max_length < 2) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_colorG,pSVar6->vector[1],0.0,1.0,(MethodInfo *)0x0);
    pSVar6 = (pWVar1->fields).color;
    pSVar8 = (pWVar1->fields).colorB;
    if (pSVar6 == (Single__Array *)0x0) goto code_?;
    if (pSVar6->max_length < 3) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_colorB,pSVar6->vector[2],0.0,1.0,(MethodInfo *)0x0);
    bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                       (Object *)StringLiteral_lethal,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar9 == 0) {
      root = (GameObject *)((uint)root & 0xffffff);
      pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,(int)&root + 3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_lethal
                 ,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    this_01 = (pWVar1->fields).toggle;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                       (Object *)StringLiteral_lethal,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__Boolean,TVar5.m_Index);
    if ((this_01 == (SettingsToggle *)0x0) || (TVar5.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
        (TypeInfo__System__Boolean->_0).element_class) {
      pbVar10 = (bool *)func_?(TVar5.m_Index);
      SettingsToggle::SettingsToggle_Initialize
                (this_01,StringLiteral_lethal,*pbVar10,(MethodInfo *)0x0);
      pSVar6 = (pWVar1->fields).color;
      pIVar11 = (pWVar1->fields).preview;
      if (pSVar6 != (Single__Array *)0x0) {
        if (((pSVar6->max_length == 0) || (pSVar6->max_length < 2)) || (pSVar6->max_length < 3))
        goto code_?;
        if (pIVar11 != (Image *)0x0) {
          (*(code *)(pIVar11->klass->vtable).set_color.method)
                    (pIVar11,pSVar6->vector[0],pSVar6->vector[1],pSVar6->vector[2],0x3f800000,
                     (pIVar11->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(uVar2);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::WaterBoxSettings::WaterBoxSettings_OnSettingChanged
               (WaterBoxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_colorG);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_colorR,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_colorG,(MethodInfo *)0x0);
    this_00 = StringLiteral_colorB;
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_colorB,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (this_00[1].klass != (String__Class *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    ((SettingsBase *)this_00[1].klass,key,value,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        iVar2 = this_00[2].fields._stringLength;
        if (iVar2 != 0) {
          if (value != (Object *)0x0) {
            if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              puVar3 = (undefined4 *)func_?();
              if (2 < *(uint *)(iVar2 + 0xc)) {
                *(undefined4 *)(iVar2 + 0x18) = *puVar3;
                WaterBoxSettings_UpdateWaterColor((WaterBoxSettings *)this_00,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
    else {
      pSVar4 = (this->fields).color;
      if (pSVar4 != (Single__Array *)0x0) {
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar5 = (float *)func_?();
            if (1 < pSVar4->max_length) {
              pSVar4->vector[1] = *pfVar5;
              WaterBoxSettings_UpdateWaterColor(this,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
          goto code_?;
        }
      }
    }
code_?:
    func_?();
  }
  else {
    pSVar4 = (this->fields).color;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar5 = (float *)func_?(value);
      if (pSVar4->max_length != 0) {
        pSVar4->vector[0] = *pfVar5;
        WaterBoxSettings_UpdateWaterColor(this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateWaterColor() */

void Assembly-CSharp.dll::WaterBoxSettings::WaterBoxSettings_UpdateWaterColor
               (WaterBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_waterColor);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged
              (this_00,StringLiteral_waterColor,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar1 = (this->fields).color;
    pIVar2 = (this->fields).preview;
    if (pSVar1 != (Single__Array *)0x0) {
      if (((pSVar1->max_length == 0) || (pSVar1->max_length < 2)) || (pSVar1->max_length < 3))
      goto code_?;
      if (pIVar2 != (Image *)0x0) {
        (*(code *)(pIVar2->klass->vtable).set_color.method)
                  (pIVar2,pSVar1->vector[0],pSVar1->vector[1],pSVar1->vector[2],0x3f800000,
                   (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* WaterBoxSettings() */

void Assembly-CSharp.dll::WaterBoxSettings::WaterBoxSettings__ctor
               (WaterBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,3);
  (this->fields).color = pSVar1;
  func_?(&(this->fields).color,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

