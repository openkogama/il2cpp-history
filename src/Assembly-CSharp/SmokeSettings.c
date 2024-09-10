
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SmokeSettings::SmokeSettings_Initialize
               (SmokeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
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
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&::_1DC5C8E021C663CD8F7ECF1FB0C6D4112BC8D7F3C9E0095CD26BD7AF7B8D7F13_Field);
    func_?(&E47C56787A2D4D1A0F11D726D19241867452F74BA55E5B2B9CC270DCEBB4C727_Field);
    func_?(&StringLiteral_alpha);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_color);
    func_?(&StringLiteral_wind);
    func_?(&StringLiteral_length);
    cRam_? = '\x01';
  }
  id = woID;
  this_00 = (pSVar1->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    uVar2 = func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Smoke,(MethodInfo *)0x0);
    if (id != -1) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_01,id,(MethodInfo *)0x0), pMVar3 != (MVWorldObject *)0x0)) &&
         (this_02 = (SmokeSettings *)(pMVar3->fields).data, this_02 != (SmokeSettings *)0x0))
      goto code_?;
      goto code_?;
    }
    this_02 = (SmokeSettings *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pAVar4 = (Array *)func_?(TypeInfo__System__Single,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar4,__1DC5C8E021C663CD8F7ECF1FB0C6D4112BC8D7F3C9E0095CD26BD7AF7B8D7F13_Field,
               (MethodInfo *)0x0);
    if (this_02 == (SmokeSettings *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_color,
               (Object *)pAVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this = (SmokeSettings *)0x41200000;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&this);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_length,
               pOVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
code_?:
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       (Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar6 == 0) {
      root = (GameObject *)0x4;
      woID = (int32_t)TypeInfo__System__Single;
      this = (SmokeSettings *)&UNK_?;
      pAVar4 = (Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar4,_E47C56787A2D4D1A0F11D726D19241867452F74BA55E5B2B9CC270DCEBB4C727_Field,
                 (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_color,
                 (Object *)pAVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    root = (GameObject *)
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
    ;
    woID = (int32_t)StringLiteral_length;
    this = this_02;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       (Object *)StringLiteral_length,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar6 == 0) {
      root = (GameObject *)0x40c00000;
      method = (MethodInfo *)&UNK_?;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_length
                 ,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    root = (GameObject *)&UNK_?;
    method = (MethodInfo *)this_02;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       (Object *)StringLiteral_wind,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar6 == 0) {
      root = (GameObject *)0x0;
      woID = func_?();
      root = (GameObject *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
      ;
      this = (SmokeSettings *)StringLiteral_wind;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_wind,
                 (Object *)woID,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       (Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    root = (GameObject *)TypeInfo__System__Single;
    if (TVar7.m_Index != 0) {
      pSVar8 = (Single__Array *)func_?();
      if (pSVar8 != (Single__Array *)0x0) {
        (pSVar1->fields).color = pSVar8;
        root = (GameObject *)TypeInfo__System__Single;
        iVar9 = func_?();
        if (iVar9 != 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
    (pSVar1->fields).color = (Single__Array *)0x0;
code_?:
    func_?();
    pSVar8 = (pSVar1->fields).color;
    pSVar10 = (pSVar1->fields).colorR;
    if (pSVar8 == (Single__Array *)0x0) goto code_?;
    if (pSVar8->max_length == 0) goto code_?;
    if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar10,StringLiteral_colorR,pSVar8->vector[0],0.0,1.0,(MethodInfo *)0x0);
    pSVar8 = (pSVar1->fields).color;
    pSVar10 = (pSVar1->fields).colorG;
    if (pSVar8 == (Single__Array *)0x0) goto code_?;
    if (pSVar8->max_length < 2) goto code_?;
    if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar10,StringLiteral_colorG,pSVar8->vector[1],0.0,1.0,(MethodInfo *)0x0);
    pSVar8 = (pSVar1->fields).color;
    pSVar10 = (pSVar1->fields).colorB;
    if (pSVar8 == (Single__Array *)0x0) goto code_?;
    if (pSVar8->max_length < 3) goto code_?;
    if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar10,StringLiteral_colorB,pSVar8->vector[2],0.0,1.0,(MethodInfo *)0x0);
    pSVar8 = (pSVar1->fields).color;
    pSVar10 = (pSVar1->fields).alpha;
    if (pSVar8 == (Single__Array *)0x0) goto code_?;
    if (pSVar8->max_length < 4) goto code_?;
    if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar10,StringLiteral_alpha,pSVar8->vector[3],0.1,1.0,(MethodInfo *)0x0);
    pSVar10 = (pSVar1->fields).range;
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       (Object *)StringLiteral_length,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__Single,TVar7.m_Index);
    if ((pSVar10 == (SettingsSlider *)0x0) || (TVar7.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar11 = (float *)func_?(TVar7.m_Index);
      SettingsSlider::SettingsSlider_Initialize
                (pSVar10,StringLiteral_length,*pfVar11,1.0,12.0,(MethodInfo *)0x0);
      pSVar10 = (pSVar1->fields).wind;
      TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                         (Object *)StringLiteral_wind,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar2 = CONCAT44(TypeInfo__System__Single,TVar7.m_Index);
      if ((pSVar10 != (SettingsSlider *)0x0) && (TVar7.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar11 = (float *)func_?(TVar7.m_Index);
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar10,StringLiteral_wind,*pfVar11,0.0,0.6,(MethodInfo *)0x0);
        pSVar8 = (pSVar1->fields).color;
        pIVar12 = (pSVar1->fields).preview;
        if (pSVar8 != (Single__Array *)0x0) {
          if ((((pSVar8->max_length == 0) || (pSVar8->max_length < 2)) ||
              (pSVar8->max_length < 3)) || (pSVar8->max_length < 4)) goto code_?;
          if (pIVar12 != (Image *)0x0) {
            (*(code *)(pIVar12->klass->vtable).set_color.method)
                      (pIVar12,pSVar8->vector[0],pSVar8->vector[1],pSVar8->vector[2],
                       pSVar8->vector[3],(pIVar12->klass->vtable).get_raycastTarget.methodPtr);
            return;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar2);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SmokeSettings::SmokeSettings_OnSettingChanged
               (SmokeSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_alpha);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_Setting_changed_);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
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
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_alpha,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pSVar2 = (this->fields).settingsBase;
          if (pSVar2 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged(pSVar2,key,value,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Setting_changed_,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pSVar3 = (this->fields).color;
          if (pSVar3 != (Single__Array *)0x0) {
            if (value != (Object *)0x0) {
              if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
              goto code_?;
              pfVar4 = (float *)func_?();
              if (pSVar3->max_length < 4) goto code_?;
              pSVar3->vector[3] = *pfVar4;
              pSVar2 = (this->fields).settingsBase;
              if (pSVar2 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          (pSVar2,StringLiteral_color,(Object *)(this->fields).color,
                           (MethodInfo *)0x0);
                pSVar3 = (this->fields).color;
                if (pSVar3 != (Single__Array *)0x0) {
                  if (((pSVar3->max_length == 0) || (pSVar3->max_length < 2)) ||
                     ((pSVar3->max_length < 3 || (pSVar3->max_length < 4)))) goto code_?;
                  if ((this->fields).preview != (Image *)0x0) {
                    func_?(0x17);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pSVar3 = (this->fields).color;
        if (pSVar3 != (Single__Array *)0x0) {
          if (value != (Object *)0x0) {
            if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              pfVar4 = (float *)func_?();
              if (pSVar3->max_length < 3) goto code_?;
              pSVar3->vector[2] = *pfVar4;
              goto code_?;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    pSVar3 = (this->fields).color;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar4 = (float *)func_?(value);
      if (pSVar3->max_length < 2) goto code_?;
      pSVar3->vector[1] = *pfVar4;
      goto code_?;
    }
  }
  else {
    pSVar3 = (this->fields).color;
    if (pSVar3 != (Single__Array *)0x0) {
      if (value != (Object *)0x0) {
        if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar4 = (float *)func_?(value);
        if (pSVar3->max_length == 0) goto code_?;
        pSVar3->vector[0] = *pfVar4;
code_?:
        pSVar2 = (this->fields).settingsBase;
        if (pSVar2 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (pSVar2,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
          pSVar3 = (this->fields).color;
          pIVar5 = (this->fields).preview;
          if (pSVar3 != (Single__Array *)0x0) {
            if ((((pSVar3->max_length == 0) || (pSVar3->max_length < 2)) ||
                (fStack6 = pSVar3->vector[1], pSVar3->max_length < 3)) ||
               (puStack7 = (undefined *)pSVar3->vector[2], pSVar3->max_length < 4))
            goto code_?;
            if (pIVar5 != (Image *)0x0) {
              (*(code *)(pIVar5->klass->vtable).set_color.method)();
              return;
            }
          }
        }
      }
    }
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* SmokeSettings() */

void Assembly-CSharp.dll::SmokeSettings::SmokeSettings__ctor(SmokeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,4);
  (this->fields).color = pSVar1;
  func_?(&(this->fields).color,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

