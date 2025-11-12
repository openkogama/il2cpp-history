
/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_CompareWithKoGaMaPackage
               (MVSentryGunBlueprint *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGunBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_editableCubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVSentryGunBlueprint->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar1) ||
       ((MVSentryGunBlueprint__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        TypeInfo__MVSentryGunBlueprint)) {
      FUN_?(wo);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pDVar4 = (wo->fields)._.data;
    if ((pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar4,(Object *)StringLiteral_BlueprintData,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar4->klass->_1).naturalAligment < bVar1) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar4->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar4,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar4,(Object *)StringLiteral_ChildrenMap,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar4->klass->_1).naturalAligment < bVar1) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar4->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar4);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar4,(Object *)StringLiteral_editableCubeModel,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar5 != (Object *)0x0) {
          if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar5,lRam_?);
            pcVar2 = (code *)swi(3);
            bVar3 = (*pcVar2)();
            return bVar3;
          }
          key = *(int32_t *)&pOVar5[1].klass;
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar4,(Object *)StringLiteral_sentryGun,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar5 != (Object *)0x0) {
            if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar5);
              pcVar2 = (code *)swi(3);
              bVar3 = (*pcVar2)();
              return bVar3;
            }
            key_00 = *(int32_t *)&pOVar5[1].klass;
            if ((koGaMaPackageClient != (KoGaMaPackageClient *)0x0) &&
               (pDVar6 = (koGaMaPackageClient->fields).worldObjects,
               pDVar6 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
              pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                 );
              pMVar7 = (MVWorldObjectClient *)0x0;
              if (pOVar5 == (Object *)0x0) {
                pOVar5 = (Object *)0x0;
              }
              else {
                bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
                if (((pOVar5->klass->_1).naturalAligment < bVar1) ||
                   ((MVCubeModelInstance__Class *)
                    (pOVar5->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    TypeInfo__MVCubeModelInstance)) {
                  FUN_?(pOVar5);
                  pcVar2 = (code *)swi(3);
                  bVar3 = (*pcVar2)();
                  return bVar3;
                }
              }
              pDVar6 = (koGaMaPackageClient->fields).worldObjects;
              if (pDVar6 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                pMVar8 = (MVWorldObjectClient *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key_00,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                   );
                pMVar9 = pMVar7;
                if (pMVar8 != (MVWorldObjectClient *)0x0) {
                  bVar1 = (TypeInfo__MVSentryGun->_1).naturalAligment;
                  if (((pMVar8->klass->_1).naturalAligment < bVar1) ||
                     (pMVar9 = pMVar8,
                     (MVSentryGun__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1]
                     != TypeInfo__MVSentryGun)) {
                    FUN_?(pMVar8);
                    pcVar2 = (code *)swi(3);
                    bVar3 = (*pcVar2)();
                    return bVar3;
                  }
                }
                pMVar10 = MVBlueprintBase::MVBlueprintBase_GetChild
                                   ((MVBlueprintBase *)this,StringLiteral_editableCubeModel,
                                    (MethodInfo *)0x0);
                pMVar8 = pMVar7;
                if (pMVar10 != (MVWorldObjectClient *)0x0) {
                  bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
                  if (((pMVar10->klass->_1).naturalAligment < bVar1) ||
                     (pMVar8 = pMVar10,
                     (MVCubeModelInstance__Class *)
                     (pMVar10->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
                     TypeInfo__MVCubeModelInstance)) {
                    FUN_?(pMVar10);
                    pcVar2 = (code *)swi(3);
                    bVar3 = (*pcVar2)();
                    return bVar3;
                  }
                }
                pMVar10 = MVBlueprintBase::MVBlueprintBase_GetChild
                                   ((MVBlueprintBase *)this,StringLiteral_sentryGun,
                                    (MethodInfo *)0x0);
                if (pMVar10 != (MVWorldObjectClient *)0x0) {
                  bVar1 = (TypeInfo__MVSentryGun->_1).naturalAligment;
                  if (((pMVar10->klass->_1).naturalAligment < bVar1) ||
                     (pMVar7 = pMVar10,
                     (MVSentryGun__Class *)(pMVar10->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1]
                     != TypeInfo__MVSentryGun)) {
                    FUN_?(pMVar10);
                    pcVar2 = (code *)swi(3);
                    bVar3 = (*pcVar2)();
                    return bVar3;
                  }
                }
                if (((pMVar8 == (MVWorldObjectClient *)0x0) ||
                    (pMVar7 == (MVWorldObjectClient *)0x0)) ||
                   (cVar11 = (*(pMVar7->klass->vtable).CompareWithKoGaMaPackage.methodPtr)
                                      (pMVar7,pMVar9,koGaMaPackageClient,insertedByProfileId,
                                       (pMVar7->klass->vtable).CompareWithKoGaMaPackage.method),
                   cVar11 == '\0')) {
                  bVar3 = 0;
                }
                else {
                  bVar3 = (*(pMVar8->klass->vtable).CompareWithKoGaMaPackage.methodPtr)
                                    (pMVar8,pOVar5,koGaMaPackageClient,insertedByProfileId,
                                     (pMVar8->klass->vtable).CompareWithKoGaMaPackage.method);
                }
                return bVar3;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_Initialize
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVSentryGunBlueprint_InitializeCommon(this,(MethodInfo *)0x0);
  if ((this->fields).editableCubes == (MVCubeModelInstance *)0x0) {
    return;
  }
  this_00 = (this->fields).editableCubes;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_,0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this_00);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_01,callback,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this_00->fields).cullingSubscriberBase = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this_00->fields).cullingSubscriberBase >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  MVCubeModelInstance::MVCubeModelInstance_SetCullSphereToMeshBounds(this_00,(MethodInfo *)0x0);
  pUVar6 = (this_00->fields)._._.PositionChanged;
  pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                        );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar7,(Object *)this_00,
             MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar8 == (Delegate *)0x0) {
    (this_00->fields)._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar8,pUVar9);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this_00->fields)._._.PositionChanged = pUVar6;
    pUVar9 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pUVar9);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this_00->fields)._._.PositionChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar11 = (this_00->fields)._._.RotationChanged;
  pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                        );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar7,(Object *)this_00,
             MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar11,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
  ;
  if (pDVar8 == (Delegate *)0x0) {
    (this_00->fields)._._.RotationChanged =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
  }
  else {
    pUVar11 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)
              FUN_?(pDVar8,
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                           );
    if (pUVar11 == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      FUN_?(pDVar8,pUVar12);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this_00->fields)._._.RotationChanged = pUVar11;
    pUVar12 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pUVar12);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this_00->fields)._._.RotationChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar13 = (this_00->fields)._.ChunksChanged;
  this_02 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_02,(Object *)this_00,
             MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar13,(Delegate *)this_02,(MethodInfo *)0x0);
  pAVar14 = 
  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
  if (pDVar8 == (Delegate *)0x0) {
    (this_00->fields)._.ChunksChanged =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  }
  else {
    pAVar13 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
              FUN_?(pDVar8,
                            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                           );
    if (pAVar13 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      FUN_?(pDVar8,pAVar14);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this_00->fields)._.ChunksChanged = pAVar13;
    pAVar14 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pAVar14);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this_00->fields)._.ChunksChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_InitializeCommon
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<IModelingConstraint>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_editableCubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVSentryGunBlueprint_does_not_ha);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Missing_editable_cubes);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Missing_gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._._.data;
  if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_BlueprintData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar1,(Object *)StringLiteral_ChildrenMap,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar4 != (Object *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pOVar4->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar4->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pOVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar5 = (MVCubeModelInstance *)
                MVBlueprintBase::MVBlueprintBase_GetChild
                          ((MVBlueprintBase *)this,StringLiteral_editableCubeModel,(MethodInfo *)0x0
                          );
      if (pMVar5 == (MVCubeModelInstance *)0x0) {
        (this->fields).editableCubes = (MVCubeModelInstance *)0x0;
      }
      else {
        bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((pMVar5->klass->_1).naturalAligment < bVar2) ||
           ((MVCubeModelInstance__Class *)(pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
            != TypeInfo__MVCubeModelInstance)) {
          FUN_?(pMVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->fields).editableCubes = pMVar5;
        bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((pMVar5->klass->_1).naturalAligment < bVar2) ||
           ((MVCubeModelInstance__Class *)(pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
            != TypeInfo__MVCubeModelInstance)) {
          FUN_?(pMVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).editableCubes >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pMVar11 = (MVSentryGun *)
                MVBlueprintBase::MVBlueprintBase_GetChild
                          ((MVBlueprintBase *)this,StringLiteral_sentryGun,(MethodInfo *)0x0);
      if (pMVar11 == (MVSentryGun *)0x0) {
        (this->fields).gun = (MVSentryGun *)0x0;
      }
      else {
        bVar2 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if (((pMVar11->klass->_1).naturalAligment < bVar2) ||
           ((MVSentryGun__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__MVSentryGun)) {
          FUN_?(pMVar11);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->fields).gun = pMVar11;
        bVar2 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if (((pMVar11->klass->_1).naturalAligment < bVar2) ||
           ((MVSentryGun__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__MVSentryGun)) {
          FUN_?(pMVar11);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).gun >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      if ((this->fields).editableCubes == (MVCubeModelInstance *)0x0) {
        pSVar12 = StringLiteral_Missing_editable_cubes;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar12 = StringLiteral_Missing_editable_cubes;
        }
      }
      else {
        if ((this->fields).gun != (MVSentryGun *)0x0) {
          this_00 = (FontAsset *)(this->fields).gun;
          value = (FontFeatureTable *)
                  FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
          FUN_?(value,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          pMVar11 = (this->fields).gun;
          if ((pMVar11 != (MVSentryGun *)0x0) && (value != (FontFeatureTable *)0x0)) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      ((HashSet_1_System_Int32_ *)value,(pMVar11->fields)._._._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
            pMVar5 = (this->fields).editableCubes;
            if (pMVar5 != (MVCubeModelInstance *)0x0) {
              method_00 = MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                          rgctx_data[0x15].method;
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__AddIfNotPresent
                        ((HashSet_1_System_Int32_ *)value,(pMVar5->fields)._._._.id,method_00);
              UnityEngine.TextCoreTextEngineModule.dll::UnityEngine::TextCore::Text::FontAsset::
              FontAsset_set_fontFeatureTable(this_00,value,method_00);
              pMVar11 = (this->fields).gun;
              if (pMVar11 != (MVSentryGun *)0x0) {
                piVar13 = &(pMVar11->fields)._._.interactionFlags;
                *piVar13 = *piVar13 | 0x30;
                pMVar5 = (this->fields).editableCubes;
                if (pMVar5 != (MVCubeModelInstance *)0x0) {
                  piVar13 = &(pMVar5->fields)._._.interactionFlags;
                  *piVar13 = *piVar13 | 0x30;
                  pMVar5 = (this->fields).editableCubes;
                  this_02 = (Func_1_UnityEngine_Vector2Int_ *)
                            FUN_?(TypeInfo__System__Func<IModelingConstraint>);
                  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::
                  Func_1_UnityEngine_Vector2Int___ctor
                            (this_02,(Object *)this,
                             MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__,
                             (MethodInfo *)0x0);
                  if (pMVar5 != (MVCubeModelInstance *)0x0) {
                    bVar10 = iRam_? != 0;
                    (pMVar5->fields)._._ModelingConstraintBuilder_k__BackingField =
                         (Func_1_IModelingConstraint_ *)this_02;
                    if (bVar10) {
                      uVar6 = (uint)((ulonglong)
                                      &(pMVar5->fields)._.
                                       _ModelingConstraintBuilder_k__BackingField >> 0xc);
                      puVar9 = (ulonglong *)
                               ((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
                      do {
                        uVar14 = *puVar9;
                        LOCK();
                        uVar8 = *puVar9;
                        if (uVar14 == uVar8) {
                          *puVar9 = uVar14 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (uVar14 != uVar8);
                    }
                    return;
                  }
                }
              }
            }
          }
          goto code_?;
        }
        pSVar12 = StringLiteral_Missing_gun;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar12 = StringLiteral_Missing_gun;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar15 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar15 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar15,2,pSVar12);
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_MVSentryGunBlueprint_does_not_ha,(MethodInfo *)0x0);
    pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar16 != (MVWorldObjectClientManager *)0x0) {
      key = (this->fields)._._._._.id;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,key,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_trying_to_unregister_none_existi);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar16->fields).worldObjects;
      if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar17 < 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_trying_to_unregister_none_existi,(MethodInfo *)0x0);
          return;
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
                    (this_03,key,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_InitializeInventory
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<IModelingConstraint>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_editableCubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVSentryGunBlueprint_does_not_ha);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Missing_editable_cubes);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Missing_gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._._.data;
  if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_BlueprintData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar1,(Object *)StringLiteral_ChildrenMap,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar4 != (Object *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pOVar4->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar4->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pOVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar5 = (MVCubeModelInstance *)
                MVBlueprintBase::MVBlueprintBase_GetChild
                          ((MVBlueprintBase *)this,StringLiteral_editableCubeModel,(MethodInfo *)0x0
                          );
      if (pMVar5 == (MVCubeModelInstance *)0x0) {
        (this->fields).editableCubes = (MVCubeModelInstance *)0x0;
      }
      else {
        bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((pMVar5->klass->_1).naturalAligment < bVar2) ||
           ((MVCubeModelInstance__Class *)(pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
            != TypeInfo__MVCubeModelInstance)) {
          FUN_?(pMVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->fields).editableCubes = pMVar5;
        bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((pMVar5->klass->_1).naturalAligment < bVar2) ||
           ((MVCubeModelInstance__Class *)(pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
            != TypeInfo__MVCubeModelInstance)) {
          FUN_?(pMVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).editableCubes >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pMVar11 = (MVSentryGun *)
                MVBlueprintBase::MVBlueprintBase_GetChild
                          ((MVBlueprintBase *)this,StringLiteral_sentryGun,(MethodInfo *)0x0);
      if (pMVar11 == (MVSentryGun *)0x0) {
        (this->fields).gun = (MVSentryGun *)0x0;
      }
      else {
        bVar2 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if (((pMVar11->klass->_1).naturalAligment < bVar2) ||
           ((MVSentryGun__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__MVSentryGun)) {
          FUN_?(pMVar11);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->fields).gun = pMVar11;
        bVar2 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if (((pMVar11->klass->_1).naturalAligment < bVar2) ||
           ((MVSentryGun__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__MVSentryGun)) {
          FUN_?(pMVar11);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).gun >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      if ((this->fields).editableCubes == (MVCubeModelInstance *)0x0) {
        pSVar12 = StringLiteral_Missing_editable_cubes;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar12 = StringLiteral_Missing_editable_cubes;
        }
      }
      else {
        if ((this->fields).gun != (MVSentryGun *)0x0) {
          this_00 = (FontAsset *)(this->fields).gun;
          value = (FontFeatureTable *)
                  FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
          FUN_?(value,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          pMVar11 = (this->fields).gun;
          if ((pMVar11 != (MVSentryGun *)0x0) && (value != (FontFeatureTable *)0x0)) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      ((HashSet_1_System_Int32_ *)value,(pMVar11->fields)._._._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
            pMVar5 = (this->fields).editableCubes;
            if (pMVar5 != (MVCubeModelInstance *)0x0) {
              method_00 = MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                          rgctx_data[0x15].method;
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__AddIfNotPresent
                        ((HashSet_1_System_Int32_ *)value,(pMVar5->fields)._._._.id,method_00);
              UnityEngine.TextCoreTextEngineModule.dll::UnityEngine::TextCore::Text::FontAsset::
              FontAsset_set_fontFeatureTable(this_00,value,method_00);
              pMVar11 = (this->fields).gun;
              if (pMVar11 != (MVSentryGun *)0x0) {
                piVar13 = &(pMVar11->fields)._._.interactionFlags;
                *piVar13 = *piVar13 | 0x30;
                pMVar5 = (this->fields).editableCubes;
                if (pMVar5 != (MVCubeModelInstance *)0x0) {
                  piVar13 = &(pMVar5->fields)._._.interactionFlags;
                  *piVar13 = *piVar13 | 0x30;
                  pMVar5 = (this->fields).editableCubes;
                  this_02 = (Func_1_UnityEngine_Vector2Int_ *)
                            FUN_?(TypeInfo__System__Func<IModelingConstraint>);
                  mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::
                  Func_1_UnityEngine_Vector2Int___ctor
                            (this_02,(Object *)this,
                             MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__,
                             (MethodInfo *)0x0);
                  if (pMVar5 != (MVCubeModelInstance *)0x0) {
                    bVar10 = iRam_? != 0;
                    (pMVar5->fields)._._ModelingConstraintBuilder_k__BackingField =
                         (Func_1_IModelingConstraint_ *)this_02;
                    if (bVar10) {
                      uVar6 = (uint)((ulonglong)
                                      &(pMVar5->fields)._.
                                       _ModelingConstraintBuilder_k__BackingField >> 0xc);
                      puVar9 = (ulonglong *)
                               ((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
                      do {
                        uVar14 = *puVar9;
                        LOCK();
                        uVar8 = *puVar9;
                        if (uVar14 == uVar8) {
                          *puVar9 = uVar14 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (uVar14 != uVar8);
                    }
                    return;
                  }
                }
              }
            }
          }
          goto code_?;
        }
        pSVar12 = StringLiteral_Missing_gun;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar12 = StringLiteral_Missing_gun;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar15 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar15 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar15,2,pSVar12);
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_MVSentryGunBlueprint_does_not_ha,(MethodInfo *)0x0);
    pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar16 != (MVWorldObjectClientManager *)0x0) {
      key = (this->fields)._._._._.id;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,key,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_trying_to_unregister_none_existi);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar16->fields).worldObjects;
      if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar17 < 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_trying_to_unregister_none_existi,(MethodInfo *)0x0);
          return;
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
                    (this_03,key,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_OnEnterObject
               (MVSentryGunBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar1 != (MainCameraManager *)0x0) &&
      (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
     (this_00 = (pMVar2->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
    pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    uStack_4 = 0;
    if (pMVar3 != (MVCameraBase *)0x0) {
      uStack_5 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_4 = 0;
      (*(pMVar3->klass->vtable).FocusOnObject.methodPtr)
                (pMVar3,this,TypeRef__System__Activator__T._0_4_,&uStack_4,&uStack_7,
                 (pMVar3->klass->vtable).FocusOnObject.method);
      pMVar8 = (this->fields).editableCubes;
      if (((pMVar8 != (MVCubeModelInstance *)0x0) && (e != (EditorStateMachine *)0x0)) &&
         (this_01 = (e->fields).selectionController, this_01 != (SelectionController *)0x0)) {
        value = (Object *)0x0;
        SelectionController::SelectionController_SelectWO
                  (this_01,(pMVar8->fields)._._._.id,0,1,(MethodInfo *)0x0);
        uStackX_20 = 0;
        iVar9._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
        iVar9._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
        iVar9._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
        if (iVar9 < 0) {
          if (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
             (((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)) {
            value = (Object *)FUN_?(TypeInfo__EditorEvent);
            FUN_?(value + 1,&uStackX_20);
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)(value + 1) >> 0xc);
              uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
              do {
                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
          }
        }
        else {
          value = (Object *)((ulonglong)uStackX_24 << 0x20);
        }
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_OnExitObject
               (MVSentryGunBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
    auStackX_10[0] = 0x2f;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_10);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    return 1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* IModelingConstraint <InitializeCommon>b__9_0() */

IModelingConstraint *
Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint__InitializeCommon_b__9_0
          (MVSentryGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ModelingBoxCountConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (ModelingBoxConstraint__Class *)(this->fields).editableCubes;
  this_00 = (ModelingBoxConstraint *)FUN_?(TypeInfo__ModelingBoxCountConstraint);
  IStackX_8.x = 3;
  IStackX_8.y = 8;
  IStackX_8.z = 3;
  aIStackX_18[0].z = -4;
  aIStackX_18[0].x = -4;
  aIStackX_18[0].y = -2;
  ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
            (this_00,aIStackX_18,&IStackX_8,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  this_00[1].klass = pMVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(this_00 + 1) >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  *(undefined4 *)&this_00[1].monitor = 0x32;
  return (IModelingConstraint *)this_00;
}


/* MVSentryGunBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
               (MVSentryGunBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar1 = &(this->fields)._._._.interactionFlags;
  *piVar1 = *piVar1 | 0x1000;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_get_DocumentationType
          (MVSentryGunBlueprint *this,MethodInfo *method)

{
  if ((this->fields).gun != (MVSentryGun *)0x0) {
    pMVar1 = (this->fields).gun;
    pMVar2 = pMVar1->klass;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    MVar3 = (*(pMVar2->vtable).get_DocumentationType.methodPtr)
                      (pMVar1,(pMVar2->vtable).get_DocumentationType.method);
    return MVar3;
  }
  return MVWorldObjectDocumentationType__Enum_FireSentryTower;
}

