
/* List`1[RTG.AABB] BuildVertOverlapAABBs(GameObject, Sprite, RTMesh) */

List_1_RTG_AABB_ *
Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_BuildVertOverlapAABBs
          (Object2ObjectSnapData *this,GameObject *gameObject,Sprite *sprite,RTMesh *rtMesh,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::AABB>__Add_RTG__AABB_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::AABB>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::AABB>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sprite == (Sprite *)0x0) {
code_?:
    if (rtMesh == (RTMesh *)0x0) {
      pLVar1 = (List_1_RTG_AABB_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<RTG::AABB>);
      FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<RTG::AABB>__List__);
      return pLVar1;
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((sprite->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sprite == (Sprite *)0x0) {
code_?:
    uVar2 = QStack_3._0_8_;
    if (rtMesh == (RTMesh *)0x0) goto DAT_?;
    fVar4 = (rtMesh->fields)._aabb._size.x;
    fVar5 = (rtMesh->fields)._aabb._size.y;
    fVar6 = (rtMesh->fields)._aabb._size.z;
    fStack_7 = (rtMesh->fields)._aabb._center.x;
    uVar8 = (rtMesh->fields)._aabb._center.y;
    uVar9 = (rtMesh->fields)._aabb._center.z;
    fVar10 = (float)uVar8;
    fVar11 = (float)uVar9;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((sprite->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar12 = ObjectBounds::ObjectBounds_CalcSpriteModelAABB
                        (&AStack_13,gameObject,(MethodInfo *)0x0);
    fVar4 = (pAVar12->_size).x;
    fVar5 = (pAVar12->_size).y;
    fVar6 = (pAVar12->_size).z;
    fStack_7 = (pAVar12->_center).x;
    fVar10 = (pAVar12->_center).y;
    fVar11 = (pAVar12->_center).z;
  }
  fStack_14 = fVar4;
  fStack_15 = fVar5;
  fStack_16 = fVar6;
  fStack_17 = fVar10;
  fStack_18 = fVar11;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar19 = BoxMath::BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  uVar2 = QStack_3._0_8_;
  if (pLVar19 != (List_1_RTG_BoxFace_ *)0x0) {
    lVar20 = FUN_?(TypeInfo__UnityEngine__Vector3,(pLVar19->fields)._size);
    uVar21 = _UNK_?;
    fVar10 = _UNK_?;
    fVar11 = fVar6 + _UNK_?;
    uVar2 = QStack_3._0_8_;
    if (lVar20 != 0) {
      if (2 < *(uint *)(lVar20 + 0x18)) {
        *(ulonglong *)(lVar20 + 0x38) = CONCAT44(fVar5 + _UNK_?,_UNK_?);
        *(float *)(lVar20 + 0x40) = fVar11;
        if (3 < *(uint *)(lVar20 + 0x18)) {
          *(ulonglong *)(lVar20 + 0x44) = CONCAT44(fVar5 + fVar10,uVar21);
          *(float *)(lVar20 + 0x4c) = fVar6 + fVar10;
          if (4 < *(uint *)(lVar20 + 0x18)) {
            *(ulonglong *)(lVar20 + 0x50) = CONCAT44(uVar21,fVar4 + fVar10);
            *(float *)(lVar20 + 0x58) = fVar6 + fVar10;
            if (5 < *(uint *)(lVar20 + 0x18)) {
              *(ulonglong *)(lVar20 + 0x5c) = CONCAT44(uVar21,fVar4 + fVar10);
              *(float *)(lVar20 + 100) = fVar6 + fVar10;
              if (1 < *(uint *)(lVar20 + 0x18)) {
                *(ulonglong *)(lVar20 + 0x2c) = CONCAT44(fVar5 + fVar10,fVar4 + fVar10);
                *(undefined4 *)(lVar20 + 0x34) = uVar21;
                if (*(int *)(lVar20 + 0x18) != 0) {
                  *(ulonglong *)(lVar20 + 0x20) = CONCAT44(fVar5 + fVar10,fVar4 + fVar10);
                  *(undefined4 *)(lVar20 + 0x28) = uVar21;
                  pLVar1 = (List_1_RTG_AABB_ *)
                            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::AABB>);
                  FUN_?(pLVar1,
                                MethodInfo__System__Collections__Generic__List<RTG::AABB>__List__);
                  fVar10 = _UNK_?;
                  uVar22._4_4_ = fStack_17;
                  uVar22._0_4_ = fStack_7;
                  puVar23 = (undefined8 *)(lVar20 + 0x20);
                  uVar24._4_4_ = fStack_15;
                  uVar24._0_4_ = fStack_14;
                  uVar25 = 0;
                  lVar26 = 0x20;
                  while( true ) {
                    if ((pLVar19->fields)._size <= (int)uVar25) {
                      return pLVar1;
                    }
                    if ((uint)(pLVar19->fields)._size <= uVar25) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar27 = (code *)swi(3);
                      pLVar1 = (List_1_RTG_AABB_ *)(*pcVar27)();
                      return pLVar1;
                    }
                    pBVar28 = (pLVar19->fields)._items;
                    uVar2 = QStack_3._0_8_;
                    if (pBVar28 == (BoxFace__Enum__Array *)0x0) break;
                    if ((uint)pBVar28->max_length <= uVar25) goto code_?;
                    boxFace = *(BoxFace__Enum *)((longlong)pBVar28->vector + lVar26 + -0x20);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Quaternion);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pQVar29 = TypeInfo__UnityEngine__Quaternion->static_fields;
                    uVar30._0_4_ = (pQVar29->identityQuaternion).x;
                    uVar30._4_4_ = (pQVar29->identityQuaternion).y;
                    uVar31._0_4_ = (pQVar29->identityQuaternion).z;
                    uVar31._4_4_ = (pQVar29->identityQuaternion).w;
                    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    VStack_32.z = fStack_16;
                    VStack_33.z = fStack_18;
                    QStack_3._0_8_ = uVar30;
                    QStack_3._8_8_ = uVar31;
                    VStack_32._0_8_ = uVar24;
                    VStack_33._0_8_ = uVar22;
                    pVVar34 = BoxMath::BoxMath_CalcBoxFaceCenter
                                        (&VStack_35,&VStack_33,&VStack_32,&QStack_3,boxFace,
                                         (MethodInfo *)0x0);
                    uStack_36._0_4_ = pVVar34->x;
                    uStack_36._4_4_ = pVVar34->y;
                    fVar11 = pVVar34->z;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Quaternion);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pQVar29 = TypeInfo__UnityEngine__Quaternion->static_fields;
                    VStack_37.z = fStack_16;
                    QStack_3.x = (pQVar29->identityQuaternion).x;
                    QStack_3.y = (pQVar29->identityQuaternion).y;
                    QStack_3.z = (pQVar29->identityQuaternion).z;
                    QStack_3.w = (pQVar29->identityQuaternion).w;
                    VStack_38.z = fStack_18;
                    VStack_37._0_8_ = uVar24;
                    VStack_38._0_8_ = uVar22;
                    pVVar34 = BoxMath::BoxMath_CalcBoxFaceNormal
                                        (aVStack_39,&VStack_38,&VStack_37,&QStack_3,boxFace,
                                         (MethodInfo *)0x0);
                    pMVar40 = 
                    MethodInfo__System__Collections__Generic__List<RTG::AABB>__Add_RTG__AABB_;
                    uVar2._0_4_ = pVVar34->x;
                    uVar2._4_4_ = pVVar34->y;
                    fVar4 = (float)uStack_36 - (float)uVar2 * fVar10;
                    fVar11 = fVar11 - pVVar34->z * fVar10;
                    fVar5 = uStack_36._4_4_ - uVar2._4_4_ * fVar10;
                    QStack_3._0_8_ = uVar2;
                    if (*(uint *)(lVar20 + 0x18) <= uVar25) goto code_?;
                    fVar6 = *(float *)(puVar23 + 1);
                    AStack_13._center.y = 0.0;
                    AStack_13._center.z = 0.0;
                    AStack_13._isValid = 0;
                    AStack_13._25_3_ = 0;
                    AStack_13._size.x = 0.0;
                    AStack_13._size.y = 0.0;
                    AStack_13._size.z = 0.0;
                    AStack_13._center.x = 0.0;
                    uVar31 = *puVar23;
                    uVar30 = *puVar23;
                    QStack_3._0_8_ = *puVar23;
                    if (pLVar1 == (List_1_RTG_AABB_ *)0x0) break;
                    piVar41 = &(pLVar1->fields)._version;
                    *piVar41 = *piVar41 + 1;
                    pAVar42 = (pLVar1->fields)._items;
                    if (pAVar42 == (AABB__Array *)0x0) break;
                    uVar43 = (pLVar1->fields)._size;
                    if (uVar43 < (uint)pAVar42->max_length) {
                      QStack_3.w = fVar4;
                      QStack_3.z = fVar6;
                      (pLVar1->fields)._size = uVar43 + 1;
                      uStack_44 = 1;
                      QStack_3._0_8_ = uVar31;
                      if ((uint)pAVar42->max_length <= uVar43) goto code_?;
                      uVar25 = uVar25 + 1;
                      lVar26 = lVar26 + 4;
                      puVar23 = (undefined8 *)((longlong)puVar23 + 0xc);
                      pAVar12 = pAVar42->vector + (int)uVar43;
                      (pAVar12->_size).x = (float)uVar31;
                      (pAVar12->_size).y = SUB84(uVar31,4);
                      *(undefined8 *)&(pAVar12->_size).z = QStack_3._8_8_;
                      pAVar42->vector[(int)uVar43]._center.y = fVar5;
                      pAVar42->vector[(int)uVar43]._center.z = fVar11;
                      *(undefined4 *)&pAVar42->vector[(int)uVar43]._isValid = 1;
                    }
                    else {
                      uStack_44 = 1;
                      AStack_13._isValid = 1;
                      AStack_13._25_3_ = 0;
                      QStack_3.w = fVar4;
                      QStack_3.z = fVar6;
                      AStack_13._center.x = fVar4;
                      AStack_13._size.z = fVar6;
                      AStack_13._center.z = fVar11;
                      AStack_13._center.y = fVar5;
                      AStack_13._size._0_8_ = uVar30;
                      mscorlib.dll::System::Collections::Generic::List`1[RTG::AABB]::
                      List_1_RTG_AABB__AddWithResize
                                (pLVar1,&AStack_13,pMVar40->klass->rgctx_data[0xe].method);
                      uVar25 = uVar25 + 1;
                      lVar26 = lVar26 + 4;
                      puVar23 = (undefined8 *)((longlong)puVar23 + 0xc);
                    }
                  }
                  goto DAT_?;
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar27 = (code *)swi(3);
      pLVar1 = (List_1_RTG_AABB_ *)(*pcVar27)();
      return pLVar1;
    }
  }
DAT_?:
  QStack_3._0_8_ = uVar2;
  FUN_?();
  pcVar27 = (code *)swi(3);
  pLVar1 = (List_1_RTG_AABB_ *)(*pcVar27)();
  return pLVar1;
}


/* List`1[RTG.OBB] GetAllWorldSnapAreaBounds() */

List_1_RTG_OBB_ *
Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_GetAllWorldSnapAreaBounds
          (Object2ObjectSnapData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::OBB>__Add_RTG__OBB_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::OBB>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::OBB>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::OBB>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields)._gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        worldTransform =
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
        pAVar2 = (this->fields)._snapAreaBounds;
        if (pAVar2 != (AABB__Array *)0x0) {
          this_00 = (List_1_UnityEngine_RaycastHit_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__List<RTG::OBB>);
          FUN_?(this_00,(int)pAVar2->max_length,
                        MethodInfo__System__Collections__Generic__List<RTG::OBB>__List_int_);
          pAVar2 = (this->fields)._snapAreaBounds;
          uVar3 = 0;
          if (pAVar2 != (AABB__Array *)0x0) {
            pAVar4 = pAVar2->vector;
            do {
              if ((int)pAVar2->max_length <= (int)uVar3) {
                return (List_1_RTG_OBB_ *)this_00;
              }
              if ((uint)pAVar2->max_length <= uVar3) {
DAT_?:
                FUN_?();
                pcVar5 = (code *)swi(3);
                pLVar6 = (List_1_RTG_OBB_ *)(*pcVar5)();
                return pLVar6;
              }
              auStack_7._16_4_ = (pAVar4->_center).y;
              auStack_7._20_4_ = (pAVar4->_center).z;
              auStack_8._0_4_ = 0.0;
              auStack_8._4_4_ = 0.0;
              auStack_8._8_4_ = 0.0;
              auStack_8._12_4_ = 0.0;
              VStack_9.x = 0.0;
              VStack_9.y = 0.0;
              auStack_8._16_4_ = 0.0;
              auStack_8._20_4_ = 0.0;
              auStack_8._24_4_ = 0.0;
              auStack_8._28_4_ = 0.0;
              iStack_10 = 0;
              auStack_7._0_4_ = (pAVar4->_size).x;
              auStack_7._4_4_ = (pAVar4->_size).y;
              auStack_7._8_8_ = *(undefined8 *)&(pAVar4->_size).z;
              auStack_7._24_4_ = *(float *)&pAVar4->_isValid;
              OBB::OBB__ctor_7((OBB *)auStack_8,(AABB *)auStack_7,worldTransform,(MethodInfo *)0x0
                              );
              pMVar11 = MethodInfo__System__Collections__Generic__List<RTG::OBB>__Add_RTG__OBB_;
              if (this_00 == (List_1_UnityEngine_RaycastHit_ *)0x0) break;
              piVar12 = &(this_00->fields)._version;
              *piVar12 = *piVar12 + 1;
              pRVar13 = (this_00->fields)._items;
              if (pRVar13 == (RaycastHit__Array *)0x0) break;
              uVar14 = (this_00->fields)._size;
              if (uVar14 < (uint)pRVar13->max_length) {
                (this_00->fields)._size = uVar14 + 1;
                if ((uint)pRVar13->max_length <= uVar14) goto DAT_?;
                uVar3 = uVar3 + 1;
                pAVar4 = pAVar4 + 1;
                pRVar15 = pRVar13->vector + (int)uVar14;
                (pRVar15->m_Point).x = (float)auStack_8._0_4_;
                (pRVar15->m_Point).y = (float)auStack_8._4_4_;
                *(undefined8 *)&(pRVar15->m_Point).z = auStack_8._8_8_;
                pVVar16 = &pRVar13->vector[(int)uVar14].m_Normal;
                pVVar16->y = (float)auStack_8._16_4_;
                pVVar16->z = (float)auStack_8._20_4_;
                *(undefined8 *)(pVVar16 + 1) = auStack_8._24_8_;
                pRVar13->vector[(int)uVar14].m_UV = VStack_9;
                pRVar13->vector[(int)uVar14].m_Collider = iStack_10;
              }
              else {
                iStack_17 = iStack_10;
                auStack_7._0_8_ = auStack_8._0_8_;
                auStack_7._8_8_ = auStack_8._8_8_;
                auStack_7._16_8_ = auStack_8._16_8_;
                auStack_7._24_8_ = auStack_8._24_8_;
                VStack_18 = VStack_9;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::RaycastHit]::
                List_1_UnityEngine_RaycastHit__AddWithResize
                          (this_00,(RaycastHit *)auStack_7,pMVar11->klass->rgctx_data[0xe].method);
                uVar3 = uVar3 + 1;
                pAVar4 = pAVar4 + 1;
              }
            } while( true );
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      pLVar6 = (List_1_RTG_OBB_ *)(*pcVar5)();
      return pLVar6;
    }
  }
  pLVar6 = (List_1_RTG_OBB_ *)FUN_?(TypeInfo__System__Collections__Generic__List<RTG::OBB>)
  ;
  FUN_?(pLVar6,MethodInfo__System__Collections__Generic__List<RTG::OBB>__List__);
  return pLVar6;
}


/* OBB GetWorldSnapAreaBounds(BoxFace) */

OBB * Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaBounds
                (OBB *__return_storage_ptr__,Object2ObjectSnapData *this,BoxFace__Enum boxFace,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields)._gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        worldTransform =
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
        pAVar2 = (this->fields)._snapAreaBounds;
        if (pAVar2 != (AABB__Array *)0x0) {
          if (boxFace < (BoxFace__Enum)pAVar2->max_length) {
            pAVar3 = pAVar2->vector + (int)boxFace;
            AStack_4._size.x = (pAVar3->_size).x;
            AStack_4._size.y = (pAVar3->_size).y;
            AStack_4._8_8_ = *(undefined8 *)&(pAVar3->_size).z;
            AStack_4._isValid = pAVar2->vector[(int)boxFace]._isValid;
            AStack_4._25_3_ = *(undefined3 *)&pAVar2->vector[(int)boxFace].field_0x19;
            AStack_4._center.y = pAVar2->vector[(int)boxFace]._center.y;
            AStack_4._center.z = pAVar2->vector[(int)boxFace]._center.z;
            (__return_storage_ptr__->_size).x = 0.0;
            (__return_storage_ptr__->_size).y = 0.0;
            *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
            (__return_storage_ptr__->_center).y = 0.0;
            (__return_storage_ptr__->_center).z = 0.0;
            (__return_storage_ptr__->_rotation).x = 0.0;
            (__return_storage_ptr__->_rotation).y = 0.0;
            (__return_storage_ptr__->_rotation).z = 0.0;
            (__return_storage_ptr__->_rotation).w = 0.0;
            *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
            OBB::OBB__ctor_7(__return_storage_ptr__,&AStack_4,worldTransform,(MethodInfo *)0x0);
            return __return_storage_ptr__;
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          pOVar6 = (OBB *)(*pcVar5)();
          return pOVar6;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      pOVar6 = (OBB *)(*pcVar5)();
      return pOVar6;
    }
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  (__return_storage_ptr__->_rotation).x = 0.0;
  (__return_storage_ptr__->_rotation).y = 0.0;
  (__return_storage_ptr__->_rotation).z = 0.0;
  (__return_storage_ptr__->_rotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* BoxFaceAreaDesc GetWorldSnapAreaDesc(BoxFace) */

BoxFaceAreaDesc
Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaDesc
          (Object2ObjectSnapData *this,BoxFace__Enum boxFace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._snapAreaBounds;
  if (pAVar1 != (AABB__Array *)0x0) {
    if ((BoxFace__Enum)pAVar1->max_length <= boxFace) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      BVar3 = (BoxFaceAreaDesc)(*pcVar2)();
      return BVar3;
    }
    aVStack_4[0].x = pAVar1->vector[(int)boxFace]._size.x;
    aVStack_4[0].y = pAVar1->vector[(int)boxFace]._size.y;
    fVar5 = pAVar1->vector[(int)boxFace]._size.z;
    this_00 = (this->fields)._gameObject;
    if ((this_00 != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6 = 0;
      uStack_7 = 0;
      pvVar8 = (obj->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        BVar3 = (BoxFaceAreaDesc)(*pcVar2)();
        return BVar3;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar2 = (code *)swi(3);
        BVar3 = (BoxFaceAreaDesc)(*pcVar2)();
        return BVar3;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar8,&uStack_6);
      fVar10 = (float)((uint)uStack_6 & _UNK_?) * aVStack_4[0].x;
      fVar11 = (float)(uStack_6._4_4_ & _UNK_?) * aVStack_4[0].y;
      aVStack_4[0].z = (float)(uStack_7 & _UNK_?) * fVar5;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      aVStack_4[0].y = fVar11;
      aVStack_4[0].x = fVar10;
      BVar3 = BoxMath::BoxMath_GetBoxFaceAreaDesc(aVStack_4,boxFace,(MethodInfo *)0x0);
      return BVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  BVar3 = (BoxFaceAreaDesc)(*pcVar2)();
  return BVar3;
}


/* Boolean Initialize(GameObject) */

bool Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_Initialize
               (Object2ObjectSnapData *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::AABB>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::AABB>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectVertexCollect);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current.First = 0;
  LStack_1._current.Last = 0;
  LStack_1._20_4_ = 0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject == (GameObject *)0x0) {
    return 0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((gameObject->fields)._.m_CachedPtr == (void *)0x0) {
    return 0;
  }
  pGVar2 = (this->fields)._gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar2 == (GameObject *)0x0) {
    bVar3 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar3 = (pGVar2->fields)._.m_CachedPtr != (void *)0x0;
  }
  pRVar4 = (RTMesh *)0x0;
  if (bVar3) {
    return 0;
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  unityMesh = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
  sprite = (RTMesh *)GameObjectEx::GameObjectEx_GetSprite(gameObject,(MethodInfo *)0x0);
  apRStack_5[0] = sprite;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (unityMesh == (Mesh *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (sprite == (RTMesh *)0x0) {
      return 0;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((Object_1__Fields *)&(sprite->fields)._unityMesh)->m_CachedPtr == (void *)0x0) {
      return 0;
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((unityMesh->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar6 = pRVar4;
  if (unityMesh == (Mesh *)0x0) {
code_?:
    bVar3 = false;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (sprite == (RTMesh *)0x0) {
      return 0;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((Object_1__Fields *)&(sprite->fields)._unityMesh)->m_CachedPtr == (void *)0x0) {
      return 0;
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((unityMesh->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (Renderer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (gameObject,
                         UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                        );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_01 == (Renderer *)0x0) {
      bVar3 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = (this_01->fields)._._.m_CachedPtr != (void *)0x0;
    }
    if (!bVar3) {
      this_01 = (Renderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (gameObject,
                           UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                          );
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_01 == (Renderer *)0x0) {
code_?:
      bVar3 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((this_01->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                         (this_01,(MethodInfo *)0x0);
      bVar3 = true;
      if (bVar7 == 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = (RTMeshDb *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    if (this_02 == (RTMeshDb *)0x0) goto code_?;
    pRVar6 = RTMeshDb::RTMeshDb_GetRTMesh(this_02,unityMesh,(MethodInfo *)0x0);
    if (pRVar6 == (RTMesh *)0x0) goto code_?;
  }
  if (bVar3) {
    sprite = pRVar4;
    pRVar4 = pRVar6;
  }
  pLVar8 = Object2ObjectSnapData_BuildVertOverlapAABBs
                      (this,gameObject,(Sprite *)sprite,pRVar4,(MethodInfo *)0x0);
  if (pLVar8 != (List_1_RTG_AABB_ *)0x0) {
    if ((pLVar8->fields)._size == 0) {
      return 0;
    }
    if (bVar3) {
      if (pRVar6 == (RTMesh *)0x0) goto code_?;
      fStack_9 = (pRVar6->fields)._aabb._size.x;
      fStack_10 = (pRVar6->fields)._aabb._size.y;
      fStack_11 = (pRVar6->fields)._aabb._size.z;
      fStack_12 = (pRVar6->fields)._aabb._center.x;
      uVar13._0_4_ = (pRVar6->fields)._aabb._center.y;
      uVar13._4_4_ = (pRVar6->fields)._aabb._center.z;
    }
    else {
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar14 = ObjectBounds::ObjectBounds_CalcSpriteModelAABB
                          (&AStack_15,gameObject,(MethodInfo *)0x0);
      fStack_9 = (pAVar14->_size).x;
      fStack_10 = (pAVar14->_size).y;
      fStack_11 = (pAVar14->_size).z;
      fStack_12 = (pAVar14->_center).x;
      uVar13._0_4_ = (pAVar14->_center).y;
      uVar13._4_4_ = (pAVar14->_center).z;
    }
    fStack_16 = (float)uVar13;
    fStack_17 = (float)((ulonglong)uVar13 >> 0x20);
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar18 = BoxMath::BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
    (this->fields)._gameObject = gameObject;
    func_?(&this->fields);
    if (pLVar18 != (List_1_RTG_BoxFace_ *)0x0) {
      if (bVar3) {
        puVar19 = (undefined8 *)FUN_?(aPStack_20,pLVar18);
        LStack_1._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar19;
        LStack_1._8_8_ = puVar19[1];
        LStack_1._16_8_ = puVar19[2];
        uStack_21 = 0;
        pLStack_22 = &LStack_1;
        uVar23._4_4_ = fStack_16;
        uVar23._0_4_ = fStack_12;
        uVar24._4_4_ = fStack_10;
        uVar24._0_4_ = fStack_9;
        while (bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Text::RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                  (&LStack_1,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                                  ), bVar7 != 0) {
          RVar25 = LStack_1._current;
          lVar26 = (longlong)(int)LStack_1._current;
          if ((uint)(pLVar8->fields)._size <= (uint)LStack_1._current) goto code_?;
          pAVar27 = (pLVar8->fields)._items;
          if (pAVar27 == (AABB__Array *)0x0) {
code_?:
            FUN_?();
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
            FUN_?();
            pcVar28 = (code *)swi(3);
            bVar7 = (*pcVar28)();
            return bVar7;
          }
          if ((uint)*(RegexCharClass_SingleRange *)&pAVar27->max_length <= (uint)LStack_1._current)
          {
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
            goto code_?;
          }
          pLVar29 = (this->fields)._vertsBuffer;
          if (pRVar6 == (RTMesh *)0x0) goto code_?;
          this_00 = (pRVar6->fields)._meshTree;
          QStack_30.x = 0.0;
          QStack_30.y = 0.0;
          QStack_30.z = 0.0;
          QStack_30.w = 0.0;
          uStack_31 = 0;
          pAVar14 = pAVar27->vector + lVar26;
          AStack_32._size.x = (pAVar14->_size).x;
          AStack_32._size.y = (pAVar14->_size).y;
          uVar13 = *(undefined8 *)&(pAVar14->_size).z;
          AStack_32._size.z = (float)uVar13;
          AStack_32._center.x = (float)((ulonglong)uVar13 >> 0x20);
          uVar33 = pAVar27->vector[lVar26]._center.y;
          uVar34 = pAVar27->vector[lVar26]._center.z;
          AStack_32._isValid = pAVar27->vector[lVar26]._isValid;
          AStack_32._25_3_ = *(undefined3 *)&pAVar27->vector[lVar26].field_0x19;
          fStack_35 = AStack_32._center.x;
          fStack_36 = (float)uVar33;
          fStack_37 = (float)uVar34;
          AStack_32._center.y = (float)uVar33;
          AStack_32._center.z = (float)uVar34;
          VStack_38._0_8_ = AStack_32._size._0_8_;
          VStack_38.z = AStack_32._size.z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar39 = TypeInfo__UnityEngine__Quaternion->static_fields;
          QStack_30.x = (pQVar39->identityQuaternion).x;
          QStack_30.y = (pQVar39->identityQuaternion).y;
          QStack_30.z = (pQVar39->identityQuaternion).z;
          QStack_30.w = (pQVar39->identityQuaternion).w;
          uStack_31._0_1_ = 1;
          if (this_00 == (MeshTree *)0x0) goto code_?;
          aOStack_40[0]._center.x = fStack_35;
          aOStack_40[0]._size.z = VStack_38.z;
          aOStack_40[0]._size.x = VStack_38.x;
          aOStack_40[0]._size.y = VStack_38.y;
          aOStack_40[0]._center.z = fStack_37;
          aOStack_40[0]._center.y = fStack_36;
          aOStack_40[0]._isValid = 1;
          aOStack_40[0]._41_3_ = uStack_31._1_3_;
          aOStack_40[0]._rotation._0_8_ = QStack_30._0_8_;
          aOStack_40[0]._rotation._8_8_ = QStack_30._8_8_;
          MeshTree::MeshTree_OverlapModelVerts(this_00,aOStack_40,pLVar29,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar39 = TypeInfo__UnityEngine__Quaternion->static_fields;
          uVar41._0_4_ = (pQVar39->identityQuaternion).x;
          uVar41._4_4_ = (pQVar39->identityQuaternion).y;
          uVar42 = (pQVar39->identityQuaternion).z;
          uVar43 = (pQVar39->identityQuaternion).w;
          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          VStack_44.z = fStack_11;
          VStack_45.z = fStack_17;
          AStack_32._size._0_8_ = uVar41;
          AStack_32._size.z = (float)uVar42;
          AStack_32._center.x = (float)uVar43;
          VStack_44._0_8_ = uVar24;
          VStack_45._0_8_ = uVar23;
          pPVar46 = BoxMath::BoxMath_CalcBoxFacePlane
                              (aPStack_20,&VStack_45,&VStack_44,(Quaternion *)&AStack_32,
                               (BoxFace__Enum)RVar25,(MethodInfo *)0x0);
          pAVar27 = (this->fields)._snapAreaBounds;
          AStack_32._size.x = (pPVar46->m_Normal).x;
          AStack_32._size.y = (pPVar46->m_Normal).y;
          uVar13 = *(undefined8 *)&(pPVar46->m_Normal).z;
          AStack_32._size.z = (float)uVar13;
          AStack_32._center.x = (float)((ulonglong)uVar13 >> 0x20);
          pLVar29 = PlaneEx::PlaneEx_ProjectAllPoints
                              ((Plane *)&AStack_32,(this->fields)._vertsBuffer,(MethodInfo *)0x0);
          AStack_15._size.x = 0.0;
          AStack_15._size.y = 0.0;
          AStack_15._size.z = 0.0;
          AStack_15._center.x = 0.0;
          AStack_15._center.y = 0.0;
          AStack_15._center.z = 0.0;
          AStack_15._isValid = 0;
          AStack_15._25_3_ = 0;
          AABB::AABB__ctor_2(&AStack_15,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar29,
                             (MethodInfo *)0x0);
          if (pAVar27 == (AABB__Array *)0x0) goto code_?;
          if ((uint)*(RegexCharClass_SingleRange *)&pAVar27->max_length <= (uint)RVar25)
          goto code_?;
          pAVar14 = pAVar27->vector + lVar26;
          (pAVar14->_size).x = AStack_15._size.x;
          (pAVar14->_size).y = AStack_15._size.y;
          (pAVar14->_size).z = AStack_15._size.z;
          (pAVar14->_center).x = AStack_15._center.x;
          pAVar27->vector[lVar26]._center.y = AStack_15._center.y;
          pAVar27->vector[lVar26]._center.z = AStack_15._center.z;
          pAVar27->vector[lVar26]._isValid = AStack_15._isValid;
          *(undefined3 *)&pAVar27->vector[lVar26].field_0x19 = AStack_15._25_3_;
          pBVar47 = (this->fields)._snapAreaDesc;
          pAVar27 = (this->fields)._snapAreaBounds;
          if (pAVar27 == (AABB__Array *)0x0) goto code_?;
          if ((uint)*(RegexCharClass_SingleRange *)&pAVar27->max_length <= (uint)RVar25)
          goto code_?;
          VStack_48.x = pAVar27->vector[lVar26]._size.x;
          VStack_48.y = pAVar27->vector[lVar26]._size.y;
          VStack_48.z = pAVar27->vector[lVar26]._size.z;
          BVar49 = BoxMath::BoxMath_GetBoxFaceAreaDesc
                             (&VStack_48,(BoxFace__Enum)RVar25,(MethodInfo *)0x0);
          if (pBVar47 == (BoxFaceAreaDesc__Array *)0x0) goto code_?;
          if ((uint)*(RegexCharClass_SingleRange *)&pBVar47->max_length <= (uint)RVar25)
          goto code_?;
          pBVar47->vector[lVar26] = BVar49;
        }
      }
      else {
        puVar19 = (undefined8 *)FUN_?(aPStack_20,pLVar18);
        pRVar4 = apRStack_5[0];
        fVar50 = fStack_17;
        LStack_1._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar19;
        LStack_1._8_8_ = puVar19[1];
        LStack_1._16_8_ = puVar19[2];
        uStack_21 = 0;
        pLStack_22 = &LStack_1;
        uVar51._4_4_ = fStack_16;
        uVar51._0_4_ = fStack_12;
        uVar52._4_4_ = fStack_10;
        uVar52._0_4_ = fStack_9;
        while (bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Text::RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                  (&LStack_1,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                                  ), bVar7 != 0) {
          RVar25 = LStack_1._current;
          lVar26 = (longlong)(int)LStack_1._current;
          if ((uint)LStack_1._current < 2) {
            pAVar27 = (this->fields)._snapAreaBounds;
            AStack_15._center.y = 0.0;
            AStack_15._center.z = 0.0;
            if (pAVar27 == (AABB__Array *)0x0) goto code_?;
            if ((uint)*(RegexCharClass_SingleRange *)&pAVar27->max_length <=
                (uint)LStack_1._current) goto code_?;
            pAVar14 = pAVar27->vector + lVar26;
            (pAVar14->_size).x = 0.0;
            (pAVar14->_size).y = 0.0;
            *(undefined8 *)&(pAVar14->_size).z = 0;
            pAVar27->vector[lVar26]._center.y = 0.0;
            pAVar27->vector[lVar26]._center.z = 0.0;
            *(undefined4 *)&pAVar27->vector[lVar26]._isValid = 0;
            pBVar47 = (this->fields)._snapAreaDesc;
            if (pBVar47 == (BoxFaceAreaDesc__Array *)0x0) goto code_?;
            if ((uint)*(RegexCharClass_SingleRange *)&pBVar47->max_length <=
                (uint)LStack_1._current) goto code_?;
            pBVar47->vector[lVar26].AreaType = 0;
            pBVar47->vector[lVar26].Area = 0.0;
          }
          else {
            puVar19 = (undefined8 *)FUN_?(&AStack_32,pLVar8);
            uVar24 = *puVar19;
            uVar23 = puVar19[1];
            uVar13 = puVar19[2];
            uVar53 = *(undefined4 *)(puVar19 + 3);
            if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
              FUN_?();
            }
            AStack_32._size.z = (float)uVar23;
            AStack_32._center.x = (float)((ulonglong)uVar23 >> 0x20);
            AStack_32._center.y = (float)uVar13;
            AStack_32._center.z = (float)((ulonglong)uVar13 >> 0x20);
            AStack_32._size._0_8_ = uVar24;
            AStack_32._24_4_ = uVar53;
            pLVar29 = ObjectVertexCollect::ObjectVertexCollect_CollectModelSpriteVerts
                                ((Sprite *)pRVar4,&AStack_32,(MethodInfo *)0x0);
            puVar19 = (undefined8 *)FUN_?(aPStack_20);
            uVar13 = *puVar19;
            uVar24 = puVar19[1];
            if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
              FUN_?();
            }
            AStack_32._size.z = (float)uVar24;
            AStack_32._center.x = (float)((ulonglong)uVar24 >> 0x20);
            VStack_48.z = fStack_11;
            VStack_45.z = fVar50;
            AStack_32._size._0_8_ = uVar13;
            VStack_45._0_8_ = uVar51;
            VStack_48._0_8_ = uVar52;
            pPVar46 = BoxMath::BoxMath_CalcBoxFacePlane
                                ((Plane *)apRStack_5,&VStack_45,&VStack_48,
                                 (Quaternion *)&AStack_32,(BoxFace__Enum)RVar25,(MethodInfo *)0x0);
            AStack_32._size.x = (pPVar46->m_Normal).x;
            AStack_32._size.y = (pPVar46->m_Normal).y;
            uVar13 = *(undefined8 *)&(pPVar46->m_Normal).z;
            AStack_32._size.z = (float)uVar13;
            AStack_32._center.x = (float)((ulonglong)uVar13 >> 0x20);
            pLVar29 = PlaneEx::PlaneEx_ProjectAllPoints
                                ((Plane *)&AStack_32,pLVar29,(MethodInfo *)0x0);
            pAVar27 = (this->fields)._snapAreaBounds;
            AStack_15._size.x = 0.0;
            AStack_15._size.y = 0.0;
            AStack_15._size.z = 0.0;
            AStack_15._center.x = 0.0;
            AStack_15._center.y = 0.0;
            AStack_15._center.z = 0.0;
            AStack_15._isValid = 0;
            AStack_15._25_3_ = 0;
            AABB::AABB__ctor_2(&AStack_15,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar29,
                               (MethodInfo *)0x0);
            if (pAVar27 == (AABB__Array *)0x0) goto code_?;
            if ((uint)*(RegexCharClass_SingleRange *)&pAVar27->max_length <= (uint)RVar25)
            goto code_?;
            pAVar14 = pAVar27->vector + lVar26;
            (pAVar14->_size).x = AStack_15._size.x;
            (pAVar14->_size).y = AStack_15._size.y;
            (pAVar14->_size).z = AStack_15._size.z;
            (pAVar14->_center).x = AStack_15._center.x;
            pAVar27->vector[lVar26]._center.y = AStack_15._center.y;
            pAVar27->vector[lVar26]._center.z = AStack_15._center.z;
            pAVar27->vector[lVar26]._isValid = AStack_15._isValid;
            *(undefined3 *)&pAVar27->vector[lVar26].field_0x19 = AStack_15._25_3_;
            pBVar47 = (this->fields)._snapAreaDesc;
            pAVar27 = (this->fields)._snapAreaBounds;
            if (pAVar27 == (AABB__Array *)0x0) goto code_?;
            if ((uint)*(RegexCharClass_SingleRange *)&pAVar27->max_length <= (uint)RVar25)
            goto code_?;
            VStack_44.x = pAVar27->vector[lVar26]._size.x;
            VStack_44.y = pAVar27->vector[lVar26]._size.y;
            VStack_44.z = pAVar27->vector[lVar26]._size.z;
            BVar49 = BoxMath::BoxMath_GetBoxFaceAreaDesc
                               (&VStack_44,(BoxFace__Enum)RVar25,(MethodInfo *)0x0);
            if (pBVar47 == (BoxFaceAreaDesc__Array *)0x0) goto code_?;
            if ((uint)*(RegexCharClass_SingleRange *)&pBVar47->max_length <= (uint)RVar25)
            goto code_?;
            pBVar47->vector[lVar26] = BVar49;
          }
        }
      }
      return 1;
    }
  }
code_?:
  FUN_?();
  pcVar28 = (code *)swi(3);
  bVar7 = (*pcVar28)();
  return bVar7;
}


/* Object2ObjectSnapData() */

void Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData__ctor
               (Object2ObjectSnapData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__AABB);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__BoxFaceAreaDesc);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__BoxFace);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__RTG__BoxFace;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar2 = (longlong *)0x0;
  plVar3 = plVar2;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar1,1);
    plVar3 = (longlong *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar6 = (ArgumentNullException *)func_?(uVar5);
    pSVar7 = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar6,pSVar7,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(pAVar6,uVar5);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pAVar9 = (Array *)(**(code **)(*plVar3 + 0x888))(plVar3);
  if (pAVar9 != (Array *)0x0) {
    iVar10 = mscorlib.dll::System::Array::Array_get_Length(pAVar9,(MethodInfo *)0x0);
    pAVar11 = (AABB__Array *)FUN_?(TypeInfo__RTG__AABB,iVar10);
    bVar12 = iRam_? != 0;
    (this->fields)._snapAreaBounds = pAVar11;
    if (bVar12) {
      uVar13 = (uint)((ulonglong)&(this->fields)._snapAreaBounds >> 0xc);
      lVar4 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
      do {
        uVar14 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar15 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar12 = uVar14 == *puVar15;
        if (bVar12) {
          *puVar15 = uVar14 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pIVar1 = TypeRef__RTG__BoxFace;
    if (TypeRef__RTG__BoxFace != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar4 = FUN_?(pIVar1,1);
      plVar2 = (longlong *)FUN_?(lVar4 + 0x20);
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (plVar2 == (longlong *)0x0) {
      uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar6 = (ArgumentNullException *)func_?(uVar5);
      pSVar7 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar6,pSVar7,(MethodInfo *)0x0);
      uVar5 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(pAVar6,uVar5);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pAVar9 = (Array *)(**(code **)(*plVar2 + 0x888))(plVar2);
    if (pAVar9 != (Array *)0x0) {
      iVar10 = mscorlib.dll::System::Array::Array_get_Length(pAVar9,(MethodInfo *)0x0);
      pBVar16 = (BoxFaceAreaDesc__Array *)FUN_?(TypeInfo__RTG__BoxFaceAreaDesc,iVar10);
      bVar12 = iRam_? != 0;
      (this->fields)._snapAreaDesc = pBVar16;
      if (bVar12) {
        uVar13 = (uint)((ulonglong)&(this->fields)._snapAreaDesc >> 0xc);
        lVar4 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
        do {
          uVar14 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar15 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar12 = uVar14 == *puVar15;
          if (bVar12) {
            *puVar15 = uVar14 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      pLVar17 = (List_1_UnityEngine_Vector3_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      FUN_?(pLVar17,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      bVar12 = iRam_? != 0;
      (this->fields)._vertsBuffer = pLVar17;
      if (bVar12) {
        uVar13 = (uint)((ulonglong)&(this->fields)._vertsBuffer >> 0xc);
        lVar4 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
        do {
          uVar14 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar15 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar12 = uVar14 == *puVar15;
          if (bVar12) {
            *puVar15 = uVar14 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

