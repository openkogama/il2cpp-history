
/* Single AddDamageToCube(Single, IntVector) */

float Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
      RuntimeEventManager_AccumulatedCubeDamages_AddDamageToCube
                (RuntimeEventManager_AccumulatedCubeDamages *this,float damage,IntVector position,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accumulatedCubeDamages;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,position,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).accumulatedCubeDamages;
      this_00 = (ScaleAnimationBase *)
                func_?(
                               TypeInfo__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage
                               );
      pvVar3 = (void *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
      (this_00->fields)._._._._.m_CachedPtr = pvVar3;
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_4);
      if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,position,
                 (Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                );
    }
    pDVar1 = (this->fields).accumulatedCubeDamages;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                   *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,position,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                         );
      if (pOVar5 != (Object *)0x0) {
        pOVar6 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pOVar5[1].klass = pOVar6;
        pMVar7 = (MonitorData *)((float)pOVar5[1].monitor + damage);
        pOVar5[1].monitor = pMVar7;
        return (float)pMVar7;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (float)fVar9;
}


/* Void Clear() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages_Clear
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).accumulatedCubeDamages;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Clear__
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages_UpdateControllerUpdate
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  pvStack_1 = (void *)0xffffffff;
  ppIStack_2 = (Il2CppClass **)&DAT_?;
  pIStack_3 = (Il2CppRGCTXData *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (InputToPlayerMovementAndroid__StaticFields *)&stack0xffffff6c;
  pIVar5 = (InputToPlayerMovementAndroid__StaticFields *)&stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  CStack_6.fields.list = (IList_1_VoxelHit_ *)0x0;
  CStack_6.klass = (Collection_1_VoxelHit___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  pIStack_7 = (IList_1_VoxelHit_ *)0x0;
  IStack_8.klass = (InputToPlayerMovementAndroid__Class *)0x0;
  IStack_8.monitor = (MonitorData *)0x0;
  IStack_8.fields.jump = 0;
  IStack_8.fields.jumpFrameUpdate = 0;
  IStack_8.fields.jumpFixedUpdate = 0;
  IStack_8.fields._3_1_ = 0;
  IStack_8.fields.direction.x = 0.0;
  auStack_9._16_4_ = (void *)0x0;
  IStack_8.fields.direction.y = 0.0;
  IStack_8.fields.direction.z = 0.0;
  auStack_9._0_4_ = (Il2CppImage *)0x0;
  auStack_9._4_4_ = (Il2CppMethodPointer)0x0;
  auStack_9._8_4_ = (InvokerMethod)0x0;
  auStack_9._12_4_ = (char *)0x0;
  func_?();
  pPStack_10 = (PropertyInfo *)0xffffffff;
  pIStack_11 = (Il2CppRuntimeInterfaceOffsetPair *)&stack0xffffff6c;
  pIStack_4 = (InputToPlayerMovementAndroid__StaticFields *)&stack0xffffff6c;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?((short)
                            TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  pDVar12 = (this->fields).accumulatedCubeDamages;
  pLStack_13 = this_00;
  if (pDVar12 == (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                 *)0x0) {
code_?:
    pIVar14 = (IList_1_VoxelHit_ *)func_?();
    pIVar15 = unaff_ESI;
  }
  else {
    pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
             TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
             Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)(auStack_9 + 0x14),
                        (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                         *)pDVar12,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__GetEnumerator__
                       );
    IStack_8.fields._0_4_ = pDVar16->stamp;
    IStack_8.fields.direction.x = (float)(pDVar16->current).key.tileX;
    IStack_8.fields.direction._4_8_ = *(undefined8 *)&(pDVar16->current).key.tileZ;
    pvStack_1 = (void *)0x0;
    while( true ) {
      IStack_8.monitor =
           (MonitorData *)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__MoveNext__
      ;
      IStack_8.klass = (InputToPlayerMovementAndroid__Class *)&IStack_8;
      cVar17 = func_?();
      if (cVar17 == '\0') break;
      pVVar18 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)(auStack_19 + 8),&IStack_8,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Current__
                         );
      CStack_6.klass = (Collection_1_VoxelHit___Class *)pVVar18->x;
      CStack_6.monitor = (MonitorData *)pVVar18->y;
      CStack_6.fields.list = (IList_1_VoxelHit_ *)pVVar18->z;
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Value__
                            );
      if (unaff_ESI == (IList_1_VoxelHit_ *)0x0) goto code_?;
      ppIStack_20 = (Il2CppClass **)
                    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
      if (_UNK_? < (float)ppIStack_20 - (float)unaff_ESI[1].klass) {
        pIVar21 = (IntVector *)func_?((short)&CStack_6.fields.syncRoot);
        if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
        List_1_MV_WorldObject_IntVector__Add
                  ((List_1_MV_WorldObject_IntVector_ *)this_00,*pIVar21,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                  );
      }
    }
    unaff_ESI = (IList_1_VoxelHit_ *)0x0;
    pIStack_11->interfaceType = (Il2CppClass *)0x5c;
    pvStack_1 = (void *)0xffffffff;
    func_?(&IStack_8,
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dispose__
                   );
    pIVar14 = pIStack_7;
    pIVar15 = unaff_ESI;
    if (pIStack_7 == (IList_1_VoxelHit_ *)0x0) {
      if (pIStack_11->interfaceType == (Il2CppClass *)0x5c) {
        unaff_ESI = (IList_1_VoxelHit_ *)0xffffffff;
      }
      if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
        pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Vector2_ *)auStack_19,
                            (List_1_UnityEngine_Vector2_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                           );
        auStack_9._0_4_ = pLVar22->l;
        auStack_9._4_4_ = pLVar22->next;
        auStack_9._8_4_ = pLVar22->ver;
        auStack_9._12_4_ = (pLVar22->current).x;
        auStack_9._16_4_ = (pLVar22->current).y;
        pvStack_1 = (void *)0x2;
        while( true ) {
          IStack_8.monitor =
               (MonitorData *)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
          ;
          IStack_8.klass = (InputToPlayerMovementAndroid__Class *)auStack_9;
          cVar17 = func_?();
          pIVar15 = pIStack_7;
          if (cVar17 == '\0') break;
          IVar23 = GUICellCursor::GUICellCursor_get_LocalPos
                             ((GUICellCursor *)&CStack_6.fields.syncRoot,(MethodInfo *)auStack_9);
          pDVar12 = (this->fields).accumulatedCubeDamages;
          if (pDVar12 == (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System
          ::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                    ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar12,*IVar23._0_4_,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Remove_MV__WorldObject__IntVector_
                    );
        }
        (&pIStack_11->offset)[(int)unaff_ESI] = 0x9d;
        pvStack_1 = (void *)0xffffffff;
        func_?(auStack_9,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                       );
        if (pIVar15 == (IList_1_VoxelHit_ *)0x0) {
          *unaff_FS_OFFSET = pIStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pIVar14,0);
code_?:
  func_?(pIVar15,0,0);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* RuntimeEventManager+AccumulatedCubeDamages() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages__ctor
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
  ;
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
             *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  (this->fields).accumulatedCubeDamages = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}

