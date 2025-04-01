
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_Initialize
               (SkyboxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_fogDensity);
    func_?(&StringLiteral_sunAngle);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
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
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Skybox,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,woID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) goto code_?;
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(pMVar2->fields).data;
    if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar3,(Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar4.m_Index == 0) {
      (this->fields).color = (Single__Array *)0x0;
      pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0;
code_?:
      ppSVar5 = &(this->fields).color;
      func_?();
      pSVar6 = *ppSVar5;
      pSVar7 = (this->fields).colorR;
      if (pSVar6 == (Single__Array *)0x0) goto code_?;
      if (pSVar6->max_length != 0) {
        if (pSVar7 == (SettingsSlider *)0x0) goto code_?;
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar7,StringLiteral_colorR,pSVar6->vector[0],0.0,1.0,(MethodInfo *)0x0);
        pSVar6 = *ppSVar5;
        pSVar7 = (this->fields).colorG;
        if (pSVar6 == (Single__Array *)0x0) goto code_?;
        if (pSVar6->max_length < 2) goto code_?;
        if (pSVar7 == (SettingsSlider *)0x0) goto code_?;
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar7,StringLiteral_colorG,pSVar6->vector[1],0.0,1.0,(MethodInfo *)0x0);
        pSVar6 = *ppSVar5;
        pSVar7 = (this->fields).colorB;
        if (pSVar6 == (Single__Array *)0x0) goto code_?;
        if (pSVar6->max_length < 3) goto code_?;
        if (pSVar7 == (SettingsSlider *)0x0) goto code_?;
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar7,StringLiteral_colorB,pSVar6->vector[2],0.0,1.0,(MethodInfo *)0x0);
        pSVar7 = (this->fields).angle;
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar3,(Object *)StringLiteral_sunAngle,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar1 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
        if ((pSVar7 == (SettingsSlider *)0x0) || (TVar4.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar8 = (float *)func_?(TVar4.m_Index);
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar7,StringLiteral_sunAngle,*pfVar8,0.0,360.0,(MethodInfo *)0x0);
          pSVar7 = (this->fields).fog;
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar3,(Object *)StringLiteral_fogDensity,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          uVar1 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
          if ((pSVar7 != (SettingsSlider *)0x0) && (TVar4.m_Index != 0)) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Single->_0).element_class) goto code_?;
            pfVar8 = (float *)func_?(TVar4.m_Index);
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar7,StringLiteral_fogDensity,*pfVar8,0.005,0.05,(MethodInfo *)0x0);
            pSVar6 = *ppSVar5;
            pIVar9 = (this->fields).preview;
            if (pSVar6 != (Single__Array *)0x0) {
              if (((pSVar6->max_length == 0) || (pSVar6->max_length < 2)) ||
                 (pSVar6->max_length < 3)) goto code_?;
              if (pIVar9 != (Image *)0x0) {
                (*(code *)(pIVar9->klass->vtable).set_color.method)
                          (pIVar9,pSVar6->vector[0],pSVar6->vector[1],pSVar6->vector[2],0x3f800000,
                           (pIVar9->klass->vtable).get_raycastTarget.methodPtr);
                return;
              }
            }
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    pSVar6 = (Single__Array *)func_?();
    if (pSVar6 == (Single__Array *)0x0) goto code_?;
    (this->fields).color = pSVar6;
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
    if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnColorChange() */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_OnColorChange
               (SkyboxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged
              (this_00,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar1 = (this->fields).color;
    pIVar2 = (this->fields).preview;
    if (pSVar1 != (Single__Array *)0x0) {
      if (((pSVar1->max_length == 0) || (pSVar1->max_length < 2)) || (pSVar1->max_length < 3))
      goto code_?;
      if (pIVar2 != (Image *)0x0) {
        (*(code *)(pIVar2->klass->vtable).set_color.method)
                  (pIVar2,pSVar1->vector[0],pSVar1->vector[1],
                   (pIVar2->klass->vtable).get_raycastTarget.methodPtr,0x3f800000);
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


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_OnSettingChanged
               (SkyboxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_Unknown_key__);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_fogDensity);
    func_?(&StringLiteral_sunAngle);
    func_?(&StringLiteral_colorG);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_colorR,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_colorG,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_colorB;
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_colorB,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_sunAngle,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_fogDensity,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            pSVar2 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_Unknown_key__,key,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar2,(MethodInfo *)0x0);
            return;
          }
          if ((SettingsBase *)pSVar2[1].monitor != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged
                      ((SettingsBase *)pSVar2[1].monitor,key,(Object *)key,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((SettingsBase *)pSVar2[1].monitor != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    ((SettingsBase *)pSVar2[1].monitor,key,(Object *)key,(MethodInfo *)0x0);
          SkyboxSettings_OnColorChange((SkyboxSettings *)pSVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pSVar3 = pSVar2[1].klass;
      if (pSVar3 == (String__Class *)0x0) goto code_?;
      if (value == (Object *)0x0) goto code_?;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      p_Var6 = (_union_86 *)func_?();
      if ((char *)0x2 < (pSVar3->_0).namespaze) {
        (pSVar3->_0).this_arg.data = *p_Var6;
        SkyboxSettings_OnColorChange((SkyboxSettings *)pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar4 = (this->fields).color;
      if (pSVar4 == (Single__Array *)0x0) goto code_?;
      if (value == (Object *)0x0) goto code_?;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar5 = (float *)func_?();
      if (1 < pSVar4->max_length) {
        pSVar4->vector[1] = *pfVar5;
        SkyboxSettings_OnColorChange(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pSVar4 = (this->fields).color;
    if (pSVar4 == (Single__Array *)0x0) goto code_?;
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar5 = (float *)func_?(value);
      if (pSVar4->max_length != 0) {
        pSVar4->vector[0] = *pfVar5;
        SkyboxSettings_OnColorChange(this,(MethodInfo *)0x0);
        return;
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SkyboxSettings() */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings__ctor
               (SkyboxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,3);
  ppSVar2 = &(this->fields).color;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

