
/* Void Clear() */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Clear(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).cubeChange;
  if (pQVar1 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
    if ((pQVar1->fields)._size != 0) {
      (pQVar1->fields)._size = 0;
    }
    piVar2 = &(pQVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pQVar1->fields)._head = 0;
    (pQVar1->fields)._tail = 0;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Byte[] Dequeue(RuntimePrototypeCubeModel) */

Byte__Array *
Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Dequeue
          (DeltaCubes *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_IsCollapsed__cube_detected_in_de);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Illegal_cube_detected_in_delta_c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).cubeChange;
  if (pQVar1 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
  {
    if ((pQVar1->fields)._size == 0) {
      uVar2 = func_?(MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Dequeue__
                                   ->klass->rgctx_data,0xb);
      FUN_?(pQVar1,uVar2);
      pcVar3 = (code *)swi(3);
      pBVar4 = (Byte__Array *)(*pcVar3)();
      return pBVar4;
    }
    pKVar5 = (pQVar1->fields)._array;
    if (pKVar5 != (KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Array *)0x0)
    {
      uVar6 = (pQVar1->fields)._head;
      if ((uint)pKVar5->max_length <= uVar6) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pBVar4 = (Byte__Array *)(*pcVar3)();
        return pBVar4;
      }
      KVar7 = pKVar5->vector[(int)uVar6];
      if (pKVar5 != (KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Array *)0x0
         ) {
        iVar8 = (pQVar1->fields)._head + 1;
        if (iVar8 == (int)pKVar5->max_length) {
          iVar8 = 0;
        }
        (pQVar1->fields)._head = iVar8;
        piVar9 = &(pQVar1->fields)._size;
        *piVar9 = *piVar9 + -1;
        piVar9 = &(pQVar1->fields)._version;
        *piVar9 = *piVar9 + 1;
        this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor(this_00,(MethodInfo *)0x0);
        uStackX_26 = KVar7.value;
        iStackX_22 = KVar7.key.y;
        iStackX_24 = KVar7.key.z;
        if (uStackX_26 == 0) {
          if (this_00 == (BytePacker *)0x0) goto code_?;
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                    (this_00,0,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                    (this_00,KVar7.key.x,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                    (this_00,iStackX_22,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                    (this_00,iStackX_24,(MethodInfo *)0x0);
          pBVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                              (this_00,(MethodInfo *)0x0);
        }
        else {
          if ((uStackX_26 != 1) && (((uStackX_26 == 2 || (uStackX_26 == 3)) || (uStackX_26 == 4))))
          {
            if (rpcm == (RuntimePrototypeCubeModel *)0x0) goto code_?;
            IStackX_8.z = iStackX_24;
            uVar10 = KVar7.key._0_4_;
            IStackX_8._0_4_ = uVar10;
            pCVar11 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                               (rpcm,&IStackX_8,(MethodInfo *)0x0);
            if (pCVar11 == (Cube *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pBVar4 = (pCVar11->fields)._.byteCorners;
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
              FUN_?();
            }
            pVVar12 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                     CubeDataPacker_ByteArrayToCorners(pBVar4,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar13 = Cube::Cube_IsLegal(pVVar12,(MethodInfo *)0x0);
            if (bVar13 == 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Illegal_cube_detected_in_delta_c,(MethodInfo *)0x0)
              ;
            }
            else {
              IStackX_8.z = iStackX_24;
              IStackX_8._0_4_ = uVar10;
              pCVar11 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                 (rpcm,&IStackX_8,(MethodInfo *)0x0);
              if (pCVar11 == (Cube *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pBVar4 = (pCVar11->fields)._.byteCorners;
              if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
                FUN_?();
              }
              pVVar12 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                       CubeDataPacker_ByteArrayToCorners(pBVar4,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar13 = Cube::Cube_IsCollapsed(pVVar12,(MethodInfo *)0x0);
              if (bVar13 == 0) {
                if (this_00 != (BytePacker *)0x0) {
                  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                            (this_00,uStackX_26,(MethodInfo *)0x0);
                  IStackX_8.z = iStackX_24;
                  IStackX_8._0_4_ = uVar10;
                  pCVar11 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                     (rpcm,&IStackX_8,(MethodInfo *)0x0);
                  if (pCVar11 != (Cube *)0x0) {
                    pBVar4 = (pCVar11->fields)._.byteCorners;
                    IStackX_8.z = iStackX_24;
                    IStackX_8._0_4_ = uVar10;
                    pCVar11 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                       (rpcm,&IStackX_8,(MethodInfo *)0x0);
                    if (pCVar11 != (Cube *)0x0) {
                      materials = (pCVar11->fields)._.faceMaterials;
                      if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0)
                      {
                        FUN_?();
                      }
                      MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                      CubeDataPacker_WriteCompressedCube
                                (this_00,KVar7.key.x,iStackX_22,iStackX_24,pBVar4,materials,
                                 (MethodInfo *)0x0);
                      pBVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                                          (this_00,(MethodInfo *)0x0);
                      return pBVar4;
                    }
                  }
                }
                goto code_?;
              }
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_IsCollapsed__cube_detected_in_de,(MethodInfo *)0x0)
              ;
            }
          }
          pBVar4 = (Byte__Array *)0x0;
        }
        return pBVar4;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar3)();
  return pBVar4;
}


/* Void Enqueue(IntVector, CubeAction) */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Enqueue
               (DeltaCubes *this,IntVector *iVector,CubeAction__Enum cubeAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).cubeChange;
  KStackX_8.value = (char)cubeAction;
  KStackX_8.key = *iVector;
  KStackX_8._7_1_ = 0;
  if (pQVar1 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
    pKVar2 = (pQVar1->fields)._array;
    if (pKVar2 != (KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Array *)0x0)
    {
      if ((pQVar1->fields)._size == (int)pKVar2->max_length) {
        pKVar2 = (pQVar1->fields)._array;
        iVar3 = (int)pKVar2->max_length * 2;
        if (iVar3 < (int)pKVar2->max_length + 4) {
          iVar3 = (int)pKVar2->max_length + 4;
        }
        FUN_?(pQVar1,iVar3,
                      MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                      ->klass->rgctx_data[5].rgctxDataDummy);
      }
      pKVar2 = (pQVar1->fields)._array;
      if (pKVar2 != (KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Array *)0x0
         ) {
        uVar4 = (pQVar1->fields)._tail;
        if ((uint)pKVar2->max_length <= uVar4) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pKVar2->vector[(int)uVar4] = KStackX_8;
        pKVar2 = (pQVar1->fields)._array;
        if (pKVar2 != (KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Array *)
                      0x0) {
          iVar6 = (pQVar1->fields)._tail + 1;
          iVar3 = 0;
          if (iVar6 != (int)pKVar2->max_length) {
            iVar3 = iVar6;
          }
          (pQVar1->fields)._tail = iVar3;
          piVar7 = &(pQVar1->fields)._size;
          *piVar7 = *piVar7 + 1;
          piVar7 = &(pQVar1->fields)._version;
          *piVar7 = *piVar7 + 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* DeltaCubes() */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes__ctor(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                        );
  FUN_?(pQVar1);
  bVar2 = iRam_? != 0;
  (this->fields).cubeChange = pQVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* DeltaCubes(IEnumerable`1[KeyValuePair`2[MV.WorldObject.IntVector,MV.WorldObject.CubeAction]]) */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes__ctor_1
               (DeltaCubes *this,
               IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_
               *cubeChangeOriginal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                        );
  FUN_?(pQVar1);
  (this->fields).cubeChange = pQVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cubeChangeOriginal ==
      (IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plStackX_10 = (longlong *)
                FUN_?(0,
                              TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                              ,cubeChangeOriginal);
  do {
    if (plStackX_10 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    plVar8 = plStackX_10;
    if (cVar7 == '\0') {
      if (plStackX_10 != (longlong *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,plStackX_10);
      }
      return;
    }
    if (plStackX_10 == (longlong *)0x0) {
      FUN_?();
      goto code_?;
    }
    lVar9 = *plStackX_10;
    uVar10 = 0;
    if (*(ushort *)(lVar9 + 0x12e) != 0) {
      do {
        if (*(IEnumerator_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Class
              **)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
            TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
           ) {
          puVar11 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) *
                    0x10 + 0x138 + lVar9);
          goto code_?;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
    }
    puVar11 = (undefined8 *)
             FUN_?(plStackX_10,
                           TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                           ,0);
code_?:
    uVar12 = (*(code *)*puVar11)(plVar8,puVar11[1]);
    IStackX_8._0_4_ = SUB84(uVar12,0);
    iStackX_24 = (int16_t)((ulonglong)uVar12 >> 0x20);
    IStackX_8.z = iStackX_24;
    DeltaCubes_Enqueue(this,&IStackX_8,(uint)(byte)((ulonglong)uVar12 >> 0x30),(MethodInfo *)0x0);
  } while( true );
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::DeltaCubes::DeltaCubes_get_Count(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).cubeChange;
  if (pQVar1 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
    return (pQVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

