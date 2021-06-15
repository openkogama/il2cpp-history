
/* Void Clear() */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Clear(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeChange;
  if (this_00 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
  {
    System.dll::System::Collections::Generic::Queue`1[System::Int32]::Queue_1_System_Int32__Clear
              ((Queue_1_System_Int32_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Clear__
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Byte[] Dequeue(RuntimePrototypeCubeModel) */

Byte__Array *
Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Dequeue
          (DeltaCubes *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  IVar1.x = 0;
  IVar1.y = 0;
  IVar1.z = 0;
  uVar2 = 0;
  uVar3 = 0;
  this_00 = (this->fields).cubeChange;
  if (this_00 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
  {
    _puStack_1c = System.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
                  IntVector,MV::WorldObject::CubeAction]]::
                  Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction__Dequeue
                            (this_00,
                             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Dequeue__
                            );
    this_01 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor(this_01,(MethodInfo *)0x0);
    uVar4 = func_?(&puStack_5,
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Value__
                           );
    switch(uVar4) {
    case 0:
      uVar6 = func_?(&puStack_5,
                              MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Value__
                             );
      if (this_01 != (BytePacker *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                  (this_01,uVar6,(MethodInfo *)0x0);
        puVar7 = (undefined4 *)
                 func_?(&uStack_8,&puStack_5,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                );
        uStack_9 = *(undefined2 *)(puVar7 + 1);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  (this_01,(int16_t)*puVar7,(MethodInfo *)0x0);
        puVar7 = (undefined4 *)
                 func_?((short)&uStack_8,&puStack_5,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                );
        uStack_9 = *(undefined2 *)(puVar7 + 1);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  (this_01,(int16_t)((uint)*puVar7 >> 0x10),(MethodInfo *)0x0);
        iVar10 = func_?(&uStack_8,&puStack_5,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                );
        _puStack_1c = (KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_)
                      CONCAT44(this_01,&UNK_?);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  (this_01,*(ushort *)(iVar10 + 4),(MethodInfo *)(uint)*(ushort *)(iVar10 + 4));
        _puStack_1c = (KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_)
                      CONCAT44(&UNK_?,puStack_5);
        pBVar11 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                           (this_01,(MethodInfo *)0x0);
        return pBVar11;
      }
      break;
    default:
      return (Byte__Array *)0x0;
    case 2:
    case 3:
    case 4:
      pIVar12 = (IntVector *)
               func_?(&uStack_8,&puStack_5,
                               MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                              );
      if ((rpcm != (RuntimePrototypeCubeModel *)0x0) &&
         (pCVar13 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                             (rpcm,*pIVar12,(MethodInfo *)0x0), pCVar13 != (Cube *)0x0)) {
        pVVar14 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                           ((CubeBase *)pCVar13,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Cube->_1).cctor_started == 0)) {
          func_?(TypeInfo__Cube);
        }
        bVar15 = Cube::Cube_IsLegal(pVVar14,(MethodInfo *)0x0);
        if (bVar15 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Illegal_cube_detected_in_delta_c,(MethodInfo *)0x0);
          return (Byte__Array *)0x0;
        }
        pIVar12 = (IntVector *)
                 func_?(&uStack_8,&puStack_5,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                );
        pCVar13 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                           (rpcm,*pIVar12,(MethodInfo *)0x0);
        if (pCVar13 != (Cube *)0x0) {
          pVVar14 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                             ((CubeBase *)pCVar13,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?(TypeInfo__Cube);
          }
          bVar15 = Cube::Cube_IsCollapsed(pVVar14,(MethodInfo *)0x0);
          if (bVar15 != 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_IsCollapsed__cube_detected_in_de,(MethodInfo *)0x0);
            return (Byte__Array *)0x0;
          }
          uVar6 = func_?(&puStack_5,
                                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Value__
                                 );
          if (this_01 != (BytePacker *)0x0) {
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                      (this_01,uVar6,(MethodInfo *)0x0);
            pIVar12 = (IntVector *)
                     func_?(&uStack_8,&puStack_5,
                                     MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                    );
            pCVar13 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                               (rpcm,*pIVar12,(MethodInfo *)0x0);
            if (pCVar13 != (Cube *)0x0) {
              pBVar11 = (Byte__Array *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pCVar13
                                  ,(MethodInfo *)0x0);
              pIVar12 = (IntVector *)
                       func_?(&uStack_8,&puStack_5,
                                       MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                      );
              this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                     (rpcm,*pIVar12,(MethodInfo *)0x0);
              if (this_02 !=
                  (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
                materials = (Byte__Array *)
                            System.dll::System::Collections::Generic::
                            SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                            ::Single,System::Object]::
                            SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                      (this_02,(MethodInfo *)0x0);
                puVar7 = (undefined4 *)
                         func_?(&stack0xffffffec,&puStack_5,
                                         MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                        );
                uStack_8 = *puVar7;
                puVar7 = (undefined4 *)
                         func_?((short)&stack0xffffffec,&puStack_5,
                                         MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                        );
                uVar16 = *puVar7;
                iVar10 = func_?(&stack0xffffffec,&puStack_5,
                                         MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                                        );
                z = *(int16_t *)(iVar10 + 4);
                if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                }
                MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                CubeDataPacker_WriteCompressedCube
                          (this_01,(int16_t)uStack_8,(int16_t)((uint)uVar16 >> 0x10),z,pBVar11,
                           materials,(MethodInfo *)0x0);
                pBVar11 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                                   (this_01,(MethodInfo *)0x0);
                return pBVar11;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Void Enqueue(IntVector, CubeAction) */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Enqueue
               (DeltaCubes *this,IntVector iVector,CubeAction__Enum cubeAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  KStack_1.key.x = 0;
  KStack_1.key.y = 0;
  KStack_1.key.z = 0;
  KStack_1.value = 0;
  KStack_1._7_1_ = 0;
  this_00 = (this->fields).cubeChange;
  func_?(&KStack_1,iVector._0_4_,iVector.z,cubeAction,
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                 );
  if (this_00 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
  {
    System.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::IntVector,MV::
    WorldObject::CubeAction]]::
    Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction__Enqueue
              (this_00,KStack_1,
               MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* DeltaCubes() */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes__ctor(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
            );
  (this->fields).cubeChange = this_00;
  return;
}


/* DeltaCubes(IEnumerable`1[KeyValuePair`2[MV.WorldObject.IntVector,MV.WorldObject.CubeAction]]) */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes__ctor_1
               (DeltaCubes *this,
               IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_
               *cubeChangeOriginal,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  method_00 = 
  TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
  ;
  pQVar4 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
           func_?();
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar4,
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
            );
  (this->fields).cubeChange = pQVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (cubeChangeOriginal !=
      (IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
    piVar5 = (int *)func_?();
    uStack_1 = 0;
    while (piVar5 != (int *)0x0) {
      cVar6 = func_?();
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uVar7 = 0;
      uVar8 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar8 != 0) {
        iVar9 = *(int *)(*piVar5 + 0x58);
        do {
          if (*(IEnumerator_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Class
                **)(iVar9 + (uint)uVar7 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
             ) {
            puVar10 = (undefined4 *)(*piVar5 + (*(int *)(iVar9 + 4 + (uint)uVar7 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      puVar10 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar10)();
      pQVar4 = (this->fields).cubeChange;
      func_?();
      func_?();
      func_?(&stack0xffffffc8);
      if (pQVar4 == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
                    0x0) break;
      item.key.z = 0;
      item.value = 0;
      item._7_1_ = 0;
      item.key._0_4_ =
           MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
      ;
      System.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::IntVector,MV
      ::WorldObject::CubeAction]]::
      Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction__Enqueue
                (pQVar4,item,
                 MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                );
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::DeltaCubes::DeltaCubes_get_Count(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeChange;
  if (this_00 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
  {
    pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                       );
    return (int32_t)pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

