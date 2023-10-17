
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings_Initialize
               (PointLightSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_hide);
    func_?(&StringLiteral_intensity);
    func_?(&StringLiteral_range);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_halo);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  id = woID;
  pSVar2 = (pPVar1->fields).settingsBase;
  if (pSVar2 == (SettingsBase *)0x0) {
code_?:
    uVar3 = func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (pSVar2,woID,root,MVWorldObjectDocumentationType__Enum_PointLight,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,id,(MethodInfo *)0x0);
    if ((pMVar4 == (MVWorldObject *)0x0) ||
       (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pMVar4->fields).data,
       this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0))
    goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 == 0) {
      root = (GameObject *)((int)&this + 3);
      woID = (int32_t)TypeInfo__System__Boolean;
      this = (PointLightSettings *)&UNK_?;
      pOVar6 = (Object *)func_?();
      this = (PointLightSettings *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_hide,
                 pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar2 = (pPVar1->fields).settingsBase;
      this = (PointLightSettings *)((int)&root + 3);
      root = (GameObject *)CONCAT13(1,root._0_3_);
      pOVar6 = (Object *)func_?();
      if (pSVar2 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged
                (pSVar2,StringLiteral_hide,pOVar6,(MethodInfo *)0x0);
    }
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_halo,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 == 0) {
      this = (PointLightSettings *)0x1;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_halo,
                 pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar2 = (pPVar1->fields).settingsBase;
      root = (GameObject *)0x1;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&root);
      if (pSVar2 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged
                (pSVar2,StringLiteral_halo,pOVar6,(MethodInfo *)0x0);
    }
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_00,
                        (Object *)StringLiteral_color,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    this = (PointLightSettings *)TypeInfo__System__Single;
    if (pOVar6 != (Object *)0x0) {
      pSVar7 = (Single__Array *)func_?(pOVar6,TypeInfo__System__Single);
      if (pSVar7 != (Single__Array *)0x0) {
        (pPVar1->fields).color = pSVar7;
        this = (PointLightSettings *)TypeInfo__System__Single;
        iVar8 = func_?(pOVar6,TypeInfo__System__Single);
        if (iVar8 != 0) goto code_?;
      }
      func_?(pOVar6,this);
      goto code_?;
    }
    (pPVar1->fields).color = (Single__Array *)0x0;
    iVar8 = 0;
code_?:
    func_?(&(pPVar1->fields).color,iVar8);
    pSVar7 = (pPVar1->fields).color;
    pSVar9 = (pPVar1->fields).colorR;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length == 0) goto code_?;
    if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar9,StringLiteral_colorR,pSVar7->vector[0],0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (pPVar1->fields).color;
    pSVar9 = (pPVar1->fields).colorG;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 2) goto code_?;
    if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar9,StringLiteral_colorG,pSVar7->vector[1],0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (pPVar1->fields).color;
    pSVar9 = (pPVar1->fields).colorB;
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 3) goto code_?;
    if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar9,StringLiteral_colorB,pSVar7->vector[2],0.0,1.0,(MethodInfo *)0x0);
    pSVar9 = (pPVar1->fields).range;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_00,
                        (Object *)StringLiteral_range,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Single,pOVar6);
    if ((pSVar9 == (SettingsSlider *)0x0) || (pOVar6 == (Object *)0x0)) goto code_?;
    if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar10 = (float *)func_?(pOVar6);
      SettingsSlider::SettingsSlider_Initialize
                (pSVar9,StringLiteral_range,*pfVar10,1.0,10.0,(MethodInfo *)0x0);
      pSVar9 = (pPVar1->fields).intensity;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_00,
                          (Object *)StringLiteral_intensity,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Single,pOVar6);
      if ((pSVar9 != (SettingsSlider *)0x0) && (pOVar6 != (Object *)0x0)) {
        if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar10 = (float *)func_?(pOVar6);
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar9,StringLiteral_intensity,*pfVar10,1.0,20.0,(MethodInfo *)0x0);
        pSVar9 = (pPVar1->fields).HaloTextures;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_00,
                            (Object *)StringLiteral_halo,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar6);
        if ((pSVar9 != (SettingsSlider *)0x0) && (pOVar6 != (Object *)0x0)) {
          if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?(pOVar6);
          SettingsSlider::SettingsSlider_Initialize_1
                    (pSVar9,StringLiteral_halo,*piVar11,1,3,(MethodInfo *)0x0);
          this_01 = (pPVar1->fields).hide;
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)this_00,
                              (Object *)StringLiteral_hide,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar3 = CONCAT44(TypeInfo__System__Boolean,pOVar6);
          if ((this_01 != (SettingsToggle *)0x0) && (pOVar6 != (Object *)0x0)) {
            if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
            goto code_?;
            pbVar12 = (bool *)func_?(pOVar6);
            SettingsToggle::SettingsToggle_Initialize
                      (this_01,StringLiteral_hide,*pbVar12,(MethodInfo *)0x0);
            pSVar7 = (pPVar1->fields).color;
            pIVar13 = (pPVar1->fields).preview;
            if (pSVar7 != (Single__Array *)0x0) {
              if (((pSVar7->max_length == 0) || (pSVar7->max_length < 2)) ||
                 (pSVar7->max_length < 3)) goto code_?;
              if (pIVar13 != (Image *)0x0) {
                (*(pIVar13->klass->vtable).set_color.methodPtr)
                          (pIVar13,pSVar7->vector[0],pSVar7->vector[1],pSVar7->vector[2],
                           0x3f800000,(pIVar13->klass->vtable).set_color.method);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar3);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings_OnSettingChanged
               (PointLightSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_halo);
    func_?(&StringLiteral_Setting_changed_);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  a = key;
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_colorR,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (a,StringLiteral_colorG,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_colorB,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (a,StringLiteral_halo,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pSVar2 = (this->fields).settingsBase;
          if (pSVar2 != (SettingsBase *)0x0) {
            method = (MethodInfo *)0x0;
            key = a;
            SettingsBase::SettingsBase_OnSettingChanged(pSVar2,a,value,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Setting_changed_,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)TypeInfo__System__Convert;
            value = (Object *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)0x0;
          key = (String *)&UNK_?;
          iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
          (this->fields).intType = iVar3;
          pSVar2 = (this->fields).settingsBase;
          method = (MethodInfo *)&key;
          value = (Object *)TypeInfo__System__Int32;
          key = (String *)&UNK_?;
          value_00 = (Object *)func_?();
          if (pSVar2 != (SettingsBase *)0x0) {
            method = (MethodInfo *)0x0;
            key = StringLiteral_halo;
            value = value_00;
            SettingsBase::SettingsBase_OnSettingChanged
                      (pSVar2,StringLiteral_halo,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pSVar4 = (this->fields).color;
        if (pSVar4 != (Single__Array *)0x0) {
          if (value != (Object *)0x0) {
            if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
            goto code_?;
            pfVar5 = (float *)func_?();
            if (2 < pSVar4->max_length) {
              pSVar4->vector[2] = *pfVar5;
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
          if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar5 = (float *)func_?(value);
          if (1 < pSVar4->max_length) {
            pSVar4->vector[1] = *pfVar5;
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
        if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar5 = (float *)func_?(value);
        if (pSVar4->max_length == 0) {
code_?:
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        else {
          pSVar4->vector[0] = *pfVar5;
code_?:
          pSVar2 = (this->fields).settingsBase;
          if (pSVar2 != (SettingsBase *)0x0) {
            method = (MethodInfo *)0x0;
            value = (Object *)(this->fields).color;
            key = StringLiteral_color;
            SettingsBase::SettingsBase_OnSettingChanged
                      (pSVar2,StringLiteral_color,value,(MethodInfo *)0x0);
            pSVar4 = (this->fields).color;
            pIVar6 = (this->fields).preview;
            if (pSVar4 != (Single__Array *)0x0) {
              if (((pSVar4->max_length == 0) ||
                  (method = (MethodInfo *)pSVar4->vector[0], pSVar4->max_length < 2)) ||
                 (pcStack7 = (char *)pSVar4->vector[1], pSVar4->max_length < 3))
              goto code_?;
              pIStack8 = (Il2CppClass *)pSVar4->vector[2];
              if (pIVar6 != (Image *)0x0) {
                key = (String *)&UNK_?;
                value = (Object *)pIVar6;
                (*(pIVar6->klass->vtable).set_color.methodPtr)();
                return;
              }
            }
          }
        }
      }
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* PointLightSettings() */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings__ctor
               (PointLightSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,3);
  (this->fields).color = pSVar1;
  func_?(&(this->fields).color,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

