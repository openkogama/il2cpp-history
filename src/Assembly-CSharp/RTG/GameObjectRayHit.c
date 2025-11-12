
/* Void SortByHitDistance(List`1[RTG.GameObjectRayHit]) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit_SortByHitDistance
               (List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectRayHit____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectRayHit____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0;
  if (this == (Comparison_1_RTG_GameObjectRayHit_ *)0x0) {
    if (*(int *)&(TypeInfo__RTG__GameObjectRayHit____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9;
    this = (Comparison_1_RTG_GameObjectRayHit_ *)
           FUN_?(TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
    mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
              ((Func_3_Object_Object_Int32_ *)this,(Object *)object,
               MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
               ,(MethodInfo *)0x0);
    TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0 = this;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0 >>
                    0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  pMVar5 = 
  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
  ;
  if (hits == (List_1_RTG_GameObjectRayHit_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this == (Comparison_1_RTG_GameObjectRayHit_ *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
              (ExceptionArgument__Enum_comparison,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (1 < (hits->fields)._size) {
    keys = (hits->fields)._items;
    length = (hits->fields)._size;
    pvVar7 = MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
             ->klass->rgctx_data[0x33].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    if (*(int *)((longlong)pvVar7 + 0xe4) == 0) {
      FUN_?(pvVar7);
    }
    mscorlib.dll::System::Collections::Generic::ArraySortHelper`1[System::Object]::
    ArraySortHelper_1_System_Object__Sort
              ((Object__Array *)keys,0,length,(Comparison_1_Object_ *)this,
               pMVar5->klass->rgctx_data[0x32].method);
  }
  piVar8 = &(hits->fields)._version;
  *piVar8 = *piVar8 + 1;
  return;
}


/* Void Store(Ray, IEnumerable`1[UnityEngine.RaycastHit2D], IEnumerable`1[UnityEngine.RaycastHit],
   List`1[RTG.GameObjectRayHit]) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit_Store
               (Ray *hitRay,IEnumerable_1_UnityEngine_RaycastHit2D_ *hits2D,
               IEnumerable_1_UnityEngine_RaycastHit_ *hits3D,List_1_RTG_GameObjectRayHit_ *hits,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectRayHit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::RaycastHit2D>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::RaycastHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit2D>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plStack_1 = (longlong *)0x0;
  plStack_2 = (longlong *)0x0;
  if (hits == (List_1_RTG_GameObjectRayHit_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar4 = &(hits->fields)._version;
  *piVar4 = *piVar4 + 1;
  length = (hits->fields)._size;
  (hits->fields)._size = 0;
  if (0 < length) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (hits2D == (IEnumerable_1_UnityEngine_RaycastHit2D_ *)0x0) {
code_?:
    if (hits3D == (IEnumerable_1_UnityEngine_RaycastHit_ *)0x0) {
      return;
    }
    plStack_2 = (longlong *)
                 FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::RaycastHit>
                               ,hits3D);
    uStack_5 = 0;
    pplStack_6 = &plStack_2;
    while (plVar7 = plStack_2, plStack_2 != (longlong *)0x0) {
      lVar8 = *plStack_2;
      uVar9 = 0;
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        do {
          if (*(IEnumerator__Class **)(*(longlong *)(lVar8 + 0xb0) + uVar9 * 0x10) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar10 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar9 * 0x10) * 0x10 +
                       0x138 + lVar8);
            goto code_?;
          }
          uVar11 = (short)uVar9 + 1;
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_?(plStack_2,TypeInfo__System__Collections__IEnumerator,0)
      ;
code_?:
      cVar12 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      plVar7 = plStack_2;
      if (cVar12 == '\0') {
        if (plStack_2 == (longlong *)0x0) {
          return;
        }
        FUN_?(0,TypeInfo__System__IDisposable,plStack_2);
        return;
      }
      if (plStack_2 == (longlong *)0x0) goto code_?;
      lVar8 = *plStack_2;
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        uVar11 = 0;
        do {
          if (*(IEnumerator_1_UnityEngine_RaycastHit___Class **)
               (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit>) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) * 0x10 +
                       0x138 + lVar8);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
      }
      puVar10 = (undefined8 *)
                FUN_?(plStack_2,
                              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit>
                              ,0);
code_?:
      pVVar13 = (Vector2 *)(*(code *)*puVar10)(auStack_14,plVar7,puVar10[1]);
      VStack_15 = *pVVar13;
      VStack_16 = pVVar13[1];
      VStack_17 = pVVar13[2];
      VStack_18 = pVVar13[3];
      VVar19 = pVVar13[4];
      fVar20 = pVVar13[5].x;
      pGVar21 = (GameObjectRayHit *)FUN_?(TypeInfo__RTG__GameObjectRayHit);
      auStack_14._0_4_ = VStack_15.x;
      auStack_14._4_4_ = VStack_15.y;
      auStack_14._8_4_ = VStack_16.x;
      auStack_14._12_4_ = VStack_16.y;
      VStack_22 = VStack_17;
      VStack_23 = VStack_18;
      RStack_24.m_Origin.x = (hitRay->m_Origin).x;
      RStack_24.m_Origin.y = (hitRay->m_Origin).y;
      RStack_24._8_8_ = *(undefined8 *)&(hitRay->m_Origin).z;
      RStack_24.m_Direction.y = (hitRay->m_Direction).y;
      RStack_24.m_Direction.z = (hitRay->m_Direction).z;
      VStack_25 = VVar19;
      fStack_26 = fVar20;
      GameObjectRayHit__ctor(pGVar21,&RStack_24,(RaycastHit *)auStack_14,(MethodInfo *)0x0);
      pMVar27 = 
      MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
      ;
      piVar4 = &(hits->fields)._version;
      *piVar4 = *piVar4 + 1;
      pGVar28 = (hits->fields)._items;
      uVar29 = (hits->fields)._size;
      if (pGVar28 == (GameObjectRayHit__Array *)0x0) goto code_?;
      if (uVar29 < (uint)pGVar28->max_length) {
        (hits->fields)._size = uVar29 + 1;
        FUN_?();
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)hits,(Object *)pGVar21,
                   pMVar27->klass->rgctx_data[0xe].method);
      }
    }
  }
  else {
    plStack_1 = (longlong *)
                 FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::RaycastHit2D>
                               ,hits2D);
    uStack_5 = 0;
    pplStack_6 = &plStack_1;
    while (plStack_1 != (longlong *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      plVar7 = plStack_1;
      if (cVar12 == '\0') {
        if (plStack_1 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plStack_1);
        }
        goto code_?;
      }
      if (plStack_1 == (longlong *)0x0) {
code_?:
        FUN_?();
        break;
      }
      lVar8 = *plStack_1;
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        uVar11 = 0;
        do {
          if (*(IEnumerator_1_UnityEngine_RaycastHit2D___Class **)
               (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit2D>) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) * 0x10 +
                       0x138 + lVar8);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
      }
      puVar10 = (undefined8 *)
                FUN_?(plStack_1,
                              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit2D>
                              ,0);
code_?:
      pVVar13 = (Vector2 *)(*(code *)*puVar10)(auStack_14,plVar7,puVar10[1]);
      VStack_17 = *pVVar13;
      VStack_18 = pVVar13[1];
      VStack_15 = pVVar13[2];
      VStack_16 = pVVar13[3];
      fVar20 = pVVar13[4].x;
      pGVar21 = (GameObjectRayHit *)FUN_?(TypeInfo__RTG__GameObjectRayHit);
      auStack_14._0_4_ = VStack_17.x;
      auStack_14._4_4_ = VStack_17.y;
      auStack_14._8_4_ = VStack_18.x;
      auStack_14._12_4_ = VStack_18.y;
      VStack_22 = VStack_15;
      VStack_23 = VStack_16;
      VStack_25.x = fVar20;
      RStack_24.m_Origin.x = (hitRay->m_Origin).x;
      RStack_24.m_Origin.y = (hitRay->m_Origin).y;
      RStack_24._8_8_ = *(undefined8 *)&(hitRay->m_Origin).z;
      RStack_24.m_Direction.y = (hitRay->m_Direction).y;
      RStack_24.m_Direction.z = (hitRay->m_Direction).z;
      GameObjectRayHit__ctor_1(pGVar21,&RStack_24,(RaycastHit2D *)auStack_14,(MethodInfo *)0x0);
      pMVar27 = 
      MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
      ;
      piVar4 = &(hits->fields)._version;
      *piVar4 = *piVar4 + 1;
      pGVar28 = (hits->fields)._items;
      uVar29 = (hits->fields)._size;
      if (pGVar28 == (GameObjectRayHit__Array *)0x0) {
        FUN_?();
        goto code_?;
      }
      if (uVar29 < (uint)pGVar28->max_length) {
        (hits->fields)._size = uVar29 + 1;
        FUN_?(pGVar28,(longlong)(int)uVar29,pGVar21);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)hits,(Object *)pGVar21,
                   pMVar27->klass->rgctx_data[0xe].method);
      }
    }
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GameObjectRayHit(Ray, RaycastHit) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit__ctor
               (GameObjectRayHit *this,Ray *hitRay,RaycastHit *hit3D,MethodInfo *method)

{
  this_00 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                      (hit3D,(MethodInfo *)0x0);
  if (this_00 == (Collider *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._hitObject = pGVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
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
  }
  fVar8 = (hit3D->m_Point).y;
  fVar9 = (hit3D->m_Point).z;
  (this->fields)._hitPoint.x = (hit3D->m_Point).x;
  (this->fields)._hitPoint.y = fVar8;
  (this->fields)._hitPoint.z = fVar9;
  (this->fields)._hitEnter = hit3D->m_Distance;
  uStack_10._0_4_ = (hit3D->m_Normal).x;
  uStack_10._4_4_ = (hit3D->m_Normal).y;
  fStack_11 = (hit3D->m_Normal).z;
  (this->fields)._hitNormal.x = (float)(undefined4)uStack_10;
  (this->fields)._hitNormal.y = (float)uStack_10._4_4_;
  (this->fields)._hitNormal.z = fStack_11;
  fVar9 = (float)FUN_?(&uStack_10);
  if (_UNK_? < fVar9) {
    uVar12 = (hit3D->m_Normal).x;
    uVar13 = (hit3D->m_Normal).y;
    fVar14 = (float)uVar13 / fVar9;
    fVar8 = (float)uVar12 / fVar9;
    fVar9 = (hit3D->m_Normal).z / fVar9;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar8 = (pVVar15->zeroVector).x;
    fVar14 = (pVVar15->zeroVector).y;
    fVar9 = (pVVar15->zeroVector).z;
  }
  uVar16 = (hit3D->m_Point).x;
  uVar17 = (hit3D->m_Point).y;
  fVar18 = (float)((uint)(fVar14 * (float)uVar17 + fVar8 * (float)uVar16 + fVar9 * (hit3D->m_Point).z)
                  ^ _UNK_?);
  (this->fields)._hitPlane.m_Normal.x = fVar8;
  (this->fields)._hitPlane.m_Normal.y = fVar14;
  (this->fields)._hitPlane.m_Normal.z = fVar9;
  (this->fields)._hitPlane.m_Distance = fVar18;
  return;
}


/* GameObjectRayHit(Ray, RaycastHit2D) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit__ctor_1
               (GameObjectRayHit *this,Ray *hitRay,RaycastHit2D *hit2D,MethodInfo *method)

{
  this_00 = UnityEngine.Physics2DModule.dll::UnityEngine::RaycastHit2D::RaycastHit2D_get_collider
                      (hit2D,(MethodInfo *)0x0);
  if (this_00 == (Collider2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._hitObject = pGVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
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
  }
  fVar8 = (hit2D->m_Point).y;
  fVar9 = (hit2D->m_Point).y;
  (this->fields)._hitPoint.x = (hit2D->m_Point).x;
  (this->fields)._hitPoint.y = fVar9;
  (this->fields)._hitPoint.z = 0.0;
  pVVar10 = &hit2D->m_Normal;
  fVar9 = pVVar10->x;
  fVar11 = (hit2D->m_Normal).y;
  VStack_12 = *pVVar10;
  fVar13 = pVVar10->x;
  fVar14 = pVVar10->y;
  (this->fields)._hitEnter = hit2D->m_Distance;
  uStack_15 = 0;
  (this->fields)._hitNormal.x = fVar13;
  (this->fields)._hitNormal.y = fVar14;
  (this->fields)._hitNormal.z = 0.0;
  fVar13 = (float)FUN_?(&VStack_12);
  if (_UNK_? < fVar13) {
    fVar14 = 0.0 / fVar13;
    fVar9 = fVar9 / fVar13;
    fVar11 = fVar11 / fVar13;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar9 = (pVVar16->zeroVector).x;
    fVar11 = (pVVar16->zeroVector).y;
    fVar14 = (pVVar16->zeroVector).z;
  }
  fVar8 = (float)((uint)(fVar11 * fVar8 + fVar9 * (hit2D->m_Point).x + fVar14 * 0.0) ^
                  _UNK_?);
  (this->fields)._hitPlane.m_Normal.x = fVar9;
  (this->fields)._hitPlane.m_Normal.y = fVar11;
  (this->fields)._hitPlane.m_Normal.z = fVar14;
  (this->fields)._hitPlane.m_Distance = fVar8;
  return;
}


/* GameObjectRayHit(Ray, GameObject, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit__ctor_2
               (GameObjectRayHit *this,Ray *hitRay,GameObject *hitObject,Vector3 *hitNormal,
               float hitEnter,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._hitObject = hitObject;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  uVar6 = (hitRay->m_Direction).x;
  uVar7 = (hitRay->m_Direction).y;
  uVar8 = (hitRay->m_Origin).x;
  uVar9 = (hitRay->m_Origin).y;
  fVar10 = (float)uVar6 * hitEnter + (float)uVar8;
  fVar11 = (float)uVar7 * hitEnter + (float)uVar9;
  fVar12 = (hitRay->m_Direction).z * hitEnter + (hitRay->m_Origin).z;
  fStack_13 = hitNormal->z;
  (this->fields)._hitEnter = hitEnter;
  (this->fields)._hitPoint.x = fVar10;
  (this->fields)._hitPoint.y = fVar11;
  uStack_14._0_4_ = hitNormal->x;
  uStack_14._4_4_ = hitNormal->y;
  (this->fields)._hitNormal.x = (float)(undefined4)uStack_14;
  (this->fields)._hitNormal.y = (float)uStack_14._4_4_;
  (this->fields)._hitNormal.z = fStack_13;
  (this->fields)._hitPoint.z = fVar12;
  fVar15 = (float)FUN_?(&uStack_14);
  if (_UNK_? < fVar15) {
    uVar16 = hitNormal->x;
    uVar17 = hitNormal->y;
    fVar18 = (float)uVar17 / fVar15;
    fVar19 = (float)uVar16 / fVar15;
    fVar15 = hitNormal->z / fVar15;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar19 = (pVVar20->zeroVector).x;
    fVar18 = (pVVar20->zeroVector).y;
    fVar15 = (pVVar20->zeroVector).z;
  }
  fVar11 = (float)((uint)(fVar18 * fVar11 + fVar19 * fVar10 + fVar15 * fVar12) ^ _UNK_?);
  (this->fields)._hitPlane.m_Normal.x = fVar19;
  (this->fields)._hitPlane.m_Normal.y = fVar18;
  (this->fields)._hitPlane.m_Normal.z = fVar15;
  (this->fields)._hitPlane.m_Distance = fVar11;
  return;
}


/* GameObjectRayHit(Ray, GameObject, MeshRayHit) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit__ctor_3
               (GameObjectRayHit *this,Ray *ray,GameObject *hitObject,MeshRayHit *meshRayHit,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._hitObject = hitObject;
  pGVar2 = this;
  if (bVar1) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    ray = (Ray *)(ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)((longlong)ray * 8 + 0xADDR);
      pGVar2 = (GameObjectRayHit *)(uVar4 | 1L << (ulonglong)(uVar3 & 0x3f));
      puVar5 = (ulonglong *)((longlong)ray * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = (ulonglong)pGVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (meshRayHit == (MeshRayHit *)0x0) {
    FUN_?(pGVar2,ray);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uStack_7._0_4_ = (meshRayHit->fields)._hitPoint.x;
  uStack_7._4_4_ = (meshRayHit->fields)._hitPoint.y;
  fVar8 = (meshRayHit->fields)._hitPoint.z;
  (this->fields)._hitPoint.x = (float)uStack_7;
  (this->fields)._hitPoint.y = uStack_7._4_4_;
  (this->fields)._hitPoint.z = fVar8;
  (this->fields)._hitEnter = (meshRayHit->fields)._hitEnter;
  uStack_9._0_4_ = (meshRayHit->fields)._hitNormal.x;
  uStack_9._4_4_ = (meshRayHit->fields)._hitNormal.y;
  fVar10 = (meshRayHit->fields)._hitNormal.z;
  (this->fields)._hitNormal.x = (float)(undefined4)uStack_9;
  (this->fields)._hitNormal.y = (float)uStack_9._4_4_;
  (this->fields)._hitNormal.z = fVar10;
  fStack_11 = fVar10;
  uStack_12 = uStack_9;
  fVar13 = (float)FUN_?(&uStack_9);
  if (_UNK_? < fVar13) {
    uStack_12._0_4_ = (float)uStack_12 / fVar13;
    uStack_12._4_4_ = uStack_12._4_4_ / fVar13;
    fVar10 = fVar10 / fVar13;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_12._0_4_ = (pVVar14->zeroVector).x;
    uStack_12._4_4_ = (pVVar14->zeroVector).y;
    fVar10 = (pVVar14->zeroVector).z;
  }
  bVar1 = iRam_? != 0;
  (this->fields)._meshRayHit = meshRayHit;
  fVar8 = (float)((uint)(uStack_7._4_4_ * uStack_12._4_4_ + (float)uStack_7 * (float)uStack_12 +
                         fVar8 * fVar10) ^ _UNK_?);
  (this->fields)._hitPlane.m_Normal.x = (float)uStack_12;
  (this->fields)._hitPlane.m_Normal.y = uStack_12._4_4_;
  (this->fields)._hitPlane.m_Normal.z = fVar10;
  (this->fields)._hitPlane.m_Distance = fVar8;
  if (bVar1) {
    uVar3 = (uint)((ulonglong)&(this->fields)._meshRayHit >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar15 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar15 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

