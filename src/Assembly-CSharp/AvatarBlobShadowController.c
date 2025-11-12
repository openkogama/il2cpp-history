
/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnDestroy
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<System::Object>;
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)FUN_?(pDVar1,TypeInfo__System__Action<System::Object>);
      if (value == (Object *)0x0) {
        FUN_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar5 = pMVar3->klass->rgctx_data;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar5 >> 8),1),
               pIVar5[0x22].method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnDisable
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  obj = (this->fields).blobProjector;
  if (obj == (Projector *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Projector *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnEnable
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  aiStackX_18[0] =
       TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
       _LightQualityLevel_k__BackingField;
  plVar1 = (longlong *)
           FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,aiStackX_18);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).forceHidden == 0) {
    if (plVar1 == (longlong *)0x0) goto code_?;
    if (*(Il2CppClass **)(*plVar1 + 0x40) !=
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      FUN_?(plVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = (int)plVar1[2];
    if (iVar3 == 0) {
      pPVar4 = (this->fields).blobProjector;
      if (pPVar4 != (Projector *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pPVar4 == (Projector *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar5 = (pPVar4->fields)._._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar4,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,1);
        return;
      }
      goto code_?;
    }
    if ((iVar3 != 1) && (iVar3 != 2)) {
      return;
    }
  }
  pPVar4 = (this->fields).blobProjector;
  if (pPVar4 != (Projector *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pPVar4,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnQualityLevelChanged(Object) */

void Assembly-CSharp.dll::AvatarBlobShadowController::
     AvatarBlobShadowController_OnQualityLevelChanged
               (AvatarBlobShadowController *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).forceHidden == 0) {
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      FUN_?(value);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = *(int *)&value[1].klass;
    if (iVar2 == 0) {
      pPVar3 = (this->fields).blobProjector;
      if (pPVar3 != (Projector *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pPVar3 == (Projector *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pvVar4 = (pPVar3->fields)._._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar3,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,1);
        return;
      }
      goto code_?;
    }
    if ((iVar2 != 1) && (iVar2 != 2)) {
      return;
    }
  }
  pPVar3 = (this->fields).blobProjector;
  if (pPVar3 != (Projector *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pPVar3,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ScaleShadow(Single) */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_ScaleShadow
               (AvatarBlobShadowController *this,float scale,MethodInfo *method)

{
  obj = (this->fields).blobProjector;
  if (obj == (Projector *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Projector>_UnityEngine__Projector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,scale);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_Start
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<System::Object>;
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      pOVar4 = (Object *)0x0;
    }
    else {
      pOVar4 = (Object *)FUN_?(pDVar1,TypeInfo__System__Action<System::Object>);
      if (pOVar4 == (Object *)0x0) {
        FUN_?(pDVar1,pAVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar6 = pMVar3->klass->rgctx_data;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,pOVar4,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar6 >> 8),1),
               pIVar6[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    aiStackX_18[0] =
         TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         _LightQualityLevel_k__BackingField;
    pOVar4 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,aiStackX_18);
    AvatarBlobShadowController_OnQualityLevelChanged(this,pOVar4,(MethodInfo *)0x0);
    (this->fields).forceHidden = 0;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_ForceHidden(Boolean) */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
               (AvatarBlobShadowController *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).forceHidden = value;
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  aiStackX_10[0] =
       TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
       _LightQualityLevel_k__BackingField;
  plVar1 = (longlong *)
           FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,aiStackX_10);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).forceHidden == 0) {
    if (plVar1 == (longlong *)0x0) goto code_?;
    if (*(Il2CppClass **)(*plVar1 + 0x40) !=
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      FUN_?(plVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = (int)plVar1[2];
    if (iVar3 == 0) {
      pPVar4 = (this->fields).blobProjector;
      if (pPVar4 != (Projector *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pPVar4 == (Projector *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar5 = (pPVar4->fields)._._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar4,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,1);
        return;
      }
      goto code_?;
    }
    if ((iVar3 != 1) && (iVar3 != 2)) {
      return;
    }
  }
  pPVar4 = (this->fields).blobProjector;
  if (pPVar4 != (Projector *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pPVar4,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

