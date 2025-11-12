
/* Void Add(RaycastHit) */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add
               (PhysicsCollisionDatasWrapper *this,RaycastHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PhysicsCollisionData_length_exce);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (99 < (this->fields).length) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_PhysicsCollisionData_length_exce;
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
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      RStack_3.m_UV = (Vector2)pSVar1;
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2);
      return;
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pLVar5 = (this->fields).physicsCollisionDatas;
  if (pLVar5 != (List_1_PhysicsCollisionData_ *)0x0) {
    uVar6 = (this->fields).length;
    if ((uint)(pLVar5->fields)._size <= uVar6) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pPVar7 = (pLVar5->fields)._items;
    if (pPVar7 != (PhysicsCollisionData__Array *)0x0) {
      if ((uint)pPVar7->max_length <= uVar6) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pPVar7->vector[(int)uVar6] != (PhysicsCollisionData *)0x0) {
        RStack_3.m_Point.x = (hit->m_Point).x;
        RStack_3.m_Point.y = (hit->m_Point).y;
        RStack_3._8_8_ = *(undefined8 *)&(hit->m_Point).z;
        RStack_3.m_Collider = hit->m_Collider;
        RStack_3.m_Normal.y = (hit->m_Normal).y;
        RStack_3.m_Normal.z = (hit->m_Normal).z;
        RStack_3.m_FaceID = hit->m_FaceID;
        RStack_3.m_Distance = hit->m_Distance;
        RStack_3.m_UV = hit->m_UV;
        PhysicsCollisionData::PhysicsCollisionData_Set
                  (pPVar7->vector[(int)uVar6],&RStack_3,(MethodInfo *)0x0);
        (this->fields).length = (this->fields).length + 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Add(Collider, Vector3) */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
               (PhysicsCollisionDatasWrapper *this,Collider *collider,Vector3 *origin,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PhysicsCollisionData_length_exce);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).length < 100) {
    pLVar1 = (this->fields).physicsCollisionDatas;
    if (pLVar1 != (List_1_PhysicsCollisionData_ *)0x0) {
      uVar2 = (this->fields).length;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pPVar4 = (pLVar1->fields)._items;
      if (pPVar4 != (PhysicsCollisionData__Array *)0x0) {
        if ((uint)pPVar4->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pPVar5 = pPVar4->vector[(int)uVar2];
        if (pPVar5 != (PhysicsCollisionData *)0x0) {
          fVar6 = origin->y;
          fVar7 = origin->z;
          (pPVar5->fields).point.x = origin->x;
          (pPVar5->fields).point.y = fVar6;
          (pPVar5->fields).point.z = fVar7;
          if (collider != (Collider *)0x0) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)collider,(MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            (pPVar5->fields).transform = pTVar8;
            if (bVar9) {
              uVar2 = (uint)((ulonglong)&(pPVar5->fields).transform >> 0xc);
              uVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar9 = uVar11 == *puVar12;
                if (bVar9) {
                  *puVar12 = uVar11 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            bVar9 = cRam_? == '\0';
            (pPVar5->fields).isInsideCollider = 1;
            (pPVar5->fields).distance = 0.0;
            if (bVar9) {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            bVar9 = iRam_? != 0;
            pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar6 = (pVVar13->zeroVector).y;
            fVar7 = (pVVar13->zeroVector).z;
            (pPVar5->fields).normal.x = (pVVar13->zeroVector).x;
            (pPVar5->fields).normal.y = fVar6;
            (pPVar5->fields).normal.z = fVar7;
            (pPVar5->fields).collider = collider;
            if (bVar9) {
              uVar2 = (uint)((ulonglong)&(pPVar5->fields).collider >> 0xc);
              uVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar9 = uVar11 == *puVar12;
                if (bVar9) {
                  *puVar12 = uVar11 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            (this->fields).length = (this->fields).length + 1;
            return;
          }
        }
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar14 = StringLiteral_PhysicsCollisionData_length_exce;
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
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar15,2,pSVar14);
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear
               (PhysicsCollisionDatasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (0 < (this->fields).length) {
    lVar2 = 0x20;
    do {
      pLVar3 = (this->fields).physicsCollisionDatas;
      if (pLVar3 == (List_1_PhysicsCollisionData_ *)0x0) goto code_?;
      if ((uint)(pLVar3->fields)._size <= uVar1) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pPVar5 = (pLVar3->fields)._items;
      if (pPVar5 == (PhysicsCollisionData__Array *)0x0) goto code_?;
      if ((uint)pPVar5->max_length <= uVar1) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pPVar5->vector + lVar2 + -0x20);
      if (lVar6 == 0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar7 = iRam_? != 0;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      if (bVar7) {
        uVar8 = (uint)(lVar6 + 0x40U >> 0xc);
        lVar6 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar10 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar7 = uVar9 == *puVar10;
          if (bVar7) {
            *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pLVar3 = (this->fields).physicsCollisionDatas;
      if (pLVar3 == (List_1_PhysicsCollisionData_ *)0x0) goto code_?;
      if ((uint)(pLVar3->fields)._size <= uVar1) goto code_?;
      pPVar5 = (pLVar3->fields)._items;
      if (pPVar5 == (PhysicsCollisionData__Array *)0x0) goto code_?;
      if ((uint)pPVar5->max_length <= uVar1) goto code_?;
      lVar6 = *(longlong *)((longlong)pPVar5->vector + lVar2 + -0x20);
      if (lVar6 == 0) goto code_?;
      bVar7 = iRam_? != 0;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      if (bVar7) {
        uVar8 = (uint)(lVar6 + 0x20U >> 0xc);
        lVar6 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar10 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar7 = uVar9 == *puVar10;
          if (bVar7) {
            *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((int)uVar1 < (this->fields).length);
  }
  (this->fields).length = 0;
  return;
}


/* PhysicsCollisionDatasWrapper() */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper__ctor
               (PhysicsCollisionDatasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Capacity__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PhysicsCollisionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_PhysicsCollisionData_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pPVar3 = (PhysicsCollisionData__Array *)FUN_?(pvVar2,100);
  (pLVar1->fields)._items = pPVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields).physicsCollisionDatas = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).physicsCollisionDatas >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = 0;
  pLVar1 = (this->fields).physicsCollisionDatas;
  while (pLVar1 != (List_1_PhysicsCollisionData_ *)0x0) {
    pPVar3 = (pLVar1->fields)._items;
    if (pPVar3 == (PhysicsCollisionData__Array *)0x0) break;
    if ((int)pPVar3->max_length <= iVar9) {
      return;
    }
    pLVar1 = (this->fields).physicsCollisionDatas;
    item = (Object *)FUN_?(TypeInfo__PhysicsCollisionData);
    pMVar10 = 
    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_;
    if (pLVar1 == (List_1_PhysicsCollisionData_ *)0x0) break;
    piVar11 = &(pLVar1->fields)._version;
    *piVar11 = *piVar11 + 1;
    pPVar3 = (pLVar1->fields)._items;
    if (pPVar3 == (PhysicsCollisionData__Array *)0x0) break;
    uVar4 = (pLVar1->fields)._size;
    if (uVar4 < (uint)pPVar3->max_length) {
      (pLVar1->fields)._size = uVar4 + 1;
      FUN_?(pPVar3,(longlong)(int)uVar4,item);
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                ((List_1_System_Object_ *)pLVar1,item,pMVar10->klass->rgctx_data[0xe].method);
    }
    iVar9 = iVar9 + 1;
    pLVar1 = (this->fields).physicsCollisionDatas;
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* PhysicsCollisionData get_Item(Int32) */

PhysicsCollisionData *
Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
          (PhysicsCollisionDatasWrapper *this,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).physicsCollisionDatas;
  if (pLVar1 != (List_1_PhysicsCollisionData_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)key) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pPVar3 = (PhysicsCollisionData *)(*pcVar2)();
      return pPVar3;
    }
    pPVar4 = (pLVar1->fields)._items;
    if (pPVar4 != (PhysicsCollisionData__Array *)0x0) {
      if ((uint)key < (uint)pPVar4->max_length) {
        return pPVar4->vector[key];
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pPVar3 = (PhysicsCollisionData *)(*pcVar2)();
      return pPVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (PhysicsCollisionData *)(*pcVar2)();
  return pPVar3;
}

