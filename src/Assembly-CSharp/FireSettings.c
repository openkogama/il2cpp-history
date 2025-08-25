
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::FireSettings::FireSettings_Initialize
               (FireSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pFVar1 = this;
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
    func_?(&_2C699A84B0526F49E282B1E6BCA03A337065953829C8A51594B9791894741925_Field);
    func_?(&StringLiteral_R);
    func_?(&StringLiteral_G);
    func_?(&StringLiteral_I);
    func_?(&StringLiteral_B);
    func_?(&StringLiteral_C);
    cRam_? = '\x01';
  }
  id = woID;
  this_00 = (pFVar1->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    uVar2 = func_?();
code_?:
    func_?(uVar2);
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Fire,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,id,(MethodInfo *)0x0);
    if ((pMVar3 == (MVWorldObject *)0x0) ||
       (this_01 = (MethodInfo *)(pMVar3->fields).data, this_01 == (MethodInfo *)0x0))
    goto code_?;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_I,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
      root = (GameObject *)&this;
      woID = (int32_t)TypeInfo__System__Single;
      this = (FireSettings *)&UNK_?;
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
    woID = (int32_t)StringLiteral_C;
    this = (FireSettings *)this_01;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_C,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
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
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_C,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    this = (FireSettings *)TypeInfo__System__Single;
    if (TVar5.m_Index == 0) {
      (pFVar1->fields).color = (Single__Array *)0x0;
    }
    else {
      pSVar6 = (Single__Array *)func_?();
      if (pSVar6 == (Single__Array *)0x0) goto code_?;
      (pFVar1->fields).color = pSVar6;
      this = (FireSettings *)TypeInfo__System__Single;
      iVar7 = func_?();
      if (iVar7 == 0) goto code_?;
    }
    func_?();
    pSVar6 = (pFVar1->fields).color;
    pSVar8 = (pFVar1->fields).colorR;
    if (pSVar6 == (Single__Array *)0x0) goto code_?;
    if (pSVar6->max_length == 0) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_R,pSVar6->vector[0],0.3,1.0,(MethodInfo *)0x0);
    pSVar6 = (pFVar1->fields).color;
    pSVar8 = (pFVar1->fields).colorG;
    if (pSVar6 == (Single__Array *)0x0) goto code_?;
    if (pSVar6->max_length < 2) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_G,pSVar6->vector[1],0.3,1.0,(MethodInfo *)0x0);
    pSVar6 = (pFVar1->fields).color;
    pSVar8 = (pFVar1->fields).colorB;
    if (pSVar6 == (Single__Array *)0x0) goto code_?;
    if (pSVar6->max_length < 3) goto code_?;
    if (pSVar8 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_B,pSVar6->vector[2],0.3,1.0,(MethodInfo *)0x0);
    pSVar8 = (pFVar1->fields).intensity;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_I,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__Single,TVar5.m_Index);
    if ((pSVar8 == (SettingsSlider *)0x0) || (TVar5.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar9 = (float *)func_?(TVar5.m_Index);
    SettingsSlider::SettingsSlider_Initialize
              (pSVar8,StringLiteral_I,*pfVar9,1.0,20.0,(MethodInfo *)0x0);
    pSVar6 = (pFVar1->fields).color;
    pIVar10 = (pFVar1->fields).preview;
    if (pSVar6 == (Single__Array *)0x0) goto code_?;
    if ((pSVar6->max_length != 0) && (1 < pSVar6->max_length)) {
      if (pSVar6 != (Single__Array *)0x0) {
        if (pSVar6->max_length < 3) goto code_?;
        if (pIVar10 != (Image *)0x0) {
          (*(code *)(pIVar10->klass->vtable).set_color.method)
                    (pIVar10,pSVar6->vector[0],pSVar6->vector[1],pSVar6->vector[2],0x3f800000,
                     (pIVar10->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
      }
      goto code_?;
    }
  }
code_?:
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
            if ((pSVar3->max_length == 0) || (pSVar3->max_length < 2)) goto code_?;
            if (pSVar3 != (Single__Array *)0x0) {
              if (pSVar3->max_length < 3) goto code_?;
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
  (this->fields).color = pSVar1;
  func_?(&(this->fields).color,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

