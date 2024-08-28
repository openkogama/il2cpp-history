
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::FireSettings::FireSettings_Initialize
               (FireSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&::_2C699A84B0526F49E282B1E6BCA03A337065953829C8A51594B9791894741925_Field);
    func_?(&StringLiteral_R);
    func_?(&StringLiteral_G);
    func_?(&StringLiteral_I);
    func_?(&StringLiteral_B);
    func_?(&StringLiteral_C);
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
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Fire,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_03 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_03,woID,(MethodInfo *)0x0), pMVar2 == (MVWorldObject *)0x0)) ||
       (this_01 = (MethodInfo *)(pMVar2->fields).data, this_01 == (MethodInfo *)0x0))
    goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_I,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      root = (GameObject *)&root;
      value = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_I,
                 value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    root = (GameObject *)
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
    ;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_C,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      method = (MethodInfo *)&UNK_?;
      array = (Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (array,__2C699A84B0526F49E282B1E6BCA03A337065953829C8A51594B9791894741925_Field,
                 (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_C,
                 (Object *)array,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    root = (GameObject *)&UNK_?;
    method = this_01;
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_C,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    root = (GameObject *)TypeInfo__System__Single;
    if (TVar4.m_Index == 0) {
      (this->fields).color = (Single__Array *)0x0;
      pMVar5 = (MethodInfo *)this;
code_?:
      ppSVar6 = &(this->fields).color;
      func_?();
      pSVar7 = *ppSVar6;
      if (pSVar7 == (Single__Array *)0x0) goto code_?;
      if (pSVar7->max_length != 0) {
        if ((SettingsSlider *)pMVar5->parameters == (SettingsSlider *)0x0) goto code_?;
        SettingsSlider::SettingsSlider_Initialize
                  ((SettingsSlider *)pMVar5->parameters,StringLiteral_R,pSVar7->vector[0],0.3,1.0,
                   (MethodInfo *)0x0);
        pSVar7 = *ppSVar6;
        if (pSVar7 == (Single__Array *)0x0) goto code_?;
        if (pSVar7->max_length < 2) goto code_?;
        if ((SettingsSlider *)(pMVar5->field7_0x1c).methodMetadataHandle == (SettingsSlider *)0x0)
        goto code_?;
        SettingsSlider::SettingsSlider_Initialize
                  ((SettingsSlider *)(pMVar5->field7_0x1c).methodMetadataHandle,StringLiteral_G,
                   pSVar7->vector[1],0.3,1.0,(MethodInfo *)0x0);
        pSVar7 = *ppSVar6;
        if (pSVar7 == (Single__Array *)0x0) goto code_?;
        if (pSVar7->max_length < 3) goto code_?;
        if ((SettingsSlider *)(pMVar5->field8_0x20).genericMethod == (SettingsSlider *)0x0)
        goto code_?;
        SettingsSlider::SettingsSlider_Initialize
                  ((SettingsSlider *)(pMVar5->field8_0x20).genericMethod,StringLiteral_B,
                   pSVar7->vector[2],0.3,1.0,(MethodInfo *)0x0);
        this_02 = (SettingsSlider *)pMVar5->token;
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                           (Object *)StringLiteral_I,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar1 = CONCAT44(TypeInfo__System__Single,TVar4.m_Index);
        if ((this_02 == (SettingsSlider *)0x0) || (TVar4.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar8 = (float *)func_?(TVar4.m_Index);
          SettingsSlider::SettingsSlider_Initialize
                    (this_02,StringLiteral_I,*pfVar8,1.0,20.0,(MethodInfo *)0x0);
          pSVar7 = *ppSVar6;
          pDVar9 = *(Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_UIElements_TextureId_
                     **)&pMVar5->flags;
          if (pSVar7 != (Single__Array *)0x0) {
            if (((pSVar7->max_length == 0) || (pSVar7->max_length < 2)) || (pSVar7->max_length < 3))
            goto code_?;
            if (pDVar9 != (Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_UIElements_TextureId_
                           *)0x0) {
              (*(code *)pDVar9->klass[1]._0.parent)
                        (pDVar9,pSVar7->vector[0],pSVar7->vector[1],pSVar7->vector[2],0x3f800000,
                         pDVar9->klass[1]._0.generic_class);
              return;
            }
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    pSVar7 = (Single__Array *)func_?();
    if (pSVar7 == (Single__Array *)0x0) goto code_?;
    (this->fields).color = pSVar7;
    root = (GameObject *)TypeInfo__System__Single;
    iVar10 = func_?();
    pMVar5 = this_01;
    if (iVar10 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::FireSettings::FireSettings_OnSettingChanged
               (FireSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_R);
    func_?(&StringLiteral_G);
    func_?(&StringLiteral_B);
    func_?(&StringLiteral_C);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality(key,StringLiteral_R,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality(key,StringLiteral_G,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_B,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pSVar2 = (this->fields).settingsBase;
        if (pSVar2 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(pSVar2,key,value,(MethodInfo *)0x0);
          return;
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
                    (pSVar2,StringLiteral_C,(Object *)(this->fields).color,(MethodInfo *)0x0);
          pSVar3 = (this->fields).color;
          pIVar5 = (this->fields).preview;
          if (pSVar3 != (Single__Array *)0x0) {
            if (((pSVar3->max_length == 0) || (pSVar3->max_length < 2)) || (pSVar3->max_length < 3))
            goto code_?;
            if (pIVar5 != (Image *)0x0) {
              pIVar6 = pIVar5->klass;
              pIStack7 = (pIVar6->vtable).get_raycastTarget.methodPtr;
              (*(code *)(pIVar6->vtable).set_color.method)();
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


/* FireSettings() */

void Assembly-CSharp.dll::FireSettings::FireSettings__ctor(FireSettings *this,MethodInfo *method)

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

