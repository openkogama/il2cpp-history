
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
         (this_02 = (MethodInfo *)(pMVar3->fields).data, this_02 != (MethodInfo *)0x0))
      goto code_?;
      goto code_?;
    }
    this_02 = (MethodInfo *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_02 == (MethodInfo *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pAVar4 = (Array *)func_?(TypeInfo__System__Single,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar4,__1DC5C8E021C663CD8F7ECF1FB0C6D4112BC8D7F3C9E0095CD26BD7AF7B8D7F13_Field,
               (MethodInfo *)0x0);
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
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_02,
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
    this = (SmokeSettings *)this_02;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_02,
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
    method = this_02;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_02,
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
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_02,
                        (Object *)StringLiteral_color,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    root = (GameObject *)TypeInfo__System__Single;
    if (pOVar5 != (Object *)0x0) {
      pSVar7 = (Single__Array *)func_?();
      if (pSVar7 != (Single__Array *)0x0) {
        (pSVar1->fields).color = pSVar7;
        root = (GameObject *)TypeInfo__System__Single;
        iVar8 = func_?();
        if (iVar8 != 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
    (pSVar1->fields).color = (Single__Array *)0x0;
code_?:
    func_?();
    pSVar7 = (pSVar1->fields).color;
    pSVar9 = (pSVar1->fields).colorR;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length == 0) goto code_?;
    if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar9,StringLiteral_colorR,pSVar7->vector[0],0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (pSVar1->fields).color;
    pSVar9 = (pSVar1->fields).colorG;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 2) goto code_?;
    if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar9,StringLiteral_colorG,pSVar7->vector[1],0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (pSVar1->fields).color;
    pSVar9 = (pSVar1->fields).colorB;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 3) goto code_?;
    if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar9,StringLiteral_colorB,pSVar7->vector[2],0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (pSVar1->fields).color;
    pSVar9 = (pSVar1->fields).alpha;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 4) goto code_?;
    if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar9,StringLiteral_alpha,pSVar7->vector[3],0.1,1.0,(MethodInfo *)0x0);
    pSVar9 = (pSVar1->fields).range;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_02,
                        (Object *)StringLiteral_length,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar5);
    if ((pSVar9 == (SettingsSlider *)0x0) || (pOVar5 == (Object *)0x0)) goto code_?;
    if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar10 = (float *)func_?(pOVar5);
      SettingsSlider::SettingsSlider_Initialize
                (pSVar9,StringLiteral_length,*pfVar10,1.0,12.0,(MethodInfo *)0x0);
      pSVar9 = (pSVar1->fields).wind;
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_02,
                          (Object *)StringLiteral_wind,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar5);
      if ((pSVar9 != (SettingsSlider *)0x0) && (pOVar5 != (Object *)0x0)) {
        if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar10 = (float *)func_?(pOVar5);
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar9,StringLiteral_wind,*pfVar10,0.0,0.6,(MethodInfo *)0x0);
        pSVar7 = (pSVar1->fields).color;
        pIVar11 = (pSVar1->fields).preview;
        if (pSVar7 != (Single__Array *)0x0) {
          if ((((pSVar7->max_length == 0) || (pSVar7->max_length < 2)) || (pSVar7->max_length < 3))
             || (pSVar7->max_length < 4)) goto code_?;
          if (pIVar11 != (Image *)0x0) {
            (*(pIVar11->klass->vtable).set_color.methodPtr)
                      (pIVar11,pSVar7->vector[0],pSVar7->vector[1],pSVar7->vector[2],
                       pSVar7->vector[3],(pIVar11->klass->vtable).set_color.method);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
              (*(pIVar5->klass->vtable).set_color.methodPtr)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

