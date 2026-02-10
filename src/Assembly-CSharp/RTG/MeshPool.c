
/* MeshPool() */

void Assembly-CSharp.dll::RTG::MeshPool::MeshPool__ctor(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__Singleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__RTG__Singleton<RTG::MeshPool>;
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c != 0) {
    return;
  }
  ppMVar2 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c != 0) {
    return;
  }
  lVar3 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar4 = ppMVar2;
  if (lVar3 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar3 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar4;
      LOCK();
      bVar6 = uVar5 != uRam_?;
      uVar7 = uVar5;
      uVar8 = uVar5 + 1;
      if (bVar6) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar6) && (ppMVar4 = (MethodInfo **)(ulonglong)uVar7, uVar5 = uVar7, uVar7 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar3;
  puVar9 = &(pSVar1->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar9 == 1;
  if (bVar6) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pSVar1->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar10 == 1;
  if (bVar6) {
    *puVar10 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar11 = &(pSVar1->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar5 == *psVar11;
    if (bVar6) {
      *psVar11 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar9 = &(pSVar1->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar9 == 1;
      if (bVar6) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar3._0_4_ = (pSVar1->_1).initializationExceptionGCHandle;
      lVar3._4_4_ = (pSVar1->_1).cctor_started;
      if (lVar3 == 0) {
        (pSVar1->_1).initializationExceptionGCHandle = 0;
        (pSVar1->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar3 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pSVar1->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pSVar1->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pSVar1->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pSVar1->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pSVar1->_1).field_0x6e & 4) != 0) {
      FUN_?(pSVar1);
      ppMVar4 = ppMVar2;
      pIVar13 = (Il2CppClass *)pSVar1;
code_?:
      do {
        if (ppMVar4 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar4 = pIVar13->methods;
            pMVar14 = *ppMVar4;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar2;
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar4 = ppMVar4 + 1;
          if (ppMVar4 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar4;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar4 = ppMVar2;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pSVar1->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pSVar1->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pSVar1->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar3 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar3 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar3;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pSVar1,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pSVar1->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pSVar1->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Mesh get_UnitBox() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitBox(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitBox;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = BoxMesh::BoxMesh_CreateBox
                     (_UNK_?,_UNK_?,_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitBox = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitBox >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitBox;
}


/* Mesh get_UnitCircleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCircleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCircleXY;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = CircleMesh::CircleMesh_CreateCircleXY(_UNK_?,200,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitCircleXY = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitCircleXY >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitCircleXY;
}


/* Mesh get_UnitCone() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCone(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCone;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = CylinderMesh::CylinderMesh_CreateCylinder
                     (_UNK_?,0.0,_UNK_?,0x1e,0x1e,1,1,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitCone = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitCone >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitCone;
}


/* Mesh get_UnitCoordSystem() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCoordSystem
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCoordSystem;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = LineMesh::LineMesh_CreateCoordSystemAxesLines
                     (_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitCoordSystem = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitCoordSystem >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitCoordSystem;
}


/* Mesh get_UnitCylinder() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCylinder
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCylinder;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = CylinderMesh::CylinderMesh_CreateCylinder
                     (_UNK_?,_UNK_?,_UNK_?,0x1e,0x1e,1,1,&CStack_2,
                      (MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitCylinder = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitCylinder >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitCylinder;
}


/* Mesh get_UnitCylindricalTorus() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCylindricalTorus
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCylindricalTorus;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = TorusMesh::TorusMesh_CreateCylindricalTorus
                     (&VStack_4,_UNK_?,_UNK_?,_UNK_?,0x50,&CStack_2,
                      (MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitCylindricalTorus = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitCylindricalTorus >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitCylindricalTorus;
}


/* Mesh get_UnitEqTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitEqTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitEqTriangleXY;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = TriangleMesh::TriangleMesh_CreateEqXY
                     (&VStack_4,_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitEqTriangleXY = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitEqTriangleXY >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitEqTriangleXY;
}


/* Mesh get_UnitPyramid() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitPyramid
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitPyramid;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = PyramidMesh::PyramidMesh_CreatePyramid
                     (&VStack_4,_UNK_?,_UNK_?,_UNK_?,&CStack_2,
                      (MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitPyramid = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitPyramid >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitPyramid;
}


/* Mesh get_UnitQuadXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitQuadXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitQuadXY;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = QuadMesh::QuadMesh_CreateQuadXY
                     (_UNK_?,_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitQuadXY = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitQuadXY >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitQuadXY;
}


/* Mesh get_UnitQuadXZ() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitQuadXZ
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitQuadXZ;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = QuadMesh::QuadMesh_CreateQuadXZ
                     (_UNK_?,_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitQuadXZ = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitQuadXZ >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitQuadXZ;
}


/* Mesh get_UnitRightAngledTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitRightAngledTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitRightAngledTriangleXY;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = TriangleMesh::TriangleMesh_CreateRightAngledTriangleXY
                     (&VStack_4,_UNK_?,_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitRightAngledTriangleXY = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitRightAngledTriangleXY >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitRightAngledTriangleXY;
}


/* Mesh get_UnitSegmentX() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitSegmentX
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitSegmentX;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.z = 0.0;
  VStack_4._0_8_ = ZEXT48(_UNK_?);
  VStack_5.x = (pVVar3->zeroVector).x;
  VStack_5.y = (pVVar3->zeroVector).y;
  VStack_5.z = (pVVar3->zeroVector).z;
  pMVar1 = LineMesh::LineMesh_CreateLine(&VStack_5,&VStack_4,&CStack_2,(MethodInfo *)0x0);
  bVar6 = iRam_? == 0;
  (this->fields)._unitSegmentX = pMVar1;
  if (bVar6) {
    return pMVar1;
  }
  uVar7 = (uint)((ulonglong)&(this->fields)._unitSegmentX >> 0xc);
  uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
  do {
    uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
    puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
    LOCK();
    bVar6 = uVar9 == *puVar10;
    if (bVar6) {
      *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
    }
    UNLOCK();
  } while (!bVar6);
code_?:
  return (this->fields)._unitSegmentX;
}


/* Mesh get_UnitSphere() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitSphere
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitSphere;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = SphereMesh::SphereMesh_CreateSphere
                     (_UNK_?,0x1e,0x1e,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitSphere = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitSphere >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitSphere;
}


/* Mesh get_UnitTorus() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitTorus(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitTorus;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = TorusMesh::TorusMesh_CreateTorus
                     (&VStack_4,_UNK_?,_UNK_?,0x50,0x50,&CStack_2,
                      (MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitTorus = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitTorus;
}


/* Mesh get_UnitTriangularPrism() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitTriangularPrism
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitTriangularPrism;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = PrismMesh::PrismMesh_CreateTriangularPrism
                     (&VStack_4,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                      _UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitTriangularPrism = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitTriangularPrism >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitTriangularPrism;
}


/* Mesh get_UnitWireBox() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireBox
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireBox;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = BoxMesh::BoxMesh_CreateWireBox
                     (_UNK_?,_UNK_?,_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitWireBox = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitWireBox >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitWireBox;
}


/* Mesh get_UnitWireCircleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireCircleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireCircleXY;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pMVar1 = CircleMesh::CircleMesh_CreateWireCircleXY
                     (_UNK_?,200,&CStack_2,(MethodInfo *)0x0);
  bVar3 = iRam_? == 0;
  (this->fields)._unitWireCircleXY = pMVar1;
  if (bVar3) {
    return pMVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._unitWireCircleXY >> 0xc);
  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
  do {
    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
    LOCK();
    bVar3 = uVar6 == *puVar7;
    if (bVar3) {
      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (!bVar3);
code_?:
  return (this->fields)._unitWireCircleXY;
}


/* Mesh get_UnitWireEqTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireEqTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireEqTriangleXY;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = TriangleMesh::TriangleMesh_CreateWireEqXY
                     (&VStack_4,_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitWireEqTriangleXY = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitWireEqTriangleXY >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitWireEqTriangleXY;
}


/* Mesh get_UnitWirePyramid() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWirePyramid
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWirePyramid;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = PyramidMesh::PyramidMesh_CreateWirePyramid
                     (&VStack_4,_UNK_?,_UNK_?,_UNK_?,&CStack_2,
                      (MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitWirePyramid = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitWirePyramid >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitWirePyramid;
}


/* Mesh get_UnitWireQuadXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireQuadXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireQuadXY;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  size.y = _UNK_?;
  size.x = _UNK_?;
  pMVar1 = QuadMesh::QuadMesh_CreateWireQuadXY(&VStack_4,size,&CStack_2,(MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitWireQuadXY = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitWireQuadXY >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitWireQuadXY;
}


/* Mesh get_UnitWireRightAngledTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireRightAngledTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireRightAngledTriangleXY;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = TriangleMesh::TriangleMesh_CreateWireRightAngledTriangleXY
                     (&VStack_4,_UNK_?,_UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitWireRightAngledTriangleXY = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitWireRightAngledTriangleXY >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitWireRightAngledTriangleXY;
}


/* Mesh get_UnitWireTriangularPrism() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireTriangularPrism
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireTriangularPrism;
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_2.r = _UNK_?;
  CStack_2.g = _UNK_?;
  CStack_2.b = _UNK_?;
  CStack_2.a = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  pMVar1 = PrismMesh::PrismMesh_CreateWireTriangularPrism
                     (&VStack_4,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                      _UNK_?,&CStack_2,(MethodInfo *)0x0);
  bVar5 = iRam_? == 0;
  (this->fields)._unitWireTriangularPrism = pMVar1;
  if (bVar5) {
    return pMVar1;
  }
  uVar6 = (uint)((ulonglong)&(this->fields)._unitWireTriangularPrism >> 0xc);
  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
  do {
    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
    LOCK();
    bVar5 = uVar8 == *puVar9;
    if (bVar5) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar5);
code_?:
  return (this->fields)._unitWireTriangularPrism;
}

