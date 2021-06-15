
/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_OnDestroy
               (PickupParticleScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).itemAttachedTo;
  if (pPVar1 != (PickupItem *)0x0) {
    pMVar2 = (pPVar1->fields).owner;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pPVar1 = (this->fields).itemAttachedTo;
    if (((pPVar1 != (PickupItem *)0x0) &&
        (pMVar2 = (pPVar1->fields).owner, pMVar2 != (MVPickupOwner *)0x0)) &&
       (pOVar4 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pMVar2,(MethodInfo *)0x0), pOVar4 != (Object *)0x0)) {
      pDVar5 = (Delegate *)pOVar4[0xe].monitor;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,unaff_EDI,
                 MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
                );
      pDStack6 =
           mscorlib.dll::System::Delegate::Delegate_Remove
                     (pDVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      pDVar5 = (Delegate *)0x0;
      if (pDStack6 == (Delegate *)0x0) {
code_?:
        pOVar4[0xe].monitor = (MonitorData *)pDVar5;
        return;
      }
      if ((UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)pDStack6->klass
          == TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>)
      {
        pDVar5 = pDStack6;
      }
      pUStack7 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
      if (pDVar5 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pDStack6 = extraout_ECX;
  pUStack7 = extraout_EDX;
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnScaleChange(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_OnScaleChange
               (PickupParticleScaler *this,MVWorldObjectClient *obj,ScaleChangedEventArgs *args,
               MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
              ((Vector3 *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).particleSysToScale;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                (this_00,(MethodInfo *)0x0);
      func_?();
      func_?();
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_Start
               (PickupParticleScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).particleSysToScale;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (this_00,(MethodInfo *)0x0);
    pPVar1 = (this->fields).itemAttachedTo;
    if (pPVar1 != (PickupItem *)0x0) {
      pMVar2 = (pPVar1->fields).owner;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pPVar1 = (this->fields).itemAttachedTo;
      if (((pPVar1 != (PickupItem *)0x0) &&
          (pMVar2 = (pPVar1->fields).owner, pMVar2 != (MVPickupOwner *)0x0)) &&
         (pOVar4 = System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)pMVar2,(MethodInfo *)0x0), pOVar4 != (Object *)0x0)) {
        pDVar5 = (Delegate *)pOVar4[0xe].monitor;
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pDStack6 =
             mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar5,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pDStack6 == (Delegate *)0x0) {
          pDRam00000074 = (Delegate *)0x0;
          return;
        }
        pDVar5 = (Delegate *)0x0;
        if ((UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
            pDStack6->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>)
        {
          pDVar5 = pDStack6;
        }
        pUStack7 =
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
        if (pDVar5 != (Delegate *)0x0) {
          pDRam00000074 = pDVar5;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?(0);
  pDStack6 = extraout_ECX;
  pUStack7 = extraout_EDX;
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

