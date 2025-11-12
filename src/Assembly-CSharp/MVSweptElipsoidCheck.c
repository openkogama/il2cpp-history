
/* Void CalculateAxisAlignedRect(Vector3[], Transform) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CalculateAxisAlignedRect
               (Vector3__Array *hitsClockwise,Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0;
  uVar2 = 0;
  if (hitsClockwise != (Vector3__Array *)0x0) {
    do {
      if ((uint)hitsClockwise->max_length <= uVar2) goto code_?;
      if (t == (Transform *)0x0) goto code_?;
      pIStack_3 = *(Il2CppMethodPointer *)((longlong)&hitsClockwise->vector[0].x + lVar1);
      fStack_4 = *(float *)((longlong)&hitsClockwise->vector[0].z + lVar1);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_5 = (undefined1  [8])0x0;
      fStack_6 = 0.0;
      pvVar7 = (t->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)t,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      method_00 = (MethodInfo *)auStack_5;
      (*pcRam_?)(pvVar7);
      if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVSweptElipsoidCheck);
      }
      pVVar10 = TypeInfo__MVSweptElipsoidCheck->static_fields->
               cornerPointsLocalSpaceCalculateAxisAlignedRect;
      if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar10->max_length <= uVar2) goto code_?;
      uVar2 = uVar2 + 1;
      *(undefined1 (*) [8])((longlong)&pVVar10->vector[0].x + lVar1) = auStack_5;
      *(float *)((longlong)&pVVar10->vector[0].z + lVar1) = fStack_6;
      lVar1 = lVar1 + 0xc;
    } while (lVar1 < 0x30);
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar10 = TypeInfo__MVSweptElipsoidCheck->static_fields->
             cornerPointsLocalSpaceCalculateAxisAlignedRect;
    if (pVVar10 != (Vector3__Array *)0x0) {
      if ((int)pVVar10->max_length != 0) {
        pIStack_3 = *(Il2CppMethodPointer *)pVVar10->vector;
        uVar2 = 1;
        fStack_4 = pVVar10->vector[0].z;
        auStack_5 = (undefined1  [8])pIStack_3;
        fStack_6 = fStack_4;
        do {
          index = 0;
          do {
            if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
              FUN_?();
            }
            pVVar10 = TypeInfo__MVSweptElipsoidCheck->static_fields->
                     cornerPointsLocalSpaceCalculateAxisAlignedRect;
            if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar10->max_length <= uVar2) goto code_?;
            fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (pVVar10->vector + (int)uVar2,index,method_00);
            fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              ((Vector3 *)auStack_5,index,method_00);
            if (fVar12 < fVar11) {
              if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MVSweptElipsoidCheck);
              }
              pVVar10 = TypeInfo__MVSweptElipsoidCheck->static_fields->
                       cornerPointsLocalSpaceCalculateAxisAlignedRect;
              if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
              if ((uint)pVVar10->max_length <= uVar2) goto code_?;
              fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                (pVVar10->vector + (int)uVar2,index,method_00);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        ((Vector3 *)auStack_5,index,fVar11,in_R9);
            }
            if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__MVSweptElipsoidCheck);
            }
            pVVar10 = TypeInfo__MVSweptElipsoidCheck->static_fields->
                     cornerPointsLocalSpaceCalculateAxisAlignedRect;
            if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar10->max_length <= uVar2) goto code_?;
            fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (pVVar10->vector + (int)uVar2,index,method_00);
            fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              ((Vector3 *)&pIStack_3,index,method_00);
            if (fVar11 < fVar12) {
              if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MVSweptElipsoidCheck);
              }
              pVVar10 = TypeInfo__MVSweptElipsoidCheck->static_fields->
                       cornerPointsLocalSpaceCalculateAxisAlignedRect;
              if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
              if ((uint)pVVar10->max_length <= uVar2) goto code_?;
              fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                (pVVar10->vector + (int)uVar2,index,method_00);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                        ((Vector3 *)&pIStack_3,index,fVar11,in_R9);
            }
            index = index + 1;
          } while (index < 3);
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 4);
        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVSweptElipsoidCheck);
        }
        pVVar10 = TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect;
        if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar10->max_length != 0) {
          *(Il2CppMethodPointer *)pVVar10->vector = pIStack_3;
          pVVar10->vector[0].z = fStack_4;
          pVVar10 = TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect;
          if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
          if (1 < (uint)pVVar10->max_length) {
            pVVar10->vector[1].x = (float)auStack_5._0_4_;
            pVVar10->vector[1].y = (float)auStack_5._4_4_;
            pVVar10->vector[1].z = fStack_6;
            return;
          }
        }
      }
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean CubeIsWithinFirstHitRadius(IntVector, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CubeIsWithinFirstHitRadius
               (IntVector *pos,float moveDistance,CollisionState *collisionState,MethodInfo *method)

{
  if (collisionState->firstHitDetected != 0) {
    fVar1 = collisionState->scaledMaxRadius + _UNK_?;
    fVar2 = moveDistance * collisionState->scaledMaxRadius;
    uVar3 = (collisionState->localDirection).x;
    uVar4 = (collisionState->localDirection).y;
    uVar5 = (collisionState->localOrigin).x;
    uVar6 = (collisionState->localOrigin).y;
    fVar7 = (float)(int)pos->x - (fVar2 * (float)uVar3 + (float)uVar5);
    fVar8 = (float)(int)pos->y - (fVar2 * (float)uVar4 + (float)uVar6);
    fVar2 = (float)(int)pos->z -
            (fVar2 * (collisionState->localDirection).z + (collisionState->localOrigin).z);
    if (fVar1 * fVar1 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar2 * fVar2) {
      return 0;
    }
  }
  return 1;
}


/* Boolean CubeIsWithinSphereRadius(IntVector, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CubeIsWithinSphereRadius
               (IntVector *pos,CollisionState *collisionState,MethodInfo *method)

{
  uVar1 = (collisionState->localDirection).x;
  uVar2 = (collisionState->localDirection).y;
  fVar3 = collisionState->scaledMaxRadius + _UNK_?;
  afStackX_8[0] = 0.0;
  uVar4 = (collisionState->localOrigin).x;
  uVar5 = (collisionState->localOrigin).y;
  VStack_6.x = 0.0;
  VStack_6.y = 0.0;
  VStack_6.z = 0.0;
  VStack_7.z = (collisionState->localDirection).z * _UNK_? +
                (collisionState->localOrigin).z;
  aVStack_8[0].x = (float)(int)pos->x;
  aVStack_8[0].z = (float)(int)pos->z;
  VStack_9.z = (collisionState->localOrigin).z -
                (collisionState->localDirection).z * _UNK_?;
  aVStack_8[0].y = (float)(int)pos->y;
  VStack_7.y = (float)uVar2 * _UNK_? + (float)uVar5;
  VStack_7.x = (float)uVar1 * _UNK_? + (float)uVar4;
  VStack_9.y = (float)uVar5 - (float)uVar2 * _UNK_?;
  VStack_9.x = (float)uVar4 - (float)uVar1 * _UNK_?;
  MathFunctions::MathFunctions_DistancePointLine_1
            (aVStack_8,&VStack_9,&VStack_7,afStackX_8,&VStack_6,(MethodInfo *)0x0);
  return afStackX_8[0] <= fVar3;
}


/* Void DrawAxisAlignedRect(Vector3, Vector3, Int32, Transform, Single) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_DrawAxisAlignedRect
               (Vector3 *min,Vector3 *max,int32_t ignoreAxis,Transform *t,float localIgnoreAxisValue
               ,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)CONCAT44(in_register_00000084,ignoreAxis);
  method_00 = (MethodInfo *)t;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  if (ignoreAxis == 2) {
    VStack_3.x = min->x;
    VStack_3.y = min->y;
    fStack_4 = min->z;
    VStack_5 = VStack_3;
  }
  uVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  do {
    if (iVar8 != ignoreAxis) {
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (min,iVar8,pMVar1);
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_set_Item
                (&VStack_3,iVar7,fVar9,method_00);
      iVar7 = iVar7 + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  if (ignoreAxis == 2) {
    VStack_2.x = max->x;
    VStack_2.y = max->y;
    fStack_4 = max->z;
    VStack_5 = VStack_2;
  }
  iVar7 = 0;
  iVar8 = 0;
  do {
    if (iVar8 != ignoreAxis) {
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (max,iVar8,pMVar1);
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_set_Item
                (&VStack_2,iVar7,fVar9,method_00);
      iVar7 = iVar7 + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  lVar10 = FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  lStack_11 = lVar10;
  FUN_?(lVar10,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__)
  ;
  if (lVar10 != 0) {
    FUN_?(lVar10,VStack_3,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(lVar10,(ulonglong)VStack_3 & 0xffffffff,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(lVar10,VStack_2,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
    FUN_?(lVar10,(ulonglong)VStack_2 & 0xffffffff);
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__)
    ;
    uVar12 = 0;
    lVar13 = 0x20;
    do {
      VStack_3.x = 0.0;
      VStack_3.y = 0.0;
      fStack_14 = 0.0;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto code_?;
      lVar10 = *(longlong *)(lVar10 + 0x10);
      if (lVar10 == 0) goto code_?;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto code_?;
      VStack_2 = *(Vector2 *)(lVar10 + lVar13);
      iVar7 = 0;
      iVar8 = 0;
      do {
        if (iVar8 == ignoreAxis) {
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    ((Vector3 *)&VStack_3,iVar8,localIgnoreAxisValue,method_00);
        }
        else {
          fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_Item
                             (&VStack_2,iVar7,pMVar1);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    ((Vector3 *)&VStack_3,iVar8,fVar9,method_00);
          iVar7 = iVar7 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      if (ignoreAxis == 2) {
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                  ((Vector3 *)&VStack_3,2,localIgnoreAxisValue,method_00);
      }
      if (t == (Transform *)0x0) goto code_?;
      VStack_15 = VStack_3;
      fStack_16 = fStack_14;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_17.x = 0.0;
      VStack_17.y = 0.0;
      fStack_18 = 0.0;
      pvVar19 = (t->fields)._._.m_CachedPtr;
      if (pvVar19 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)t,(MethodInfo *)0x0);
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      pcVar20 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
        uVar21 = func_?(&UNK_?);
        FUN_?(uVar21,0);
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      pcRam_? = pcVar20;
      (*pcRam_?)(pvVar19,&VStack_15,&VStack_17);
      pMVar1 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
      piVar22 = &(this->fields)._version;
      *piVar22 = *piVar22 + 1;
      pPVar23 = (this->fields)._items;
      if (pPVar23 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar24 = (this->fields)._size;
      if (uVar24 < (uint)pPVar23->max_length) {
        (this->fields)._size = uVar24 + 1;
        if ((uint)pPVar23->max_length <= uVar24) goto code_?;
        *(Vector2 *)(pPVar23->vector + (int)uVar24) = VStack_17;
        pPVar23->vector[(int)uVar24].SecondAxisSign = (int32_t)fStack_18;
      }
      else {
        fStack_4 = fStack_18;
        VStack_5 = VStack_17;
        pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,(PlaneIdHelper_PlaneQuadrantInfo *)&VStack_5,pMVar1);
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 8;
      lVar10 = lStack_11;
    } while (lVar13 < 0x40);
    do {
      uVar12 = uVar6 & 3;
      if ((uint)(this->fields)._size <= uVar12) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      pPVar23 = (this->fields)._items;
      if (pPVar23 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) break;
      if ((uint)pPVar23->max_length <= uVar12) {
code_?:
        FUN_?();
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      VVar25 = *(Vector2 *)(pPVar23->vector + uVar12);
      fVar9 = (float)pPVar23->vector[uVar12].SecondAxisSign;
      uVar12 = uVar6 + 1 & 0x80000003;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
      }
      if ((uint)(this->fields)._size <= uVar12) goto code_?;
      if ((uint)pPVar23->max_length <= uVar12) goto code_?;
      uVar26 = pPVar23->vector[uVar6 & 3].Quadrant;
      uVar27 = pPVar23->vector[uVar6 & 3].FirstAxisSign;
      uVar28 = pPVar23->vector[(int)uVar12].Quadrant;
      fVar29 = (float)pPVar23->vector[(int)uVar12].FirstAxisSign;
      fVar30 = (float)pPVar23->vector[(int)uVar12].SecondAxisSign;
      fVar31 = (float)pPVar23->vector[uVar6 & 3].SecondAxisSign;
      uVar12 = uVar6 & 3;
      if ((uint)(this->fields)._size <= uVar12) goto code_?;
      if (pPVar23 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) break;
      if ((uint)pPVar23->max_length <= uVar12) goto code_?;
      uVar32 = pPVar23->vector[uVar12].Quadrant;
      uVar33 = pPVar23->vector[uVar12].FirstAxisSign;
      fVar34 = (float)pPVar23->vector[uVar12].SecondAxisSign;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_5.y = (fVar29 + (float)uVar27) - (float)uVar33;
      VStack_5.x = ((float)uVar28 + (float)uVar26) - (float)uVar32;
      VStack_15 = VVar25;
      fStack_16 = fVar9;
      fStack_4 = (fVar30 + fVar31) - fVar34;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_2
                ((Vector3 *)&VStack_15,(Vector3 *)&VStack_5,(MethodInfo *)0x0);
      uVar6 = uVar6 + 1;
      if (3 < (int)uVar6) {
        return;
      }
    } while( true );
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void GetBoundRays(Ray, ICubeModelCollider) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetBoundRays
               (Ray *ray,ICubeModelCollider *cmb,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_1[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_1[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_1[0].m_Direction.z = (ray->m_Direction).z;
  pVVar2 = MVSweptElipsoidCheck_GetMaxAngleLocalAxisVector
                      (&VStack_3,aRStack_1,cmb,(MethodInfo *)0x0);
  uVar4 = (ray->m_Direction).x;
  uVar5 = (ray->m_Direction).y;
  fVar6 = (ray->m_Direction).z;
  pMVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  fVar8 = (float)uVar5 * (pMVar7->worldToElipsoidSpace).m01 +
           (float)uVar4 * (pMVar7->worldToElipsoidSpace).m00 +
           fVar6 * (pMVar7->worldToElipsoidSpace).m02;
  fVar9 = (float)uVar5 * (pMVar7->worldToElipsoidSpace).m21 +
           (float)uVar4 * (pMVar7->worldToElipsoidSpace).m20 +
           fVar6 * (pMVar7->worldToElipsoidSpace).m22;
  fVar10 = (float)uVar5 * (pMVar7->worldToElipsoidSpace).m11 +
           (float)uVar4 * (pMVar7->worldToElipsoidSpace).m10 +
           fVar6 * (pMVar7->worldToElipsoidSpace).m12;
  uVar11 = pVVar2->x;
  uVar12 = pVVar2->y;
  fVar6 = pVVar2->z;
  fVar13 = (float)uVar12 * (pMVar7->worldToElipsoidSpace).m01 +
          (float)uVar11 * (pMVar7->worldToElipsoidSpace).m00 +
          fVar6 * (pMVar7->worldToElipsoidSpace).m02;
  fVar14 = (float)uVar12 * (pMVar7->worldToElipsoidSpace).m21 +
           (float)uVar11 * (pMVar7->worldToElipsoidSpace).m20 +
           fVar6 * (pMVar7->worldToElipsoidSpace).m22;
  fVar6 = (float)uVar12 * (pMVar7->worldToElipsoidSpace).m11 +
           (float)uVar11 * (pMVar7->worldToElipsoidSpace).m10 +
           fVar6 * (pMVar7->worldToElipsoidSpace).m12;
  fVar15 = fVar14 * fVar10 - fVar6 * fVar9;
  fVar16 = fVar13 * fVar9 - fVar14 * fVar8;
  fVar6 = fVar6 * fVar8 - fVar13 * fVar10;
  uStack_17 = CONCAT44(fVar16,fVar15);
  fStack_18 = fVar6;
  fVar13 = (float)FUN_?(&uStack_17);
  fVar14 = _UNK_?;
  if (_UNK_? < fVar13) {
    fVar6 = fVar6 / fVar13;
    uStack_17 = CONCAT44(fVar16 / fVar13,fVar15 / fVar13);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_17._0_4_ = (pVVar19->zeroVector).x;
    uStack_17._4_4_ = (pVVar19->zeroVector).y;
    fVar6 = (pVVar19->zeroVector).z;
  }
  fVar16 = uStack_17._4_4_;
  fVar15 = (float)uStack_17;
  fVar20 = fVar6 * fVar10 - uStack_17._4_4_ * fVar9;
  fVar21 = (float)uStack_17 * fVar9 - fVar6 * fVar8;
  fVar13 = uStack_17._4_4_ * fVar8 - (float)uStack_17 * fVar10;
  uStack_17 = CONCAT44(fVar21,fVar20);
  fStack_18 = fVar13;
  fVar9 = (float)FUN_?(&uStack_17);
  if (fVar14 < fVar9) {
    fVar13 = fVar13 / fVar9;
    uStack_17 = CONCAT44(fVar21 / fVar9,fVar20 / fVar9);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_17._0_4_ = (pVVar19->zeroVector).x;
    uStack_17._4_4_ = (pVVar19->zeroVector).y;
    fVar13 = (pVVar19->zeroVector).z;
  }
  pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
  if (pVVar22 != (Vector3__Array *)0x0) {
    if ((int)pVVar22->max_length != 0) {
      pVVar22->vector[0].x = (float)uStack_17 + fVar15;
      pVVar22->vector[0].y = uStack_17._4_4_ + fVar16;
      pVVar22->vector[0].z = fVar13 + fVar6;
      pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
      if (pVVar22 == (Vector3__Array *)0x0) goto code_?;
      if (1 < (uint)pVVar22->max_length) {
        pVVar22->vector[1].x = fVar15 - (float)uStack_17;
        pVVar22->vector[1].y = fVar16 - uStack_17._4_4_;
        pVVar22->vector[1].z = fVar6 - fVar13;
        uVar23 = _UNK_?;
        pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
        fVar9 = (float)((uint)fVar16 ^ _UNK_?);
        fVar8 = (float)((uint)fVar6 ^ _UNK_?);
        if (pVVar22 == (Vector3__Array *)0x0) goto code_?;
        if (2 < (uint)pVVar22->max_length) {
          pVVar22->vector[2].x = (float)((uint)fVar15 ^ _UNK_?) + (float)uStack_17;
          pVVar22->vector[2].y = fVar9 + uStack_17._4_4_;
          pVVar22->vector[2].z = fVar8 + fVar13;
          pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
          if (pVVar22 == (Vector3__Array *)0x0) goto code_?;
          if (3 < (uint)pVVar22->max_length) {
            uVar24 = 0;
            lVar25 = 0;
            pVVar22->vector[3].x = (float)((uint)fVar15 ^ uVar23) - (float)uStack_17;
            pVVar22->vector[3].y = (float)((uint)fVar16 ^ uVar23) - uStack_17._4_4_;
            lVar26 = 0;
            pVVar22->vector[3].z = (float)((uint)fVar6 ^ uVar23) - fVar13;
            while( true ) {
              if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                FUN_?();
              }
              pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
              if (pVVar22 == (Vector3__Array *)0x0) goto code_?;
              if ((int)pVVar22->max_length <= (int)uVar24) {
                return;
              }
              if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                FUN_?();
              }
              pMVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields;
              pRVar27 = pMVar7->raysGetBoundRays;
              if ((pRVar27 == (Ray__Array *)0x0) ||
                 (pVVar22 = pMVar7->circleCornersGetBoundRays, pVVar22 == (Vector3__Array *)0x0))
              goto code_?;
              if ((uint)pVVar22->max_length <= uVar24) break;
              VStack_3._0_8_ = *(undefined8 *)((longlong)&pVVar22->vector[0].x + lVar26);
              fVar8 = VStack_3.y;
              uVar28 = (ray->m_Origin).x;
              uVar29 = (ray->m_Origin).y;
              fVar6 = *(float *)((longlong)&pVVar22->vector[0].z + lVar26);
              fVar13 = (pMVar7->elipsoidSpaceToWorld).m21;
              fVar15 = (pMVar7->elipsoidSpaceToWorld).m20;
              fVar16 = (pMVar7->elipsoidSpaceToWorld).m22;
              fVar9 = (ray->m_Origin).z;
              if ((uint)pRVar27->max_length <= uVar24) break;
              *(ulonglong *)((longlong)&pRVar27->vector[0].m_Origin.x + lVar25) =
                   CONCAT44(fVar8 * (pMVar7->elipsoidSpaceToWorld).m11 +
                            VStack_3.x * (pMVar7->elipsoidSpaceToWorld).m10 +
                            fVar6 * (pMVar7->elipsoidSpaceToWorld).m12 + (float)uVar29,
                            fVar8 * (pMVar7->elipsoidSpaceToWorld).m01 +
                            VStack_3.x * (pMVar7->elipsoidSpaceToWorld).m00 +
                            fVar6 * (pMVar7->elipsoidSpaceToWorld).m02 + (float)uVar28);
              *(float *)((longlong)&pRVar27->vector[0].m_Origin.z + lVar25) =
                   fVar8 * fVar13 + VStack_3.x * fVar15 + fVar6 * fVar16 + fVar9;
              pRVar27 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
              if (pRVar27 == (Ray__Array *)0x0) goto code_?;
              if ((uint)pRVar27->max_length <= uVar24) break;
              uStack_17._0_4_ = (ray->m_Direction).x;
              uStack_17._4_4_ = (ray->m_Direction).y;
              fStack_18 = (ray->m_Direction).z;
              fVar6 = (float)FUN_?(&uStack_17);
              if (fVar14 < fVar6) {
                uVar30 = (ray->m_Direction).x;
                fVar13 = (float)uVar30 / fVar6;
                fVar15 = (ray->m_Direction).y / fVar6;
                fVar6 = (ray->m_Direction).z / fVar6;
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
                fVar13 = (pVVar19->zeroVector).x;
                fVar15 = (pVVar19->zeroVector).y;
                fVar6 = (pVVar19->zeroVector).z;
              }
              *(ulonglong *)((longlong)&pRVar27->vector[0].m_Direction.x + lVar25) =
                   CONCAT44(fVar15,fVar13);
              uVar24 = uVar24 + 1;
              lVar26 = lVar26 + 0xc;
              *(float *)((longlong)&pRVar27->vector[0].m_Direction.z + lVar25) = fVar6;
              lVar25 = lVar25 + 0x18;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar31 = (code *)swi(3);
    (*pcVar31)();
    return;
  }
code_?:
  FUN_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Vector3 GetMaxAngleLocalAxisVector(Ray, ICubeModelCollider) */

Vector3 * Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetMaxAngleLocalAxisVector
                    (Vector3 *__return_storage_ptr__,Ray *ray,ICubeModelCollider *cmb,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  uVar2 = 0;
  fStackX_8 = _UNK_?;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  uVar3 = uVar2;
  if (cmb != (ICubeModelCollider *)0x0) {
    do {
      pIVar4 = cmb->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__ICubeModelCollider) {
            pVVar7 = &(pIVar4->vtable).get_Id + (pIVar4->interfaceOffsets[uVar5].offset + 6);
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      pVVar7 = (VirtualInvokeData *)FUN_?(cmb,TypeInfo__ICubeModelCollider,6);
code_?:
      pfVar8 = (float *)(*pVVar7->methodPtr)(auStack_9,cmb,pVVar7->method);
      fVar10 = *pfVar8;
      fVar11 = pfVar8[1];
      fVar12 = pfVar8[2];
      fVar13 = pfVar8[3];
      if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVSweptElipsoidCheck);
      }
      pVVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector;
      if (pVVar14 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar14->max_length <= (uint)uVar2) {
        FUN_?();
        pcVar15 = (code *)swi(3);
        pVVar16 = (Vector3 *)(*pcVar15)();
        return pVVar16;
      }
      uVar17 = *(undefined8 *)((longlong)&pVVar14->vector[0].x + uVar3);
      fVar18 = (float)uVar17;
      fVar19 = *(float *)((longlong)&pVVar14->vector[0].z + uVar3);
      uStack_20._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
      fVar21 = (fVar10 + fVar10) * fVar10;
      fVar22 = (fVar12 + fVar12) * fVar12;
      fVar23 = (fVar12 + fVar12) * fVar10;
      fVar24 = (fVar11 + fVar11) * fVar10;
      fVar10 = (fVar10 + fVar10) * fVar13;
      fVar25 = (fVar12 + fVar12) * fVar13;
      fVar26 = (fVar11 + fVar11) * fVar11;
      fVar12 = (fVar12 + fVar12) * fVar11;
      fVar13 = (fVar11 + fVar11) * fVar13;
      fVar11 = (fVar1 - (fVar22 + fVar26)) * fVar18 + (fVar24 - fVar25) * uStack_20._4_4_ +
               (fVar13 + fVar23) * fVar19;
      fVar24 = (fVar1 - (fVar22 + fVar21)) * uStack_20._4_4_ + (fVar25 + fVar24) * fVar18 +
               (fVar12 - fVar10) * fVar19;
      fVar10 = (fVar23 - fVar13) * fVar18 + (fVar10 + fVar12) * uStack_20._4_4_ +
               (_UNK_? - (fVar26 + fVar21)) * fVar19;
      uStack_27 = CONCAT44(fVar24,fVar11);
      fStack_28 = fVar10;
      uStack_20 = uVar17;
      fVar1 = (float)FUN_?(&uStack_27);
      if (_UNK_? < fVar1) {
        fVar12 = fVar10 / fVar1;
        uStack_29 = CONCAT44(fVar24 / fVar1,fVar11 / fVar1);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_29._0_4_ = (pVVar30->zeroVector).x;
        uStack_29._4_4_ = (pVVar30->zeroVector).y;
        fVar12 = (pVVar30->zeroVector).z;
      }
      uVar31 = (ray->m_Direction).x;
      uVar32 = (ray->m_Direction).y;
      fVar1 = (float)((uint)(uStack_29._4_4_ * (float)uVar32 + (float)uStack_29 * (float)uVar31 +
                             fVar12 * (ray->m_Direction).z) & _UNK_?);
      if (fVar1 < fStackX_8) {
        __return_storage_ptr__->x = fVar11;
        __return_storage_ptr__->y = fVar24;
        __return_storage_ptr__->z = fVar10;
        fStackX_8 = fVar1;
      }
      uVar33 = (uint)uVar2 + 1;
      uVar2 = (ulonglong)uVar33;
      uVar3 = uVar3 + 0xc;
      fVar1 = _UNK_?;
      if (2 < (int)uVar33) {
        return __return_storage_ptr__;
      }
    } while( true );
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  pVVar16 = (Vector3 *)(*pcVar15)();
  return pVVar16;
}


/* Vector3 GetPlaneNormal(Vector3) */

Vector3 * Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetPlaneNormal
                    (Vector3 *__return_storage_ptr__,Vector3 *localDir,MethodInfo *method)

{
  uVar1 = (uint)_UNK_?;
  if (((float)((uint)localDir->x & uVar1) < (float)((uint)localDir->y & uVar1)) ||
     ((float)((uint)localDir->x & uVar1) < (float)((uint)localDir->z & uVar1))) {
    if (((float)((uint)localDir->y & uVar1) < (float)((uint)localDir->x & uVar1)) ||
       ((float)((uint)localDir->y & uVar1) < (float)((uint)localDir->z & uVar1))) {
      localDir->x = 0.0;
      localDir->y = 0.0;
      if (0.0 <= localDir->z) {
        fVar2 = (float)func_?();
      }
      else {
        fVar2 = (float)func_?();
      }
      localDir->z = fVar2;
    }
    else {
      localDir->x = 0.0;
      localDir->z = 0.0;
      if (0.0 <= localDir->y) {
        fVar2 = (float)func_?();
        localDir->y = fVar2;
      }
      else {
        fVar2 = (float)func_?();
        localDir->y = fVar2;
      }
    }
  }
  else {
    localDir->y = 0.0;
    localDir->z = 0.0;
    if (0.0 <= localDir->x) {
      fVar2 = (float)func_?();
      localDir->x = fVar2;
    }
    else {
      fVar2 = (float)func_?();
      localDir->x = fVar2;
    }
  }
  uVar3 = localDir->x;
  fVar4 = localDir->y * _UNK_?;
  fVar2 = localDir->z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar3 * _UNK_?;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void GetRaysProjectedOnPlane(Ray[], Plane ByRef, Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetRaysProjectedOnPlane
               (Ray__Array *boundRays,Plane *projectPlane,Vector3 *planeOrigin,Vector3 *planeNormal,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
  if (boundRays != (Ray__Array *)0x0) {
    if ((int)boundRays->max_length != 0) {
      if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
      if ((int)pVVar1->max_length != 0) {
        fVar2 = boundRays->vector[0].m_Origin.y;
        pVVar1->vector[0].x = boundRays->vector[0].m_Origin.x;
        pVVar1->vector[0].y = fVar2;
        pVVar1->vector[0].z = boundRays->vector[0].m_Origin.z;
        pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
        if (1 < (uint)boundRays->max_length) {
          if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
          if (1 < (uint)pVVar1->max_length) {
            fVar2 = boundRays->vector[1].m_Origin.y;
            pVVar1->vector[1].x = boundRays->vector[1].m_Origin.x;
            pVVar1->vector[1].y = fVar2;
            pVVar1->vector[1].z = boundRays->vector[1].m_Origin.z;
            pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
            if (2 < (uint)boundRays->max_length) {
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              if (2 < (uint)pVVar1->max_length) {
                fVar2 = boundRays->vector[2].m_Origin.y;
                pVVar1->vector[2].x = boundRays->vector[2].m_Origin.x;
                pVVar1->vector[2].y = fVar2;
                pVVar1->vector[2].z = boundRays->vector[2].m_Origin.z;
                uVar3 = _UNK_?;
                pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
                if (3 < (uint)boundRays->max_length) {
                  if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                  if (3 < (uint)pVVar1->max_length) {
                    fVar2 = boundRays->vector[3].m_Origin.y;
                    p_Var13 = (_union_155 *)boundRays->vector;
                    uVar4 = 0;
                    pVVar1->vector[3].x = boundRays->vector[3].m_Origin.x;
                    pVVar1->vector[3].y = fVar2;
                    pVVar1->vector[3].z = boundRays->vector[3].m_Origin.z;
                    while (uVar4 < (uint)boundRays->max_length) {
                      _Var6 = *p_Var13;
                      _Var7 = p_Var13[1];
                      _Var2 = p_Var13[2];
                      if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                        FUN_?(TypeInfo__MVSweptElipsoidCheck);
                      }
                      pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
                      if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                      if ((uint)pVVar1->max_length <= uVar4) break;
                      auStack_5._0_8_ = *(undefined8 *)&projectPlane->m_Normal;
                      auStack_5._8_8_ = *(undefined8 *)&(projectPlane->m_Normal).z;
                      method_00 = (MethodInfo *)auStack_5;
                      fStack_6 = _Var7._0_4_;
                      uStack_7 = _Var7._4_4_;
                      uStack_8 = _Var2._0_4_;
                      fStack_9 = _Var2._4_4_;
                      _Stack_78 = _Var6;
                      bVar10 = MVSweptElipsoidCheck_RayCast
                                         ((Ray *)&_Stack_78,pVVar1->vector + (int)uVar4,
                                          (Plane *)method_00,(MethodInfo *)0x0);
                      if (bVar10 == 0) {
                        if ((uint)boundRays->max_length <= uVar4) break;
                        auStack_5._0_8_ = *(undefined8 *)((longlong)p_Var13 + 0xc);
                        uStack_7 = 0;
                        _Stack_78 = *p_Var13;
                        uStack_8 = 0;
                        fStack_9 = 0.0;
                        fStack_6 = *(float *)(p_Var13 + 1);
                        VStack_11.z = (float)((uint)*(float *)((longlong)p_Var13 + 0x14) ^ uVar3);
                        VStack_11.y = (float)((uint)((ulonglong)auStack_5._0_8_ >> 0x20) ^ uVar3);
                        VStack_11.x = (float)((uint)auStack_5._0_8_ ^ uVar3);
                        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                  Vector3_Normalize((Vector3 *)(auStack_5 + 0x10),&VStack_11,
                                                    method_00);
                        uVar13 = pVVar12->x;
                        uVar14 = pVVar12->y;
                        fStack_9 = pVVar12->z;
                        uStack_7 = uVar13;
                        uStack_8 = uVar14;
                        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                          FUN_?(TypeInfo__MVSweptElipsoidCheck);
                        }
                        pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
                        if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                        if ((uint)pVVar1->max_length <= uVar4) break;
                        auStack_5._0_8_ = *(undefined8 *)&projectPlane->m_Normal;
                        auStack_5._8_8_ = *(undefined8 *)&(projectPlane->m_Normal).z;
                        a_Stack_58[1]._4_2_ = (undefined2)uStack_7;
                        a_Stack_58[1]._6_2_ = uStack_7._2_2_;
                        a_Stack_58[1]._0_4_ = (uint32_t)fStack_6;
                        a_Stack_58[2]._4_4_ = fStack_9;
                        a_Stack_58[2]._0_2_ = (undefined2)uStack_8;
                        a_Stack_58[2]._2_1_ = uStack_8._2_1_;
                        a_Stack_58[2]._3_1_ = uStack_8._3_1_;
                        a_Stack_58[0] = _Stack_78;
                        MVSweptElipsoidCheck_RayCast
                                  ((Ray *)a_Stack_58,pVVar1->vector + (int)uVar4,
                                   (Plane *)auStack_5,(MethodInfo *)0x0);
                      }
                      uVar4 = uVar4 + 1;
                      p_Var13 = p_Var13 + 3;
                      if (3 < (int)uVar4) {
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Int32 GetScanAxis(Vector3) */

int32_t Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetScanAxis
                  (Vector3 *scanRectNormal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_scan_axis_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  fVar2 = _UNK_?;
  index = 0;
  do {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                      (scanRectNormal,index,in_R8);
    if (fVar2 < (float)((uint)fVar3 & uVar1)) {
      return index;
    }
    index = index + 1;
  } while (index < 3);
  uStack_4._0_4_ = scanRectNormal->x;
  uStack_4._4_4_ = scanRectNormal->y;
  fStack_5 = scanRectNormal->z;
  pSVar6 = (String *)FUN_?(&uStack_4,0);
  pSVar6 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_No_scan_axis_found_,pSVar6,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar6,(MethodInfo *)0x0);
  return -1;
}


/* Void HandleCube(VoxelHit ByRef, IntVector, Vector3, Single, CollisionState ByRef) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleCube
               (VoxelHit *vh,IntVector *pos,Vector3 *radius,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVSweptElipsoidCheck);
  }
  puVar2 = (undefined8 *)
            CONCAT26(collisionState._6_2_,
                     CONCAT24(collisionState._4_2_,
                              CONCAT22(collisionState._2_2_,(short)collisionState)));
  uVar3 = pos->x;
  uVar4 = pos->y;
  VStack_5.y._0_2_ = pos->z;
  if (((((*(short *)((longlong)puVar2 + 0x94) <= (short)uVar3) &&
        (*(short *)((longlong)puVar2 + 0x96) <= (short)uVar4)) &&
       (collisionState._4_2_ = pos->z, *(short *)(puVar2 + 0x13) <= collisionState._4_2_)) &&
      (((short)uVar3 <= *(short *)((longlong)puVar2 + 0x9a) &&
       ((short)uVar4 <= *(short *)((longlong)puVar2 + 0x9c))))) &&
     (pos->z <= *(short *)((longlong)puVar2 + 0x9e))) {
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      collisionState._0_2_ = uVar3;
      collisionState._2_2_ = uVar4;
      FUN_?(TypeInfo__MVSweptElipsoidCheck);
    }
    fVar6 = *(float *)(puVar2 + 0x15) + _UNK_?;
    uVar7 = pos->y;
    collisionState._0_2_ = 0;
    collisionState._2_2_ = 0;
    VStack_8._0_8_ = *puVar2;
    fVar9 = (float)*(undefined8 *)((longlong)puVar2 + 0x24);
    fVar10 = (float)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0x24) >> 0x20);
    VStack_5.x = 0.0;
    VStack_5.y = 0.0;
    VStack_5.z = 0.0;
    VStack_11.x = fVar9 * _UNK_? + VStack_8.x;
    VStack_11.z = *(float *)((longlong)puVar2 + 0x2c) * _UNK_? + *(float *)(puVar2 + 1);
    VStack_11.y = fVar10 * _UNK_? + VStack_8.y;
    VStack_12.x = (float)(int)pos->x;
    VStack_12.z = (float)(int)pos->z;
    VStack_13.z = *(float *)(puVar2 + 1) - *(float *)((longlong)puVar2 + 0x2c) * _UNK_?;
    VStack_12.y = (float)(int)(short)uVar7;
    VStack_13.y = VStack_8.y - fVar10 * _UNK_?;
    VStack_13.x = VStack_8.x - fVar9 * _UNK_?;
    MathFunctions::MathFunctions_DistancePointLine_1
              (&VStack_12,&VStack_13,&VStack_11,(float *)&collisionState,&VStack_5,
               (MethodInfo *)0x0);
    if ((float)CONCAT22(collisionState._2_2_,(short)collisionState) <= fVar6) {
      if (puVar2[9] == 0) {
DAT_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar15 = pos->x;
      uVar16 = pos->y;
      collisionState._4_2_ = pos->z;
      collisionState._0_2_ = uVar15;
      collisionState._2_2_ = uVar16;
      cube = (Cube *)FUN_?();
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((cube != (Cube *)0x0) && ((cube->fields).hiddenSides != 0x3f)) {
        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                  ((CubeBase *)cube,
                   &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace,
                   (MethodInfo *)0x0);
        fVar9 = _UNK_?;
        sVar17 = pos->x;
        uVar18 = 0;
        lVar19 = 0;
        sVar20 = pos->y;
        sVar21 = pos->z;
        while( true ) {
          if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
            FUN_?();
          }
          pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
          if (pVVar22 == (Vector3__Array *)0x0) goto DAT_?;
          if ((int)pVVar22->max_length <= (int)uVar18) {
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            uVar18 = 0;
            pFVar23 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
            if (pFVar23 == (FaceFlags__Enum__Array *)0x0) goto DAT_?;
            pFVar24 = pFVar23->vector;
            goto code_?;
          }
          if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
            FUN_?();
          }
          pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
          if (pVVar22 == (Vector3__Array *)0x0) goto DAT_?;
          if ((uint)pVVar22->max_length <= uVar18) break;
          VStack_25._0_8_ = *(undefined8 *)((longlong)&pVVar22->vector[0].x + lVar19);
          *(ulonglong *)((longlong)&pVVar22->vector[0].x + lVar19) =
               CONCAT44(VStack_25.y + (float)(int)sVar20,VStack_25.x + (float)(int)sVar17);
          *(float *)((longlong)&pVVar22->vector[0].z + lVar19) =
               *(float *)((longlong)&pVVar22->vector[0].z + lVar19) + (float)(int)sVar21;
          pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
          if (pVVar22 == (Vector3__Array *)0x0) goto DAT_?;
          if ((uint)pVVar22->max_length <= uVar18) break;
          VStack_8._0_8_ = *(undefined8 *)((longlong)&pVVar22->vector[0].x + lVar19);
          fVar26 = VStack_8.y;
          fVar10 = *(float *)((longlong)&pVVar22->vector[0].z + lVar19);
          fVar27 = fVar9 / (fVar26 * *(float *)((longlong)puVar2 + 0x6c) +
                             VStack_8.x * *(float *)((longlong)puVar2 + 0x5c) +
                             fVar10 * *(float *)((longlong)puVar2 + 0x7c) +
                            *(float *)((longlong)puVar2 + 0x8c));
          uVar18 = uVar18 + 1;
          fVar6 = *(float *)(puVar2 + 0xd);
          fVar28 = *(float *)(puVar2 + 0xb);
          fVar29 = *(float *)(puVar2 + 0xf);
          fVar30 = *(float *)(puVar2 + 0x11);
          *(ulonglong *)((longlong)&pVVar22->vector[0].x + lVar19) =
               CONCAT44((fVar26 * *(float *)((longlong)puVar2 + 100) +
                         VStack_8.x * *(float *)((longlong)puVar2 + 0x54) +
                         fVar10 * *(float *)((longlong)puVar2 + 0x74) +
                        *(float *)((longlong)puVar2 + 0x84)) * fVar27,
                        (fVar26 * *(float *)(puVar2 + 0xc) +
                         VStack_8.x * *(float *)(puVar2 + 10) +
                         fVar10 * *(float *)(puVar2 + 0xe) + *(float *)(puVar2 + 0x10)) * fVar27);
          *(float *)((longlong)&pVVar22->vector[0].z + lVar19) =
               (fVar26 * fVar6 + VStack_8.x * fVar28 + fVar10 * fVar29 + fVar30) * fVar27;
          lVar19 = lVar19 + 0xc;
        }
code_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
  return;
code_?:
  if ((int)pFVar23->max_length <= (int)uVar18) {
    if (bVar1 == 0) {
      return;
    }
    if (*(char *)((longlong)puVar2 + 0xa4) != '\0') {
      return;
    }
    iVar31 = *(int *)(puVar2 + 0x12);
    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (iVar31 == 0) {
      sVar17 = pos->x;
    }
    else if (iVar31 == 1) {
      sVar17 = pos->y;
    }
    else {
      if (iVar31 != 2) {
        uVar32 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar32);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (this,(MethodInfo *)0x0);
        uVar32 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
        FUN_?(this,uVar32);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      sVar17 = pos->z;
    }
    *(int *)(puVar2 + 0x14) = (int)sVar17;
    *(undefined1 *)((longlong)puVar2 + 0xa4) = 1;
    return;
  }
  if ((uint)pFVar23->max_length <= uVar18) goto code_?;
  uVar33 = (undefined1)*pFVar24;
  if (((cube->fields).hiddenSides & uVar33) == 0) {
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    FVar34 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                       ((uint)(byte)uVar33,(MethodInfo *)0x0);
    collisionState._0_2_ = (short)FVar34;
    collisionState._2_2_ = (short)(FVar34 >> 0x10);
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    FVar34 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                       ((uint)(byte)uVar33,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
              (&TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace,
               &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace,FVar34,
               (MethodInfo *)0x0);
    pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace;
    if (pVVar22 == (Vector3__Array *)0x0) goto DAT_?;
    if (((int)pVVar22->max_length == 0) || ((uint)pVVar22->max_length < 4))
    goto code_?;
    CStack_35._192_8_ = puVar2[0x18];
    CStack_35.localOrigin._0_8_ = *puVar2;
    CStack_35._8_8_ = puVar2[1];
    CStack_35.localHitPoint._4_8_ = puVar2[2];
    CStack_35.localNormal._0_8_ = puVar2[3];
    CStack_35._32_8_ = puVar2[4];
    CStack_35.localDirection._4_8_ = puVar2[5];
    CStack_35.origin._0_8_ = puVar2[6];
    CStack_35._56_8_ = puVar2[7];
    CStack_35.direction._4_8_ = puVar2[8];
    CStack_35.cmb = (ICubeModelCollider *)puVar2[9];
    CStack_35.localToElipsoidSpace._0_8_ = puVar2[10];
    CStack_35.localToElipsoidSpace._8_8_ = puVar2[0xb];
    CStack_35.localToElipsoidSpace._16_8_ = puVar2[0xc];
    CStack_35.localToElipsoidSpace._24_8_ = puVar2[0xd];
    CStack_35.localToElipsoidSpace._32_8_ = puVar2[0xe];
    CStack_35.localToElipsoidSpace._40_8_ = puVar2[0xf];
    CStack_35.localToElipsoidSpace._48_8_ = puVar2[0x10];
    CStack_35.localToElipsoidSpace._56_8_ = puVar2[0x11];
    CStack_35._144_8_ = puVar2[0x12];
    CStack_35._152_8_ = puVar2[0x13];
    CStack_35._160_8_ = puVar2[0x14];
    CStack_35._168_8_ = puVar2[0x15];
    CStack_35.elipsoidSpaceOrigin._4_8_ = puVar2[0x16];
    CStack_35.elipsoidSpaceDirection._0_8_ = puVar2[0x17];
    VStack_11._0_6_ = *pos;
    VStack_12.x = radius->x;
    VStack_12.y = radius->y;
    VStack_12.z = radius->z;
    pVVar36 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace;
    VStack_13.x = pVVar36->vector[2].x;
    VStack_13.y = pVVar36->vector[2].y;
    VStack_13.z = pVVar36->vector[2].z;
    VStack_37.z = pVVar22->vector[3].z;
    VStack_38.z = pVVar22->vector[0].z;
    VStack_37.x = pVVar22->vector[3].x;
    VStack_37.y = pVVar22->vector[3].y;
    VStack_38.x = pVVar22->vector[0].x;
    VStack_38.y = pVVar22->vector[0].y;
    bVar39 = MVSweptElipsoidCheck_HandleTriangleTest
                       (&VStack_38,&VStack_37,&VStack_13,vh,distance,
                        CONCAT22(collisionState._2_2_,(short)collisionState),cube,&VStack_12,
                        (IntVector *)&VStack_11,&CStack_35,(MethodInfo *)0x0);
    pVVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace;
    if (pVVar22 == (Vector3__Array *)0x0) goto DAT_?;
    if ((uint)pVVar22->max_length < 3) goto code_?;
    CStack_40._192_8_ = puVar2[0x18];
    CStack_40.localOrigin._0_8_ = *puVar2;
    CStack_40._8_8_ = puVar2[1];
    CStack_40.localHitPoint._4_8_ = puVar2[2];
    CStack_40.localNormal._0_8_ = puVar2[3];
    CStack_40._32_8_ = puVar2[4];
    CStack_40.localDirection._4_8_ = puVar2[5];
    CStack_40.origin._0_8_ = puVar2[6];
    CStack_40._56_8_ = puVar2[7];
    CStack_40.direction._4_8_ = puVar2[8];
    CStack_40.cmb = (ICubeModelCollider *)puVar2[9];
    CStack_40.localToElipsoidSpace._0_8_ = puVar2[10];
    CStack_40.localToElipsoidSpace._8_8_ = puVar2[0xb];
    CStack_40.localToElipsoidSpace._16_8_ = puVar2[0xc];
    CStack_40.localToElipsoidSpace._24_8_ = puVar2[0xd];
    CStack_40.localToElipsoidSpace._32_8_ = puVar2[0xe];
    CStack_40.localToElipsoidSpace._40_8_ = puVar2[0xf];
    CStack_40.localToElipsoidSpace._48_8_ = puVar2[0x10];
    CStack_40.localToElipsoidSpace._56_8_ = puVar2[0x11];
    CStack_40._144_8_ = puVar2[0x12];
    CStack_40._152_8_ = puVar2[0x13];
    CStack_40._160_8_ = puVar2[0x14];
    CStack_40._168_8_ = puVar2[0x15];
    CStack_40.elipsoidSpaceOrigin._4_8_ = puVar2[0x16];
    CStack_40.elipsoidSpaceDirection._0_8_ = puVar2[0x17];
    VStack_5._0_6_ = *pos;
    VStack_41.x = radius->x;
    VStack_41.y = radius->y;
    VStack_41.z = radius->z;
    pVVar36 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace;
    VStack_42.x = pVVar36->vector[0].x;
    VStack_42.y = pVVar36->vector[0].y;
    VStack_42.z = pVVar36->vector[0].z;
    pVVar36 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace;
    VStack_25.x = pVVar36->vector[1].x;
    VStack_25.y = pVVar36->vector[1].y;
    VStack_25.z = pVVar36->vector[1].z;
    VStack_8.z = pVVar22->vector[2].z;
    VStack_8.x = pVVar22->vector[2].x;
    VStack_8.y = pVVar22->vector[2].y;
    bVar43 = MVSweptElipsoidCheck_HandleTriangleTest
                       (&VStack_8,&VStack_25,&VStack_42,vh,distance,
                        CONCAT22(collisionState._2_2_,(short)collisionState),cube,&VStack_41,
                        (IntVector *)&VStack_5,&CStack_40,(MethodInfo *)0x0);
    bVar44 = bVar1 != 0;
    bVar1 = bVar43;
    if (bVar39 != 0 || bVar44) {
      bVar1 = 1;
    }
  }
  uVar18 = uVar18 + 1;
  pFVar24 = (FaceFlags__Enum *)((longlong)pFVar24 + 1);
  goto code_?;
}


/* Void HandleObjectsInsideBoxCollider(Ray, Vector3, Quaternion, Single, Single, Int32,
   PhysicsCollisionDatasWrapper, VoxelHit ByRef, Ray[], HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleObjectsInsideBoxCollider
               (Ray *ray,Vector3 *radius,Quaternion *rotation,float maxRadius,float distance,
               int32_t indexOfFirstHit,PhysicsCollisionDatasWrapper *collisionData,
               VoxelHit *voxelHit,Ray__Array *boundRays,HashSet_1_System_Int32_ *ignoreWoIds,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__BoxCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.interactionFlags = 0;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    while( true ) {
      while( true ) {
        do {
          indexOfFirstHit = indexOfFirstHit + 1;
          if ((collisionData->fields).length <= indexOfFirstHit) {
            return;
          }
          pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
          if (pPVar2 == (PhysicsCollisionData *)0x0) goto code_?;
          pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                             ((pPVar2->fields).transform,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
        } while ((pMVar3 == (MVWorldObjectClient *)0x0) ||
                ((ignoreWoIds != (HashSet_1_System_Int32_ *)0x0 &&
                 (bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                          Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                    ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,
                                     (pMVar3->fields)._.id,
                                     MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                    ), bVar4 != 0))));
        lVar5 = FUN_?(pMVar3,TypeInfo__ICubeModelCollider);
        if (lVar5 != 0) break;
        pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
        if (pPVar2 == (PhysicsCollisionData *)0x0) goto code_?;
        if ((pPVar2->fields).isInsideCollider == 0) {
          fVar6 = voxelHit->distance;
          pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
          if (pPVar2 == (PhysicsCollisionData *)0x0) goto code_?;
          pfVar7 = &(pPVar2->fields).distance;
          if (*pfVar7 <= fVar6 && fVar6 != *pfVar7) {
            pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                               (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
            woId = (pMVar3->fields)._.id;
            if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,pPVar2,woId,(MethodInfo *)0x0);
            return;
          }
        }
      }
      fVar6 = voxelHit->distance;
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if (pPVar2 == (PhysicsCollisionData *)0x0) break;
      if (fVar6 <= (pPVar2->fields).distance) {
        return;
      }
      VStack_1.interactionFlags = 0;
      VStack_1.point.x = 0.0;
      VStack_1.point.y = 0.0;
      VStack_1.point.z = 0.0;
      VStack_1.normal.x = 0.0;
      VStack_1.normal.y = 0.0;
      VStack_1.normal.z = 0.0;
      VStack_1.cubePos.x = 0;
      VStack_1.cubePos.y = 0;
      VStack_1.cubePos.z = 0;
      VStack_1._30_2_ = 0;
      VStack_1.face = 0;
      VStack_1.isCubeHit = 0;
      VStack_1._37_3_ = 0;
      VStack_1.woId = 0;
      VStack_1._44_4_ = 0;
      VStack_1.cube = (Cube *)0x0;
      VStack_1.distance = 0.0;
      VStack_1._60_4_ = 0;
      VStack_1.collider = (Collider *)0x0;
      VStack_1.transform = (Transform *)0x0;
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if (pPVar2 == (PhysicsCollisionData *)0x0) break;
      chunk = (BoxCollider *)(pPVar2->fields).collider;
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar8 = TypeInfo__ICubeModelCollider;
      wo = (ICubeModelCollider *)FUN_?(pMVar3,TypeInfo__ICubeModelCollider);
      if (wo == (ICubeModelCollider *)0x0) {
        FUN_?(pMVar3,pIVar8);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (chunk != (BoxCollider *)0x0) {
        bVar10 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
        if (((chunk->klass->_1).naturalAligment < bVar10) ||
           ((chunk->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) {
          FUN_?(chunk);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      VStack_11.z = radius->z;
      aRStack_12[0].m_Origin.x = (ray->m_Origin).x;
      aRStack_12[0].m_Origin.y = (ray->m_Origin).y;
      aRStack_12[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      aRStack_12[0].m_Direction.y = (ray->m_Direction).y;
      aRStack_12[0].m_Direction.z = (ray->m_Direction).z;
      VStack_11.x = radius->x;
      VStack_11.y = radius->y;
      bVar4 = MVSweptElipsoidCheck_LayerScan
                        (&VStack_1,&VStack_11,maxRadius,chunk,distance,wo,pPVar2,aRStack_12,
                         boundRays,(MethodInfo *)0x0);
      if ((bVar4 != 0) && (VStack_1.distance < voxelHit->distance)) {
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
                  (voxelHit,&VStack_1,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean HandleTriangleTest(Vector3, Vector3, Vector3, VoxelHit ByRef, Single, Face, Cube,
   Vector3, IntVector, CollisionState) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleTriangleTest
               (Vector3 *p1,Vector3 *p2,Vector3 *p3,VoxelHit *currentVoxelHit,float distance,
               Face__Enum face,Cube *cube,Vector3 *radiusVec,IntVector *pos,
               CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_this_is_wrong);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Points___0____1____2_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Origin__Direction__distance__0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVSweptElipsoidCheck);
  }
  puVar1 = (undefined8 *)
            CONCAT44(collisionState._4_4_,CONCAT22(collisionState._2_2_,collisionState._0_2_));
  (TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance = INFINITY;
  uStack_2 = *puVar1;
  uStack_3 = puVar1[1];
  uStack_4 = puVar1[2];
  uStack_5 = puVar1[3];
  uStack_6 = puVar1[4];
  uStack_7 = puVar1[5];
  uStack_8 = puVar1[6];
  uStack_9 = puVar1[7];
  uStack_10 = puVar1[8];
  uStack_11 = puVar1[9];
  uStack_12 = puVar1[10];
  uStack_13 = puVar1[0xb];
  uStack_14 = puVar1[0xc];
  uStack_15 = puVar1[0xd];
  uStack_16 = puVar1[0x10];
  uStack_17 = puVar1[0x11];
  uStack_18 = puVar1[0xe];
  uStack_19 = puVar1[0xf];
  uStack_20 = puVar1[0x12];
  uStack_21 = puVar1[0x13];
  uStack_22 = puVar1[0x14];
  uStack_23 = puVar1[0x17];
  uStack_24 = (undefined4)puVar1[0x15];
  fStack_25 = (float)((ulonglong)puVar1[0x15] >> 0x20);
  fStack_26 = (float)puVar1[0x16];
  fStack_27 = (float)((ulonglong)puVar1[0x16] >> 0x20);
  uStack_28._4_4_ = (float)((ulonglong)puVar1[0x18] >> 0x20);
  fVar29 = uStack_28._4_4_;
  uStack_28 = puVar1[0x18];
  bVar30 = TriangleCheck::TriangleCheck_CheckTriangle
                     (p1,p2,p3,(Vector3 *)((longlong)puVar1 + 0xac),(Vector3 *)(puVar1 + 0x17),
                      fVar29,&TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached,
                      (MethodInfo *)0x0);
  if (bVar30 != 0) {
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVSweptElipsoidCheck);
    }
    uStack_2 = *puVar1;
    uStack_3 = puVar1[1];
    uVar31 = puVar1[0x18];
    uStack_4 = puVar1[2];
    uStack_5 = puVar1[3];
    uStack_6 = puVar1[4];
    uStack_7 = puVar1[5];
    uStack_8 = puVar1[6];
    uStack_9 = puVar1[7];
    uStack_10 = puVar1[8];
    uStack_11 = puVar1[9];
    uStack_12 = puVar1[10];
    uStack_13 = puVar1[0xb];
    uStack_14 = puVar1[0xc];
    uStack_15 = puVar1[0xd];
    uStack_18 = puVar1[0xe];
    uStack_19 = puVar1[0xf];
    uStack_16 = puVar1[0x10];
    uStack_17 = puVar1[0x11];
    uStack_20 = puVar1[0x12];
    uStack_21 = puVar1[0x13];
    uStack_22 = puVar1[0x14];
    fStack_26 = *(float *)(puVar1 + 0x16);
    fStack_27 = *(float *)((longlong)puVar1 + 0xb4);
    uStack_23 = puVar1[0x17];
    uStack_24 = (undefined4)puVar1[0x15];
    fStack_25 = (float)((ulonglong)puVar1[0x15] >> 0x20);
    uStack_28._4_4_ = (float)((ulonglong)uVar31 >> 0x20);
    bVar32 = uStack_28._4_4_ < (TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance;
    uStack_28 = uVar31;
    if (bVar32) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_this_is_wrong,(MethodInfo *)0x0);
      pOVar33 = (Object__Array *)FUN_?(TypeInfo__System__Object,3);
      fStack_34 = p1->z;
      uStack_35._0_4_ = p1->x;
      uStack_35._4_4_ = p1->y;
      lVar36 = FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_35);
      if (pOVar33 == (Object__Array *)0x0) {
code_?:
        FUN_?();
        pcVar37 = (code *)swi(3);
        bVar30 = (*pcVar37)();
        return bVar30;
      }
      if ((lVar36 != 0) &&
         (lVar38 = FUN_?(lVar36,(pOVar33->klass->_0).element_class), lVar38 == 0)) {
        uVar31 = FUN_?();
        FUN_?(uVar31,0);
        pcVar37 = (code *)swi(3);
        bVar30 = (*pcVar37)();
        return bVar30;
      }
      FUN_?(pOVar33,0,lVar36);
      uStack_35._0_4_ = p2->x;
      uStack_35._4_4_ = p2->y;
      fStack_34 = p2->z;
      lVar36 = FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_35);
      if ((lVar36 != 0) &&
         (lVar38 = FUN_?(lVar36,(pOVar33->klass->_0).element_class), lVar38 == 0)) {
        uVar31 = FUN_?();
        FUN_?(uVar31,0);
        pcVar37 = (code *)swi(3);
        bVar30 = (*pcVar37)();
        return bVar30;
      }
      FUN_?(pOVar33,1,lVar36);
      uStack_35._0_4_ = p3->x;
      uStack_35._4_4_ = p3->y;
      fStack_34 = p3->z;
      lVar36 = FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_35);
      if ((lVar36 != 0) &&
         (lVar36 = FUN_?(lVar36,(pOVar33->klass->_0).element_class), lVar36 == 0)) {
        uVar31 = FUN_?();
        FUN_?(uVar31,0);
        pcVar37 = (code *)swi(3);
        bVar30 = (*pcVar37)();
        return bVar30;
      }
      FUN_?(pOVar33,2);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                (StringLiteral_Points___0____1____2_,pOVar33,(MethodInfo *)0x0);
      pOVar33 = (Object__Array *)FUN_?(TypeInfo__System__Object,3);
      uStack_2 = *puVar1;
      uStack_3 = puVar1[1];
      uStack_4 = puVar1[2];
      uStack_5 = puVar1[3];
      uStack_28 = puVar1[0x18];
      uStack_6 = puVar1[4];
      uStack_7 = puVar1[5];
      uStack_8 = puVar1[6];
      uStack_9 = puVar1[7];
      uStack_10 = puVar1[8];
      uStack_11 = puVar1[9];
      uStack_12 = puVar1[10];
      uStack_13 = puVar1[0xb];
      uStack_14 = puVar1[0xc];
      uStack_15 = puVar1[0xd];
      uStack_18 = puVar1[0xe];
      uStack_19 = puVar1[0xf];
      uStack_16 = puVar1[0x10];
      uStack_17 = puVar1[0x11];
      uStack_20 = puVar1[0x12];
      uStack_21 = puVar1[0x13];
      uStack_22 = puVar1[0x14];
      fStack_26 = *(float *)(puVar1 + 0x16);
      fStack_34 = *(float *)((longlong)puVar1 + 0xb4);
      uStack_23 = puVar1[0x17];
      uStack_24 = (undefined4)puVar1[0x15];
      fStack_25 = (float)((ulonglong)puVar1[0x15] >> 0x20);
      uStack_35 = CONCAT44(fStack_26,fStack_25);
      fStack_27 = fStack_34;
      lVar36 = FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_35);
      if (pOVar33 == (Object__Array *)0x0) goto code_?;
      if ((lVar36 != 0) &&
         (lVar38 = FUN_?(lVar36,(pOVar33->klass->_0).element_class), lVar38 == 0)) {
        uVar31 = FUN_?();
        FUN_?(uVar31,0);
        pcVar37 = (code *)swi(3);
        bVar30 = (*pcVar37)();
        return bVar30;
      }
      FUN_?(pOVar33,0,lVar36);
      uStack_2 = *puVar1;
      uStack_3 = puVar1[1];
      uStack_28 = puVar1[0x18];
      uStack_4 = puVar1[2];
      uStack_5 = puVar1[3];
      uStack_6 = puVar1[4];
      uStack_7 = puVar1[5];
      uStack_8 = puVar1[6];
      uStack_9 = puVar1[7];
      uStack_10 = puVar1[8];
      uStack_11 = puVar1[9];
      uStack_12 = puVar1[10];
      uStack_13 = puVar1[0xb];
      uStack_14 = puVar1[0xc];
      uStack_15 = puVar1[0xd];
      uStack_18 = puVar1[0xe];
      uStack_19 = puVar1[0xf];
      uStack_16 = puVar1[0x10];
      uStack_17 = puVar1[0x11];
      uStack_20 = puVar1[0x12];
      uStack_21 = puVar1[0x13];
      uStack_22 = puVar1[0x14];
      fStack_26 = *(float *)(puVar1 + 0x16);
      fStack_27 = *(float *)((longlong)puVar1 + 0xb4);
      uStack_35 = puVar1[0x17];
      uStack_24 = (undefined4)puVar1[0x15];
      fStack_25 = (float)((ulonglong)puVar1[0x15] >> 0x20);
      fStack_34 = (float)(undefined4)uStack_28;
      uStack_23 = uStack_35;
      lVar36 = FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_35);
      if ((lVar36 != 0) &&
         (lVar38 = FUN_?(lVar36,(pOVar33->klass->_0).element_class), lVar38 == 0)) {
        uVar31 = FUN_?();
        FUN_?(uVar31,0);
        pcVar37 = (code *)swi(3);
        bVar30 = (*pcVar37)();
        return bVar30;
      }
      FUN_?(pOVar33,1,lVar36);
      collisionState._0_4_ = distance;
      lVar36 = FUN_?(uRam_?,&collisionState);
      if (lVar36 != 0) {
        lVar36 = FUN_?(lVar36,(pOVar33->klass->_0).element_class);
        if (lVar36 == 0) {
          uVar31 = FUN_?();
          FUN_?(uVar31,0);
          pcVar37 = (code *)swi(3);
          bVar30 = (*pcVar37)();
          return bVar30;
        }
      }
      FUN_?(pOVar33,2);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                (StringLiteral_Origin__Direction__distance__0__,pOVar33,(MethodInfo *)0x0);
    }
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVSweptElipsoidCheck);
    }
    pfVar39 = &(TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance;
    if (*pfVar39 <= currentVoxelHit->distance && currentVoxelHit->distance != *pfVar39) {
      uStack_2 = *puVar1;
      uStack_3 = puVar1[1];
      uStack_28 = puVar1[0x18];
      uStack_4 = puVar1[2];
      uStack_5 = puVar1[3];
      uStack_6 = puVar1[4];
      uStack_7 = puVar1[5];
      uStack_8 = puVar1[6];
      uStack_9 = puVar1[7];
      uStack_10 = puVar1[8];
      uStack_11 = puVar1[9];
      uStack_12 = puVar1[10];
      uStack_13 = puVar1[0xb];
      uStack_14 = puVar1[0xc];
      uStack_15 = puVar1[0xd];
      uStack_18 = puVar1[0xe];
      uStack_19 = puVar1[0xf];
      uStack_16 = puVar1[0x10];
      uStack_17 = puVar1[0x11];
      uStack_20 = puVar1[0x12];
      uStack_21 = puVar1[0x13];
      uStack_22 = puVar1[0x14];
      uStack_24 = *(undefined4 *)(puVar1 + 0x15);
      fStack_25 = *(float *)((longlong)puVar1 + 0xac);
      fStack_26 = *(float *)(puVar1 + 0x16);
      fStack_27 = *(float *)((longlong)puVar1 + 0xb4);
      uStack_23 = puVar1[0x17];
      if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVSweptElipsoidCheck);
      }
      fVar29 = _UNK_?;
      pMVar40 = TypeInfo__MVSweptElipsoidCheck->static_fields;
      uStack_35._0_4_ = (pMVar40->vhCached).point.x;
      uStack_35._4_4_ = (pMVar40->vhCached).point.y;
      fVar41 = fStack_27 - (pMVar40->vhCached).point.z;
      if (_UNK_? <=
          (fStack_26 - (float)uStack_35._4_4_) * (fStack_26 - (float)uStack_35._4_4_) +
          (fStack_25 - (float)(undefined4)uStack_35) * (fStack_25 - (float)(undefined4)uStack_35)
          + fVar41 * fVar41) {
        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVSweptElipsoidCheck);
        }
        currentVoxelHit->distance =
             (TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance;
        pMVar40 = TypeInfo__MVSweptElipsoidCheck->static_fields;
        fVar41 = (pMVar40->vhCached).point.z;
        uVar42 = (pMVar40->vhCached).point.x;
        uVar43 = (pMVar40->vhCached).point.y;
        fVar44 = (pMVar40->elipsoidSpaceToWorld).m02;
        fVar45 = (pMVar40->elipsoidSpaceToWorld).m00;
        fVar46 = (pMVar40->elipsoidSpaceToWorld).m01;
        fVar47 = (pMVar40->elipsoidSpaceToWorld).m11;
        fVar48 = (pMVar40->elipsoidSpaceToWorld).m21;
        fVar49 = (pMVar40->elipsoidSpaceToWorld).m10;
        fVar50 = (pMVar40->elipsoidSpaceToWorld).m12;
        fVar51 = (pMVar40->elipsoidSpaceToWorld).m20;
        fVar52 = (pMVar40->elipsoidSpaceToWorld).m03;
        fVar53 = (pMVar40->elipsoidSpaceToWorld).m22;
        fVar54 = (pMVar40->elipsoidSpaceToWorld).m13;
        fVar55 = (pMVar40->elipsoidSpaceToWorld).m23;
        fVar56 = fVar29 / ((float)uVar43 * (pMVar40->elipsoidSpaceToWorld).m31 +
                           (float)uVar42 * (pMVar40->elipsoidSpaceToWorld).m30 +
                           fVar41 * (pMVar40->elipsoidSpaceToWorld).m32 +
                          (pMVar40->elipsoidSpaceToWorld).m33);
        uVar57 = p1->x;
        uVar58 = p1->y;
        currentVoxelHit->face = face;
        (currentVoxelHit->point).x =
             ((float)uVar43 * fVar46 + (float)uVar42 * fVar45 + fVar41 * fVar44 + fVar52) * fVar56;
        (currentVoxelHit->point).y =
             ((float)uVar43 * fVar47 + (float)uVar42 * fVar49 + fVar41 * fVar50 + fVar54) * fVar56;
        (currentVoxelHit->point).z =
             ((float)uVar43 * fVar48 + (float)uVar42 * fVar51 + fVar41 * fVar53 + fVar55) * fVar56;
        fVar41 = p1->z;
        pMVar40 = TypeInfo__MVSweptElipsoidCheck->static_fields;
        fVar44 = fVar29 / ((float)uVar58 * (pMVar40->elipsoidSpaceToWorld).m31 +
                           (float)uVar57 * (pMVar40->elipsoidSpaceToWorld).m30 +
                           fVar41 * (pMVar40->elipsoidSpaceToWorld).m32 +
                          (pMVar40->elipsoidSpaceToWorld).m33);
        fVar50 = ((float)uVar58 * (pMVar40->elipsoidSpaceToWorld).m01 +
                  (float)uVar57 * (pMVar40->elipsoidSpaceToWorld).m00 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m02 + (pMVar40->elipsoidSpaceToWorld).m03
                 ) * fVar44;
        fVar49 = ((float)uVar58 * (pMVar40->elipsoidSpaceToWorld).m11 +
                  (float)uVar57 * (pMVar40->elipsoidSpaceToWorld).m10 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m12 + (pMVar40->elipsoidSpaceToWorld).m13
                 ) * fVar44;
        fVar44 = ((float)uVar58 * (pMVar40->elipsoidSpaceToWorld).m21 +
                  (float)uVar57 * (pMVar40->elipsoidSpaceToWorld).m20 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m22 + (pMVar40->elipsoidSpaceToWorld).m23
                 ) * fVar44;
        fVar41 = p2->z;
        uVar59 = p2->x;
        uVar60 = p2->y;
        fVar45 = fVar29 / ((float)uVar60 * (pMVar40->elipsoidSpaceToWorld).m31 +
                           (float)uVar59 * (pMVar40->elipsoidSpaceToWorld).m30 +
                           fVar41 * (pMVar40->elipsoidSpaceToWorld).m32 +
                          (pMVar40->elipsoidSpaceToWorld).m33);
        fVar48 = ((float)uVar60 * (pMVar40->elipsoidSpaceToWorld).m01 +
                  (float)uVar59 * (pMVar40->elipsoidSpaceToWorld).m00 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m02 + (pMVar40->elipsoidSpaceToWorld).m03
                 ) * fVar45;
        fVar47 = ((float)uVar60 * (pMVar40->elipsoidSpaceToWorld).m11 +
                  (float)uVar59 * (pMVar40->elipsoidSpaceToWorld).m10 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m12 + (pMVar40->elipsoidSpaceToWorld).m13
                 ) * fVar45;
        fVar45 = ((float)uVar60 * (pMVar40->elipsoidSpaceToWorld).m21 +
                  (float)uVar59 * (pMVar40->elipsoidSpaceToWorld).m20 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m22 + (pMVar40->elipsoidSpaceToWorld).m23
                 ) * fVar45;
        fVar41 = p3->z;
        uVar61 = p3->x;
        uVar62 = p3->y;
        fVar29 = fVar29 / ((float)uVar62 * (pMVar40->elipsoidSpaceToWorld).m31 +
                           (float)uVar61 * (pMVar40->elipsoidSpaceToWorld).m30 +
                           fVar41 * (pMVar40->elipsoidSpaceToWorld).m32 +
                          (pMVar40->elipsoidSpaceToWorld).m33);
        fVar46 = ((float)uVar62 * (pMVar40->elipsoidSpaceToWorld).m01 +
                  (float)uVar61 * (pMVar40->elipsoidSpaceToWorld).m00 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m02 + (pMVar40->elipsoidSpaceToWorld).m03
                 ) * fVar29;
        fVar51 = ((float)uVar62 * (pMVar40->elipsoidSpaceToWorld).m11 +
                  (float)uVar61 * (pMVar40->elipsoidSpaceToWorld).m10 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m12 + (pMVar40->elipsoidSpaceToWorld).m13
                 ) * fVar29;
        fVar29 = ((float)uVar62 * (pMVar40->elipsoidSpaceToWorld).m21 +
                  (float)uVar61 * (pMVar40->elipsoidSpaceToWorld).m20 +
                  fVar41 * (pMVar40->elipsoidSpaceToWorld).m22 + (pMVar40->elipsoidSpaceToWorld).m23
                 ) * fVar29;
        fVar41 = (fVar29 - fVar44) * (fVar47 - fVar49) - (fVar51 - fVar49) * (fVar45 - fVar44);
        fVar29 = (fVar46 - fVar50) * (fVar45 - fVar44) - (fVar29 - fVar44) * (fVar48 - fVar50);
        fVar44 = (fVar51 - fVar49) * (fVar48 - fVar50) - (fVar46 - fVar50) * (fVar47 - fVar49);
        uStack_35 = CONCAT44(fVar29,fVar41);
        fStack_34 = fVar44;
        fVar45 = (float)FUN_?(&uStack_35);
        if (_UNK_? < fVar45) {
          fVar41 = fVar41 / fVar45;
          fVar29 = fVar29 / fVar45;
          fVar44 = fVar44 / fVar45;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar63 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar41 = (pVVar63->zeroVector).x;
          fVar29 = (pVVar63->zeroVector).y;
          fVar44 = (pVVar63->zeroVector).z;
        }
        (currentVoxelHit->normal).x = fVar41;
        (currentVoxelHit->normal).y = fVar29;
        (currentVoxelHit->normal).z = fVar44;
        currentVoxelHit->cube = cube;
        func_?(&currentVoxelHit->cube);
        iVar64 = pos->z;
        iVar65 = pos->y;
        (currentVoxelHit->cubePos).x = pos->x;
        (currentVoxelHit->cubePos).y = iVar65;
        (currentVoxelHit->cubePos).z = iVar64;
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean IsWithinBounds(IntVector, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_IsWithinBounds
               (IntVector *pos,CollisionState *collisionState,MethodInfo *method)

{
  if (((((collisionState->minBounds).x <= pos->x) && ((collisionState->minBounds).y <= pos->y)) &&
      ((collisionState->minBounds).z <= pos->z)) &&
     ((pos->x <= (collisionState->maxBounds).x && (pos->y <= (collisionState->maxBounds).y)))) {
    return pos->z <= (collisionState->maxBounds).z;
  }
  return 0;
}


/* Boolean LayerScan(VoxelHit ByRef, Vector3, Single, BoxCollider, Single, ICubeModelCollider,
   PhysicsCollisionData, Ray, Ray[]) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan
               (VoxelHit *vh,Vector3 *radius,float maxRadius,BoxCollider *chunk,float distance,
               ICubeModelCollider *wo,PhysicsCollisionData *collisionData,Ray *ray,
               Ray__Array *boundRays,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_scanRect_cant_be_zero);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?(&CStack_1,0,200);
  CStack_1.firstHitScanAxis = -1;
  CStack_1.firstHitDetected = 0;
  CStack_1.minBounds.x = 0;
  CStack_1.minBounds.y = 0;
  CStack_1.minBounds.z = 0;
  CStack_1.maxBounds.x = 0;
  CStack_1.maxBounds.y = 0;
  CStack_1.maxBounds.z = 0;
  if (chunk != (BoxCollider *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    VStack_2.z = 0.0;
    pvVar3 = (chunk->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)chunk,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    VStack_7.z = 0.0;
    pvVar3 = (chunk->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)chunk,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3,&VStack_7);
    BStack_8.m_Center.x = VStack_2.x;
    BStack_8.m_Center.y = VStack_2.y;
    fVar9 = VStack_7.y * _UNK_?;
    BStack_8.m_Extents.x = VStack_7.x * _UNK_?;
    BStack_8.m_Center.z = VStack_2.z;
    fVar10 = VStack_7.z * _UNK_?;
    if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    BStack_8.m_Extents.z = fVar10;
    BStack_8.m_Extents.y = fVar9;
    SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
              (&CStack_1.minBounds,&CStack_1.maxBounds,&BStack_8,(MethodInfo *)0x0);
    if ((collisionData != (PhysicsCollisionData *)0x0) &&
       (pTVar11 = (collisionData->fields).transform, pTVar11 != (Transform *)0x0)) {
      VStack_12.x = (collisionData->fields).point.x;
      VStack_12.y = (collisionData->fields).point.y;
      VStack_12.z = (collisionData->fields).point.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_2.x = 0.0;
      VStack_2.y = 0.0;
      VStack_2.z = 0.0;
      pvVar3 = (pTVar11->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&VStack_12,&VStack_2);
      pTVar11 = (collisionData->fields).transform;
      CStack_1.localHitPoint.x = VStack_2.x;
      CStack_1.localHitPoint.y = VStack_2.y;
      CStack_1.localHitPoint.z = VStack_2.z;
      if (pTVar11 != (Transform *)0x0) {
        VStack_13.x = (collisionData->fields).normal.x;
        VStack_13.y = (collisionData->fields).normal.y;
        VStack_13.z = (collisionData->fields).normal.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_7.x = 0.0;
        VStack_7.y = 0.0;
        VStack_7.z = 0.0;
        pvVar3 = (pTVar11->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3,&VStack_13,&VStack_7);
        pTVar11 = (collisionData->fields).transform;
        CStack_1.localNormal.x = VStack_7.x;
        CStack_1.localNormal.y = VStack_7.y;
        CStack_1.localNormal.z = VStack_7.z;
        if (pTVar11 != (Transform *)0x0) {
          VStack_12.x = (ray->m_Direction).x;
          VStack_12.y = (ray->m_Direction).y;
          VStack_12.z = (ray->m_Direction).z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_2.x = 0.0;
          VStack_2.y = 0.0;
          VStack_2.z = 0.0;
          pvVar3 = (pTVar11->fields)._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            bVar5 = (*pcVar4)();
            return bVar5;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            bVar5 = (*pcVar4)();
            return bVar5;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3,&VStack_12,&VStack_2);
          CStack_1.localDirection.z = VStack_2.z;
          CStack_1.localDirection.x = VStack_2.x;
          CStack_1.localDirection.y = VStack_2.y;
          if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__MVSweptElipsoidCheck);
          }
          pMVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields;
          uVar6._0_4_ = (pMVar14->worldToElipsoidSpace).m00;
          uVar6._4_4_ = (pMVar14->worldToElipsoidSpace).m10;
          uVar15._0_4_ = (pMVar14->worldToElipsoidSpace).m20;
          uVar15._4_4_ = (pMVar14->worldToElipsoidSpace).m30;
          uVar16._0_4_ = (pMVar14->worldToElipsoidSpace).m01;
          uVar16._4_4_ = (pMVar14->worldToElipsoidSpace).m11;
          uVar17._0_4_ = (pMVar14->worldToElipsoidSpace).m21;
          uVar17._4_4_ = (pMVar14->worldToElipsoidSpace).m31;
          uVar18._0_4_ = (pMVar14->worldToElipsoidSpace).m02;
          uVar18._4_4_ = (pMVar14->worldToElipsoidSpace).m12;
          uVar19._0_4_ = (pMVar14->worldToElipsoidSpace).m22;
          uVar19._4_4_ = (pMVar14->worldToElipsoidSpace).m32;
          uVar20._0_4_ = (pMVar14->worldToElipsoidSpace).m03;
          uVar20._4_4_ = (pMVar14->worldToElipsoidSpace).m13;
          uVar21._0_4_ = (pMVar14->worldToElipsoidSpace).m23;
          uVar21._4_4_ = (pMVar14->worldToElipsoidSpace).m33;
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)chunk,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            MStack_22.m00 = 0.0;
            MStack_22.m10 = 0.0;
            MStack_22.m20 = 0.0;
            MStack_22.m30 = 0.0;
            MStack_22.m01 = 0.0;
            MStack_22.m11 = 0.0;
            MStack_22.m21 = 0.0;
            MStack_22.m31 = 0.0;
            MStack_22.m02 = 0.0;
            MStack_22.m12 = 0.0;
            MStack_22.m22 = 0.0;
            MStack_22.m32 = 0.0;
            MStack_22.m03 = 0.0;
            MStack_22.m13 = 0.0;
            MStack_22.m23 = 0.0;
            MStack_22.m33 = 0.0;
            pvVar3 = (pTVar11->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              bVar5 = (*pcVar4)();
              return bVar5;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar4 = (code *)swi(3);
              bVar5 = (*pcVar4)();
              return bVar5;
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar3,&MStack_22);
            MStack_23.m00 = MStack_22.m00;
            MStack_23.m10 = MStack_22.m10;
            MStack_23.m20 = MStack_22.m20;
            MStack_23.m30 = MStack_22.m30;
            MStack_23.m01 = MStack_22.m01;
            MStack_23.m11 = MStack_22.m11;
            MStack_23.m21 = MStack_22.m21;
            MStack_23.m31 = MStack_22.m31;
            MStack_23.m02 = MStack_22.m02;
            MStack_23.m12 = MStack_22.m12;
            MStack_23.m22 = MStack_22.m22;
            MStack_23.m32 = MStack_22.m32;
            MStack_23.m03 = MStack_22.m03;
            MStack_23.m13 = MStack_22.m13;
            MStack_23.m23 = MStack_22.m23;
            MStack_23.m33 = MStack_22.m33;
            MStack_22._0_8_ = uVar6;
            MStack_22._8_8_ = uVar15;
            MStack_22._16_8_ = uVar16;
            MStack_22._24_8_ = uVar17;
            MStack_22._32_8_ = uVar18;
            MStack_22._40_8_ = uVar19;
            MStack_22._48_8_ = uVar20;
            MStack_22._56_8_ = uVar21;
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                                (aMStack_25,&MStack_22,&MStack_23,(MethodInfo *)0x0);
            CStack_1.localToElipsoidSpace.m00 = pMVar24->m00;
            CStack_1.localToElipsoidSpace.m10 = pMVar24->m10;
            CStack_1.localToElipsoidSpace.m20 = pMVar24->m20;
            CStack_1.localToElipsoidSpace.m30 = pMVar24->m30;
            CStack_1.localToElipsoidSpace.m01 = pMVar24->m01;
            CStack_1.localToElipsoidSpace.m11 = pMVar24->m11;
            CStack_1.localToElipsoidSpace.m21 = pMVar24->m21;
            CStack_1.localToElipsoidSpace.m31 = pMVar24->m31;
            CStack_1.localToElipsoidSpace.m02 = pMVar24->m02;
            CStack_1.localToElipsoidSpace.m12 = pMVar24->m12;
            CStack_1.localToElipsoidSpace.m22 = pMVar24->m22;
            CStack_1.localToElipsoidSpace.m32 = pMVar24->m32;
            CStack_1.localToElipsoidSpace.m03 = pMVar24->m03;
            CStack_1.localToElipsoidSpace.m13 = pMVar24->m13;
            CStack_1.localToElipsoidSpace.m23 = pMVar24->m23;
            CStack_1.localToElipsoidSpace.m33 = pMVar24->m33;
            CStack_1.cmb = wo;
            if (iRam_? != 0) {
              uVar26 = (uint)((ulonglong)&CStack_1.cmb >> 0xc);
              uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
              do {
                uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                LOCK();
                bVar30 = uVar28 == *puVar29;
                if (bVar30) {
                  *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                }
                UNLOCK();
              } while (!bVar30);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_12.x = (pVVar31->oneVector).x;
            VStack_12.y = (pVVar31->oneVector).y;
            fVar9 = (pVVar31->oneVector).z;
            VStack_13._0_8_ = VStack_12._0_8_;
            VStack_13.z = fVar9;
            fVar32 = (float)FUN_?(&VStack_13);
            fVar10 = _UNK_?;
            if (_UNK_? < fVar32) {
              VStack_12.x = VStack_12.x / fVar32;
              VStack_7.z = fVar9 / fVar32;
              VStack_12.y = VStack_12.y / fVar32;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_12.x = (pVVar31->zeroVector).x;
              VStack_12.y = (pVVar31->zeroVector).y;
              VStack_7.z = (pVVar31->zeroVector).z;
            }
            fVar9 = VStack_12.x * maxRadius;
            VStack_7.z = VStack_7.z * maxRadius;
            VStack_7.y = VStack_12.y * maxRadius;
            VStack_7.x = fVar9;
            if (CStack_1.cmb != (ICubeModelCollider *)0x0) {
              pfVar33 = (float *)FUN_?(&BStack_8,5,TypeInfo__ICubeModelCollider);
              VStack_7.x = fVar9 / *pfVar33;
              if (CStack_1.cmb != (ICubeModelCollider *)0x0) {
                lVar34 = FUN_?(&BStack_8,5,TypeInfo__ICubeModelCollider);
                VStack_7.y = VStack_7.y / *(float *)(lVar34 + 4);
                if (CStack_1.cmb != (ICubeModelCollider *)0x0) {
                  lVar34 = FUN_?(&BStack_8,5,TypeInfo__ICubeModelCollider);
                  VStack_7.z = VStack_7.z / *(float *)(lVar34 + 8);
                  CStack_1.scaledMaxRadius = (float)FUN_?(&VStack_7);
                  CStack_1.origin.x = (ray->m_Origin).x;
                  CStack_1.origin.y = (ray->m_Origin).y;
                  CStack_1.origin.z = (ray->m_Origin).z;
                  CStack_1.direction.x = (ray->m_Direction).x;
                  CStack_1.direction.y = (ray->m_Direction).y;
                  fVar9 = 0.0;
                  CStack_1.direction.z = (ray->m_Direction).z;
                  if ((collisionData->fields).isInsideCollider == 0) {
                    fVar35 = (collisionData->fields).distance - fVar10;
                    uVar36 = (ray->m_Origin).x;
                    uVar37 = (ray->m_Origin).y;
                    fVar32 = CStack_1.direction.x * fVar35 + (float)uVar36;
                    fVar9 = CStack_1.direction.y * fVar35 + (float)uVar37;
                    CStack_1.origin.z = (ray->m_Direction).z * fVar35 + (ray->m_Origin).z;
                    BStack_8.m_Center.x = (ray->m_Origin).x;
                    BStack_8.m_Center.y = (ray->m_Origin).y;
                    CStack_1.origin.y = fVar9;
                    CStack_1.origin.x = fVar32;
                    VStack_7.z = (ray->m_Origin).z - CStack_1.origin.z;
                    VStack_7.y = BStack_8.m_Center.y - fVar9;
                    VStack_7.x = BStack_8.m_Center.x - fVar32;
                    fVar9 = (float)FUN_?(&VStack_7);
                    distance = distance - fVar9;
                  }
                  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pMVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields;
                  CStack_1.elipsoidSpaceOrigin.x =
                       _UNK_? /
                       (CStack_1.origin.y * (pMVar14->worldToElipsoidSpace).m31 +
                        CStack_1.origin.x * (pMVar14->worldToElipsoidSpace).m30 +
                        CStack_1.origin.z * (pMVar14->worldToElipsoidSpace).m32 +
                       (pMVar14->worldToElipsoidSpace).m33);
                  CStack_1.elipsoidSpaceOrigin.y =
                       (CStack_1.origin.y * (pMVar14->worldToElipsoidSpace).m11 +
                        CStack_1.origin.x * (pMVar14->worldToElipsoidSpace).m10 +
                        CStack_1.origin.z * (pMVar14->worldToElipsoidSpace).m12 +
                       (pMVar14->worldToElipsoidSpace).m13) * CStack_1.elipsoidSpaceOrigin.x;
                  CStack_1.elipsoidSpaceOrigin.z =
                       (CStack_1.origin.y * (pMVar14->worldToElipsoidSpace).m21 +
                        CStack_1.origin.x * (pMVar14->worldToElipsoidSpace).m20 +
                        CStack_1.origin.z * (pMVar14->worldToElipsoidSpace).m22 +
                       (pMVar14->worldToElipsoidSpace).m23) * CStack_1.elipsoidSpaceOrigin.x;
                  CStack_1.elipsoidSpaceOrigin.x =
                       (CStack_1.origin.y * (pMVar14->worldToElipsoidSpace).m01 +
                        CStack_1.origin.x * (pMVar14->worldToElipsoidSpace).m00 +
                        CStack_1.origin.z * (pMVar14->worldToElipsoidSpace).m02 +
                       (pMVar14->worldToElipsoidSpace).m03) * CStack_1.elipsoidSpaceOrigin.x;
                  pMVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields;
                  fVar38 = CStack_1.direction.y * (pMVar14->worldToElipsoidSpace).m01 +
                           CStack_1.direction.x * (pMVar14->worldToElipsoidSpace).m00 +
                           CStack_1.direction.z * (pMVar14->worldToElipsoidSpace).m02;
                  fVar35 = CStack_1.direction.x * (pMVar14->worldToElipsoidSpace).m20 +
                           CStack_1.direction.y * (pMVar14->worldToElipsoidSpace).m21 +
                           CStack_1.direction.z * (pMVar14->worldToElipsoidSpace).m22;
                  fVar39 = CStack_1.direction.x * (pMVar14->worldToElipsoidSpace).m10 +
                           CStack_1.direction.y * (pMVar14->worldToElipsoidSpace).m11 +
                           CStack_1.direction.z * (pMVar14->worldToElipsoidSpace).m12;
                  VStack_13.y = fVar39;
                  VStack_13.x = fVar38;
                  VStack_13.z = fVar35;
                  fVar32 = (float)FUN_?(&VStack_13);
                  if (fVar10 < fVar32) {
                    CStack_1.elipsoidSpaceDirection.z = fVar35 / fVar32;
                    VStack_12.y = fVar39 / fVar32;
                    VStack_12.x = fVar38 / fVar32;
                  }
                  else {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
                    VStack_12.x = (pVVar31->zeroVector).x;
                    VStack_12.y = (pVVar31->zeroVector).y;
                    CStack_1.elipsoidSpaceDirection.z = (pVVar31->zeroVector).z;
                  }
                  CStack_1.elipsoidSpaceDirection.x = VStack_12.x;
                  CStack_1.elipsoidSpaceDirection.y = VStack_12.y;
                  fVar32 = CStack_1.direction.x * distance;
                  fVar35 = CStack_1.direction.y * distance;
                  fVar10 = CStack_1.direction.z * distance;
                  pMVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields;
                  VStack_7.z = fVar35 * (pMVar14->worldToElipsoidSpace).m21 +
                                 fVar32 * (pMVar14->worldToElipsoidSpace).m20 +
                                 fVar10 * (pMVar14->worldToElipsoidSpace).m22;
                  VStack_7.y = fVar35 * (pMVar14->worldToElipsoidSpace).m11 +
                                 fVar32 * (pMVar14->worldToElipsoidSpace).m10 +
                                 fVar10 * (pMVar14->worldToElipsoidSpace).m12;
                  VStack_7.x = fVar35 * (pMVar14->worldToElipsoidSpace).m01 +
                                 fVar32 * (pMVar14->worldToElipsoidSpace).m00 +
                                 fVar10 * (pMVar14->worldToElipsoidSpace).m02;
                  CStack_1.elipsoidSpaceDistance = (float)FUN_?(&VStack_7);
                  pTVar11 = (collisionData->fields).transform;
                  if (pTVar11 != (Transform *)0x0) {
                    VStack_13.x = CStack_1.origin.x;
                    VStack_13.y = CStack_1.origin.y;
                    VStack_13.z = CStack_1.origin.z;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    VStack_2.x = 0.0;
                    VStack_2.y = 0.0;
                    VStack_2.z = 0.0;
                    pvVar3 = (pTVar11->fields)._._.m_CachedPtr;
                    if (pvVar3 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0)
                      ;
                      pcVar4 = (code *)swi(3);
                      bVar5 = (*pcVar4)();
                      return bVar5;
                    }
                    pcVar4 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                      uVar6 = func_?(&UNK_?);
                      FUN_?(uVar6,0);
                      pcVar4 = (code *)swi(3);
                      bVar5 = (*pcVar4)();
                      return bVar5;
                    }
                    pcRam_? = pcVar4;
                    (*pcRam_?)(pvVar3);
                    uVar26 = _UNK_?;
                    CStack_1.localOrigin.x = VStack_2.x;
                    CStack_1.localOrigin.y = VStack_2.y;
                    CStack_1.localOrigin.z = VStack_2.z;
                    if (((float)((uint)CStack_1.localDirection.x & _UNK_?) <
                         (float)((uint)CStack_1.localDirection.y & _UNK_?)) ||
                       ((float)((uint)CStack_1.localDirection.x & _UNK_?) <
                        (float)((uint)CStack_1.localDirection.z & _UNK_?))) {
                      if (((float)((uint)CStack_1.localDirection.y & _UNK_?) <
                           (float)((uint)CStack_1.localDirection.x & _UNK_?)) ||
                         ((float)((uint)CStack_1.localDirection.y & _UNK_?) <
                          (float)((uint)CStack_1.localDirection.z & _UNK_?))) {
                        fVar32 = 0.0;
                        fVar10 = 0.0;
                        if (0.0 <= CStack_1.localDirection.z) {
                          fVar35 = (float)func_?();
                        }
                        else {
                          fVar35 = (float)func_?();
                        }
                      }
                      else {
                        fVar10 = 0.0;
                        fVar35 = 0.0;
                        if (0.0 <= CStack_1.localDirection.y) {
                          fVar32 = (float)func_?();
                        }
                        else {
                          fVar32 = (float)func_?();
                        }
                      }
                    }
                    else {
                      fVar32 = 0.0;
                      fVar35 = 0.0;
                      if (0.0 <= CStack_1.localDirection.x) {
                        fVar10 = (float)func_?();
                      }
                      else {
                        fVar10 = (float)func_?();
                      }
                    }
                    fVar10 = fVar10 * _UNK_?;
                    fVar32 = fVar32 * _UNK_?;
                    fVar35 = fVar35 * _UNK_?;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
                    BStack_8.m_Center.x = (pVVar31->zeroVector).x;
                    BStack_8.m_Center.y = (pVVar31->zeroVector).y;
                    fVar38 = fVar35 - (pVVar31->zeroVector).z;
                    if ((fVar32 - BStack_8.m_Center.y) * (fVar32 - BStack_8.m_Center.y) +
                        (fVar10 - BStack_8.m_Center.x) * (fVar10 - BStack_8.m_Center.x) +
                        fVar38 * fVar38 < _UNK_?) {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_scanRect_cant_be_zero,(MethodInfo *)0x0);
                    }
                    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Debug);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_No_scan_axis_found_);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    CStack_1.scanAxis = 0;
                    do {
                      fVar38 = fVar10;
                      if (((CStack_1.scanAxis != 0) && (fVar38 = fVar32, CStack_1.scanAxis != 1)
                          ) && (fVar38 = fVar35, CStack_1.scanAxis != 2)) {
                        uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                        this = (IndexOutOfRangeException *)func_?(uVar6);
                        pSVar40 = (String *)
                                  func_?(&StringLiteral_Invalid_Vector3_index_);
                        mscorlib.dll::System::IndexOutOfRangeException::
                        IndexOutOfRangeException__ctor_1(this,pSVar40,(MethodInfo *)0x0);
                        uVar6 = func_?(&
                                                  MethodInfo__UnityEngine__Vector3__get_Item_int_);
                        FUN_?(this,uVar6);
                        pcVar4 = (code *)swi(3);
                        bVar5 = (*pcVar4)();
                        return bVar5;
                      }
                      if (_UNK_? < (float)((uint)fVar38 & uVar26))
                      goto code_?;
                      CStack_1.scanAxis = CStack_1.scanAxis + 1;
                    } while (CStack_1.scanAxis < 3);
                    VStack_12.y = fVar32;
                    VStack_12.x = fVar10;
                    VStack_12.z = fVar35;
                    pSVar40 = (String *)FUN_?(&VStack_12,0);
                    pSVar40 = mscorlib.dll::System::String::String_Concat_4
                                        (StringLiteral_No_scan_axis_found_,pSVar40,(MethodInfo *)0x0
                                        );
                    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)pSVar40,(MethodInfo *)0x0);
                    CStack_1.scanAxis = -1;
code_?:
                    pTVar11 = (collisionData->fields).transform;
                    if (pTVar11 != (Transform *)0x0) {
                      BStack_8.m_Center.y = fVar32;
                      BStack_8.m_Center.x = fVar10;
                      BStack_8.m_Center.z = fVar35;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      VStack_12.x = 0.0;
                      VStack_12.y = 0.0;
                      VStack_12.z = 0.0;
                      pvVar3 = (pTVar11->fields)._._.m_CachedPtr;
                      if (pvVar3 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar11,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        bVar5 = (*pcVar4)();
                        return bVar5;
                      }
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                      {
                        uVar6 = func_?(&UNK_?);
                        FUN_?(uVar6,0);
                        pcVar4 = (code *)swi(3);
                        bVar5 = (*pcVar4)();
                        return bVar5;
                      }
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pvVar3,&BStack_8,&VStack_12);
                      BStack_8.m_Center.x = (collisionData->fields).point.x;
                      BStack_8.m_Center.y = (collisionData->fields).point.y;
                      BStack_8.m_Center.z = (collisionData->fields).point.z;
                      VStack_13.z = VStack_12.z;
                      VStack_13.x = VStack_12.x;
                      VStack_13.y = VStack_12.y;
                      FUN_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane,
                                    &VStack_13,&BStack_8);
                      pTVar11 = (collisionData->fields).transform;
                      uVar41._0_4_ = (collisionData->fields).point.x;
                      uVar41._4_4_ = (collisionData->fields).point.y;
                      fVar38 = (collisionData->fields).point.z;
                      if (pTVar11 != (Transform *)0x0) {
                        BStack_8.m_Center.y = fVar32;
                        BStack_8.m_Center.x = fVar10;
                        BStack_8.m_Center.z = fVar35;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        VStack_12.x = 0.0;
                        VStack_12.y = 0.0;
                        VStack_12.z = 0.0;
                        pvVar3 = (pTVar11->fields)._._.m_CachedPtr;
                        if (pvVar3 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pTVar11,(MethodInfo *)0x0);
                          pcVar4 = (code *)swi(3);
                          bVar5 = (*pcVar4)();
                          return bVar5;
                        }
                        pcVar4 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)
                           ) {
                          uVar6 = func_?(&UNK_?);
                          FUN_?(uVar6,0);
                          pcVar4 = (code *)swi(3);
                          bVar5 = (*pcVar4)();
                          return bVar5;
                        }
                        pcRam_? = pcVar4;
                        (*pcRam_?)(pvVar3,&BStack_8,&VStack_12);
                        BStack_8.m_Center.z = VStack_12.z;
                        BStack_8.m_Center.x = VStack_12.x;
                        BStack_8.m_Center.y = VStack_12.y;
                        VStack_13._0_8_ = uVar41;
                        VStack_13.z = fVar38;
                        MVSweptElipsoidCheck_GetRaysProjectedOnPlane
                                  (boundRays,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane,
                                   &VStack_13,&BStack_8.m_Center,(MethodInfo *)0x0);
                        if ((collisionData->fields).isInsideCollider != 0) {
                          if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          BStack_8.m_Center.x = (ray->m_Direction).x;
                          BStack_8.m_Center.y = (ray->m_Direction).y;
                          VStack_13.x = (ray->m_Origin).x;
                          VStack_13.y = (ray->m_Origin).y;
                          BStack_8.m_Center.z = (ray->m_Direction).z;
                          VStack_13.z = (ray->m_Origin).z;
                          MVSweptElipsoidCheck_MoveAxisAlignedRectBackward
                                    (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,
                                     &VStack_13,&BStack_8.m_Center,(MethodInfo *)0x0);
                        }
                        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        MVSweptElipsoidCheck_CalculateAxisAlignedRect
                                  (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,
                                   (collisionData->fields).transform,(MethodInfo *)0x0);
                        if ((collisionData->fields).isInsideCollider == 0) {
                          if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          BStack_8.m_Center.x = CStack_1.localDirection.x;
                          BStack_8.m_Center.y = CStack_1.localDirection.y;
                          BStack_8.m_Center.z = CStack_1.localDirection.z;
                          VStack_13.x = CStack_1.localHitPoint.x;
                          VStack_13.y = CStack_1.localHitPoint.y;
                          VStack_13.z = CStack_1.localHitPoint.z;
                          VStack_12.x = CStack_1.localNormal.x;
                          VStack_12.y = CStack_1.localNormal.y;
                          VStack_12.z = CStack_1.localNormal.z;
                          MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
                                    (TypeInfo__MVSweptElipsoidCheck->static_fields->
                                     minMaxCalculateAxisAlignedRect,&VStack_12,&VStack_13,
                                     &BStack_8.m_Center,(MethodInfo *)0x0);
                        }
                        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                          FUN_?(TypeInfo__MVSweptElipsoidCheck);
                        }
                        BStack_8.m_Center.x = radius->x;
                        BStack_8.m_Center.y = radius->y;
                        BStack_8.m_Center.z = radius->z;
                        bVar42 = MVSweptElipsoidCheck_LayerScan_1
                                           (&BStack_8.m_Center,
                                            TypeInfo__MVSweptElipsoidCheck->static_fields->
                                            minMaxCalculateAxisAlignedRect,vh,distance,&CStack_1,
                                            (MethodInfo *)0x0);
                        bVar5 = 0;
                        if (bVar42 != 0) {
                          if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                            FUN_?(TypeInfo__MVSweptElipsoidCheck);
                          }
                          fVar10 = vh->distance;
                          fVar32 = fVar10 * CStack_1.elipsoidSpaceDirection.x;
                          fVar35 = fVar10 * CStack_1.elipsoidSpaceDirection.y;
                          fVar10 = fVar10 * CStack_1.elipsoidSpaceDirection.z;
                          pMVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields;
                          VStack_7.z = fVar35 * (pMVar14->elipsoidSpaceToWorld).m21 +
                                         fVar32 * (pMVar14->elipsoidSpaceToWorld).m20 +
                                         fVar10 * (pMVar14->elipsoidSpaceToWorld).m22;
                          VStack_7.y = fVar35 * (pMVar14->elipsoidSpaceToWorld).m11 +
                                         fVar32 * (pMVar14->elipsoidSpaceToWorld).m10 +
                                         fVar10 * (pMVar14->elipsoidSpaceToWorld).m12;
                          VStack_7.x = fVar35 * (pMVar14->elipsoidSpaceToWorld).m01 +
                                         fVar32 * (pMVar14->elipsoidSpaceToWorld).m00 +
                                         fVar10 * (pMVar14->elipsoidSpaceToWorld).m02;
                          fVar10 = (float)FUN_?(&VStack_7);
                          vh->distance = fVar10 + fVar9;
                          if (wo == (ICubeModelCollider *)0x0) goto code_?;
                          iVar43 = FUN_?(0,TypeInfo__ICubeModelCollider,wo);
                          iVar44 = FUN_?(3,TypeInfo__ICubeModelCollider,wo);
                          vh->isCubeHit = 1;
                          vh->woId = iVar43;
                          vh->collider = (collisionData->fields).collider;
                          if (iRam_? != 0) {
                            uVar26 = (uint)((ulonglong)&vh->collider >> 0xc);
                            uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
                            do {
                              uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                              puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                              LOCK();
                              bVar30 = uVar28 == *puVar29;
                              if (bVar30) {
                                *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar30);
                          }
                          iVar45 = iRam_?;
                          vh->transform = (collisionData->fields).transform;
                          if (iVar45 != 0) {
                            uVar26 = (uint)((ulonglong)&vh->transform >> 0xc);
                            uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
                            do {
                              uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                              puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                              LOCK();
                              bVar30 = uVar28 == *puVar29;
                              if (bVar30) {
                                *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar30);
                          }
                          vh->interactionFlags = iVar44;
                          bVar5 = 1;
                        }
                        return bVar5;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean LayerScan(Vector3, Vector3[], VoxelHit ByRef, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan_1
               (Vector3 *radius,Vector3__Array *alignedRect,VoxelHit *vh,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  method_00 = (MethodInfo *)vh;
  pVStackX_18 = vh;
  fStackX_20 = distance;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0.0;
  iStack_2 = 0;
  vh->distance = INFINITY;
  if (alignedRect == (Vector3__Array *)0x0) goto code_?;
  if ((int)alignedRect->max_length == 0) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  VStack_5.x = alignedRect->vector[0].x;
  VStack_5.y = alignedRect->vector[0].y;
  bVar6 = false;
  fVar7 = alignedRect->vector[0].z;
  iVar8 = 0;
  VStack_9._0_8_ = VStack_5._0_8_;
  VStack_10._0_8_ = VStack_5._0_8_;
  VStack_10.z = fVar7;
  VStack_11._0_8_ = VStack_5._0_8_;
  VStack_11.z = fVar7;
  do {
    bVar12 = true;
    if (iVar8 == collisionState->scanAxis) {
code_?:
      if ((bool)(bVar6 & !bVar12)) {
        if ((uint)alignedRect->max_length < 2) goto DAT_?;
        fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (alignedRect->vector + 1,iVar8,method_00);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                  (&VStack_10,iVar8,fVar13,in_R9);
      }
    }
    else {
      if (bVar6) {
        bVar12 = iVar8 == collisionState->scanAxis;
        goto code_?;
      }
      if ((uint)alignedRect->max_length < 2) goto DAT_?;
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (alignedRect->vector + 1,iVar8,method_00);
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                (&VStack_11,iVar8,fVar13,in_R9);
      bVar6 = true;
    }
    fVar13 = VStack_11.z;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  fVar14 = VStack_11.y;
  fVar15 = VStack_5.x;
  fVar16 = VStack_5.y;
  fVar17 = VStack_11.x - VStack_5.x;
  fVar18 = VStack_11.y - VStack_5.y;
  fVar19 = VStack_11.z - fVar7;
  VStack_5.y = fVar18;
  VStack_5.x = fVar17;
  VStack_5.z = fVar19;
  fVar20 = (float)FUN_?(&VStack_5);
  if (_UNK_? < fVar20) {
    fVar19 = fVar19 / fVar20;
    VStack_5._0_8_ = CONCAT44(fVar18 / fVar20,fVar17 / fVar20);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_5.x = (pVVar21->zeroVector).x;
    VStack_5.y = (pVVar21->zeroVector).y;
    fVar19 = (pVVar21->zeroVector).z;
  }
  fVar18 = VStack_10.z;
  fVar15 = VStack_10.x - fVar15;
  fVar17 = VStack_10.y;
  fVar16 = VStack_10.y - fVar16;
  fVar20 = VStack_10.z - fVar7;
  VStack_22.y = fVar16;
  VStack_22.x = fVar15;
  VStack_22.z = fVar20;
  fVar23 = (float)FUN_?(&VStack_22);
  if (_UNK_? < fVar23) {
    fVar20 = fVar20 / fVar23;
    VStack_22.y = fVar16 / fVar23;
    VStack_22.x = fVar15 / fVar23;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_22.x = (pVVar21->zeroVector).x;
    VStack_22.y = (pVVar21->zeroVector).y;
    fVar20 = (pVVar21->zeroVector).z;
  }
  fVar15 = VStack_22.y;
  VStack_5.z = fVar19;
  pIVar24 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
            CubeMathFunctions_LocalPosToLocalIntVector(&IStackX_10,&VStack_5,(MethodInfo *)0x0);
  uStack_25._0_2_ = pIVar24->x;
  uStack_25._2_2_ = pIVar24->y;
  IStackX_10.x = pIVar24->z;
  VStack_22.y = fVar15;
  VStack_22.z = fVar20;
  pIVar24 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
            CubeMathFunctions_LocalPosToLocalIntVector
                      ((IntVector *)&VStack_5,&VStack_22,(MethodInfo *)0x0);
  uStack_26._0_2_ = pIVar24->x;
  uStack_26._2_2_ = pIVar24->y;
  sStack_27 = pIVar24->z;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
  if (pCVar28 == (CellTraverser *)0x0) goto code_?;
  CStack_29.localOrigin.x = (collisionState->localOrigin).x;
  CStack_29.localOrigin.y = (collisionState->localOrigin).y;
  CStack_29._8_8_ = *(undefined8 *)&(collisionState->localOrigin).z;
  CStack_29._192_8_ = *(undefined8 *)&(collisionState->elipsoidSpaceDirection).z;
  CStack_29.localHitPoint.y = (collisionState->localHitPoint).y;
  CStack_29.localHitPoint.z = (collisionState->localHitPoint).z;
  CStack_29.localNormal.x = (collisionState->localNormal).x;
  CStack_29.localNormal.y = (collisionState->localNormal).y;
  CStack_29._32_8_ = *(undefined8 *)&(collisionState->localNormal).z;
  CStack_29.localDirection.y = (collisionState->localDirection).y;
  CStack_29.localDirection.z = (collisionState->localDirection).z;
  CStack_29.origin.x = (collisionState->origin).x;
  CStack_29.origin.y = (collisionState->origin).y;
  CStack_29._56_8_ = *(undefined8 *)&(collisionState->origin).z;
  CStack_29.direction.y = (collisionState->direction).y;
  CStack_29.direction.z = (collisionState->direction).z;
  CStack_29.cmb = collisionState->cmb;
  CStack_29.localToElipsoidSpace.m00 = (collisionState->localToElipsoidSpace).m00;
  CStack_29.localToElipsoidSpace.m10 = (collisionState->localToElipsoidSpace).m10;
  CStack_29.localToElipsoidSpace.m20 = (collisionState->localToElipsoidSpace).m20;
  CStack_29.localToElipsoidSpace.m30 = (collisionState->localToElipsoidSpace).m30;
  CStack_29.localToElipsoidSpace.m01 = (collisionState->localToElipsoidSpace).m01;
  CStack_29.localToElipsoidSpace.m11 = (collisionState->localToElipsoidSpace).m11;
  CStack_29.localToElipsoidSpace.m21 = (collisionState->localToElipsoidSpace).m21;
  CStack_29.localToElipsoidSpace.m31 = (collisionState->localToElipsoidSpace).m31;
  CStack_29.localToElipsoidSpace.m03 = (collisionState->localToElipsoidSpace).m03;
  CStack_29.localToElipsoidSpace.m13 = (collisionState->localToElipsoidSpace).m13;
  CStack_29.localToElipsoidSpace.m23 = (collisionState->localToElipsoidSpace).m23;
  CStack_29.localToElipsoidSpace.m33 = (collisionState->localToElipsoidSpace).m33;
  CStack_29.localToElipsoidSpace.m02 = (collisionState->localToElipsoidSpace).m02;
  CStack_29.localToElipsoidSpace.m12 = (collisionState->localToElipsoidSpace).m12;
  CStack_29.localToElipsoidSpace.m22 = (collisionState->localToElipsoidSpace).m22;
  CStack_29.localToElipsoidSpace.m32 = (collisionState->localToElipsoidSpace).m32;
  CStack_29.scanAxis = collisionState->scanAxis;
  CStack_29.minBounds.x = (collisionState->minBounds).x;
  CStack_29.minBounds.y = (collisionState->minBounds).y;
  CStack_29._152_8_ = *(undefined8 *)&(collisionState->minBounds).z;
  CStack_29.firstHitScanAxis = collisionState->firstHitScanAxis;
  CStack_29.firstHitDetected = collisionState->firstHitDetected;
  CStack_29._165_3_ = *(undefined3 *)&collisionState->field_0xa5;
  CStack_29.scaledMaxRadius = collisionState->scaledMaxRadius;
  CStack_29.elipsoidSpaceOrigin.x = (collisionState->elipsoidSpaceOrigin).x;
  CStack_29.elipsoidSpaceOrigin.y = (collisionState->elipsoidSpaceOrigin).y;
  CStack_29.elipsoidSpaceOrigin.z = (collisionState->elipsoidSpaceOrigin).z;
  CStack_29.elipsoidSpaceDirection.x = (collisionState->elipsoidSpaceDirection).x;
  CStack_29.elipsoidSpaceDirection.y = (collisionState->elipsoidSpaceDirection).y;
  VStack_9.z = fVar7;
  CellTraverser::CellTraverser_Init(pCVar28,&VStack_9,&CStack_29,(MethodInfo *)0x0);
  VStack_9.y = fVar14;
  VStack_9.x = VStack_11.x;
  VStack_9.z = fVar13;
  pIVar24 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
            CubeMathFunctions_LocalPosToLocalIntVector
                      ((IntVector *)&VStack_5,&VStack_9,(MethodInfo *)0x0);
  VStack_9.z = fVar18;
  uVar30 = pIVar24->z;
  uStack_31._0_2_ = pIVar24->x;
  uStack_31._2_2_ = pIVar24->y;
  VStack_9._0_8_ = CONCAT44(fVar17,VStack_10.x);
  uStack_32 = uVar30;
  pIVar24 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
            CubeMathFunctions_LocalPosToLocalIntVector
                      ((IntVector *)&VStack_5,&VStack_9,(MethodInfo *)0x0);
  iVar8 = collisionState->scanAxis;
  uStack_33 = pIVar24->z;
  iStack_34._0_2_ = pIVar24->x;
  iStack_34._2_2_ = pIVar24->y;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_35 = CONCAT22(uStack_35._2_2_,uStack_31._2_2_);
  uVar36 = (ushort)uStack_31;
  if (((iVar8 != 0) && (uVar36 = uStack_31._2_2_, iVar8 != 1)) && (uVar36 = uVar30, iVar8 != 2))
  {
    uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar38,(MethodInfo *)0x0);
    uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
    FUN_?(pIVar38,uVar37);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  iVar39 = collisionState->scanAxis;
  if (iVar39 == 0) {
    sVar40 = (collisionState->minBounds).x;
  }
  else if (iVar39 == 1) {
    sVar40 = (collisionState->minBounds).y;
  }
  else {
    if (iVar39 != 2) {
      uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar38,(MethodInfo *)0x0);
      uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
      FUN_?(pIVar38,uVar37);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    sVar40 = (collisionState->minBounds).z;
  }
  iVar39 = collisionState->scanAxis;
  if (iVar39 == 0) {
    sVar41 = (collisionState->maxBounds).x;
  }
  else if (iVar39 == 1) {
    sVar41 = (collisionState->maxBounds).y;
  }
  else {
    if (iVar39 != 2) {
      uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar38,(MethodInfo *)0x0);
      uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
      FUN_?(pIVar38,uVar37);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    sVar41 = (collisionState->maxBounds).z;
  }
  uVar42 = (uint)(short)uVar36;
  if ((short)uVar36 < sVar40) {
    uVar42 = (uint)sVar40;
  }
  else if (sVar41 < (short)uVar36) {
    uVar42 = (uint)sVar41;
  }
  uVar43 = (ushort)uVar42;
  uVar36 = uVar43;
  uVar44 = uStack_32;
  if (iVar8 == 0) {
code_?:
    uStack_32 = uVar44;
    uVar42 = (uint)uStack_31._2_2_;
  }
  else {
    uVar36 = (ushort)uStack_31;
    if (iVar8 != 1) {
      uVar30 = uVar43;
      uVar44 = uVar43;
      if (iVar8 != 2) {
        uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar38,(MethodInfo *)0x0);
        uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__set_Item_int__short_);
        FUN_?(pIVar38,uVar37);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      goto code_?;
    }
    uVar42 = uVar42 & 0xffff;
    uStack_35 = CONCAT22(uStack_35._2_2_,uVar43);
  }
  iVar8 = collisionState->scanAxis;
  uVar44 = uVar36;
  if (((iVar8 != 0) && (uVar44 = (ushort)uVar42, iVar8 != 1)) && (uVar44 = uVar30, iVar8 != 2)) {
    uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar38,(MethodInfo *)0x0);
    uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
    FUN_?(pIVar38,uVar37);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if (iVar8 == 0) {
    uVar30 = (collisionState->minBounds).x;
  }
  else if (iVar8 == 1) {
    uVar30 = (collisionState->minBounds).y;
  }
  else {
    if (iVar8 != 2) {
      uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar38,(MethodInfo *)0x0);
      uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
      FUN_?(pIVar38,uVar37);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    uVar30 = (collisionState->minBounds).z;
  }
  if (iVar8 == 0) {
    uVar43 = (collisionState->maxBounds).x;
  }
  else if (iVar8 == 1) {
    uVar43 = (collisionState->maxBounds).y;
  }
  else {
    if (iVar8 != 2) {
      uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar38,(MethodInfo *)0x0);
      uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
      FUN_?(pIVar38,uVar37);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    uVar43 = (collisionState->maxBounds).z;
  }
  if (((short)uVar30 <= (short)uVar44) && (uVar30 = uVar44, (short)uVar43 < (short)uVar44)) {
    uVar30 = uVar43;
  }
  uVar44 = uVar30;
  uVar43 = uStack_33;
  if (iVar8 == 0) {
code_?:
    uStack_33 = uVar43;
    uVar30 = (ushort)((uint)iStack_34 >> 0x10);
  }
  else {
    uVar44 = (ushort)iStack_34;
    if (iVar8 != 1) {
      uVar43 = uVar30;
      if (iVar8 != 2) {
        uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar38,(MethodInfo *)0x0);
        uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__set_Item_int__short_);
        FUN_?(pIVar38,uVar37);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      goto code_?;
    }
  }
  iVar8 = 0;
  iStack_45 = 0;
  iStack_46 = 0;
  iStack_47 = 0;
  iStack_34 = 0;
  while( true ) {
    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (iVar8 == 0) {
      sVar40 = (short)uStack_25;
    }
    else if (iVar8 == 1) {
      sVar40 = uStack_25._2_2_;
    }
    else {
      sVar40 = IStackX_10.x;
      if (iVar8 != 2) {
        uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar38,(MethodInfo *)0x0);
        uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
        FUN_?(pIVar38,uVar37);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
    }
    if (sVar40 != 0) {
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar43 = uVar36;
      if (((iVar8 != 0) && (uVar43 = (ushort)uVar42, iVar8 != 1)) &&
         (uVar43 = uStack_32, iVar8 != 2)) {
        uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar38,(MethodInfo *)0x0);
        uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
        FUN_?(pIVar38,uVar37);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVSweptElipsoidCheck);
      }
      pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
      if (pCVar28 == (CellTraverser *)0x0) goto code_?;
      uStack_31._0_2_ = (pCVar28->fields).voxelPos.x;
      uStack_31._2_2_ = (pCVar28->fields).voxelPos.y;
      uVar42 = uStack_31;
      if (iVar8 != 0) {
        if (iVar8 == 1) {
          uVar42 = uStack_31 >> 0x10;
        }
        else {
          uVar42 = (uint)(ushort)(pCVar28->fields).voxelPos.z;
          if (iVar8 != 2) {
            uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                      (pIVar38,(MethodInfo *)0x0);
            uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
            FUN_?(pIVar38,uVar37);
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
        }
      }
      iStack_45 = FUN_?((int)(short)uVar43 - (int)(short)uVar42);
      iStack_47 = iVar8;
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (iVar8 == 0) {
      sVar40 = (short)uStack_26;
    }
    else if (iVar8 == 1) {
      sVar40 = uStack_26._2_2_;
    }
    else {
      sVar40 = sStack_27;
      if (iVar8 != 2) {
        uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar38,(MethodInfo *)0x0);
        uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
        FUN_?(pIVar38,uVar37);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
    }
    if (sVar40 != 0) {
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar43 = uVar44;
      if (((iVar8 != 0) && (uVar43 = uVar30, iVar8 != 1)) && (uVar43 = uStack_33, iVar8 != 2)) {
        uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar38,(MethodInfo *)0x0);
        uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
        FUN_?(pIVar38,uVar37);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVSweptElipsoidCheck);
      }
      pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
      if (pCVar28 == (CellTraverser *)0x0) goto code_?;
      uStack_31._0_2_ = (pCVar28->fields).voxelPos.x;
      uStack_31._2_2_ = (pCVar28->fields).voxelPos.y;
      uVar42 = uStack_31;
      if (iVar8 != 0) {
        if (iVar8 == 1) {
          uVar42 = uStack_31 >> 0x10;
        }
        else {
          uVar42 = (uint)(ushort)(pCVar28->fields).voxelPos.z;
          if (iVar8 != 2) {
            uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                      (pIVar38,(MethodInfo *)0x0);
            uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
            FUN_?(pIVar38,uVar37);
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
        }
      }
      iStack_46 = FUN_?((int)(short)uVar43 - (int)(short)uVar42);
      iStack_34 = iVar8;
    }
    iVar8 = iVar8 + 1;
    if (2 < iVar8) break;
    uVar42 = uStack_35 & 0xffff;
  }
  iStack_46 = iStack_46 + 1;
  iStack_45 = iStack_45 + 1;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar37 = VStack_5._0_8_;
  pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
  if (pCVar28 != (CellTraverser *)0x0) {
    uVar42._0_2_ = (pCVar28->fields).voxelPos.x;
    uVar42._2_2_ = (pCVar28->fields).voxelPos.y;
    pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
    if (pCVar28 != (CellTraverser *)0x0) {
      uStack_35._0_2_ = (pCVar28->fields).voxelPos.x;
      uStack_35._2_2_ = (pCVar28->fields).voxelPos.y;
      pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
      if (pCVar28 != (CellTraverser *)0x0) {
        uVar48 = (pCVar28->fields).voxelPos.x;
        uVar49 = (pCVar28->fields).voxelPos.y;
        VStack_5.x._2_2_ = uVar49;
        VStack_5.x._0_2_ = uVar48;
        iVar50 = (pCVar28->fields).voxelPos.z;
        VStack_5.y = SUB84(uVar37,4);
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar7 = fStackX_20;
        uStack_1 = (float)CONCAT22(uStack_35._2_2_,(undefined2)uVar42);
        sVar40 = uStack_35._2_2_;
        do {
          do {
            iVar8 = collisionState->scanAxis;
            if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
              FUN_?();
            }
            sVar41 = (short)uVar42;
            if (((iVar8 != 0) && (sVar41 = sVar40, iVar8 != 1)) && (sVar41 = iVar50, iVar8 != 2))
            {
              uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
              pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
              mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                        (pIVar38,(MethodInfo *)0x0);
              uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
              FUN_?(pIVar38,uVar37);
              pcVar3 = (code *)swi(3);
              bVar4 = (*pcVar3)();
              return bVar4;
            }
            iVar8 = collisionState->scanAxis;
            if (iVar8 == 0) {
              sVar51 = (collisionState->maxBounds).x;
            }
            else if (iVar8 == 1) {
              sVar51 = (collisionState->maxBounds).y;
            }
            else {
              if (iVar8 != 2) {
                uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
                mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                          (pIVar38,(MethodInfo *)0x0);
                uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_)
                ;
                FUN_?(pIVar38,uVar37);
                pcVar3 = (code *)swi(3);
                bVar4 = (*pcVar3)();
                return bVar4;
              }
              sVar51 = (collisionState->maxBounds).z;
            }
            if (sVar51 < sVar41) goto code_?;
            iVar8 = collisionState->scanAxis;
            if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
              FUN_?();
            }
            sVar41 = (short)uVar42;
            if (((iVar8 != 0) && (sVar41 = sVar40, iVar8 != 1)) && (sVar41 = iVar50, iVar8 != 2))
            {
              uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
              pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
              mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                        (pIVar38,(MethodInfo *)0x0);
              uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
              FUN_?(pIVar38,uVar37);
              pcVar3 = (code *)swi(3);
              bVar4 = (*pcVar3)();
              return bVar4;
            }
            iVar8 = collisionState->scanAxis;
            if (iVar8 == 0) {
              sVar51 = (collisionState->minBounds).x;
            }
            else if (iVar8 == 1) {
              sVar51 = (collisionState->minBounds).y;
            }
            else {
              if (iVar8 != 2) {
                uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
                mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                          (pIVar38,(MethodInfo *)0x0);
                uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_)
                ;
                FUN_?(pIVar38,uVar37);
                pcVar3 = (code *)swi(3);
                bVar4 = (*pcVar3)();
                return bVar4;
              }
              sVar51 = (collisionState->minBounds).z;
            }
            if (sVar41 < sVar51) goto code_?;
            if (iStack_45 < 0) {
              sVar41 = uStack_25._2_2_;
            }
            else {
              VStack_9._0_8_ = SEXT48(iStack_45 + 1);
              uVar52 = iStack_46 + 1;
              uStack_35 = uVar52;
              while( true ) {
                uVar30 = (ushort)uVar42;
                if (-1 < iStack_46) {
                  lVar53 = (longlong)(int)uVar52;
                  while( true ) {
                    fVar13 = uStack_1;
                    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    VStack_54.x = radius->x;
                    VStack_54.y = radius->y;
                    VStack_54.z = radius->z;
                    fStack_55 = fVar13;
                    sStack_56 = iVar50;
                    MVSweptElipsoidCheck_HandleCube
                              (pVStackX_18,(IntVector *)&fStack_55,&VStack_54,fVar7,collisionState
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    iVar50 = iVar50 + sStack_27;
                    uVar30 = (short)uStack_26 + (short)uVar42;
                    sVar40 = uStack_26._2_2_ + sVar40;
                    uStack_57 = (float)CONCAT22(sVar40,uVar30);
                    uStack_1 = uStack_57;
                    lVar53 = lVar53 + -1;
                    uVar52 = uStack_35;
                    if (lVar53 == 0) break;
                    uVar42 = (uint)uVar30;
                  }
                }
                if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                  FUN_?();
                }
                sVar41 = (short)uVar52;
                uVar30 = (uVar30 - sVar41 * (short)uStack_26) + (short)uStack_25;
                sVar40 = (sVar40 - sVar41 * uStack_26._2_2_) + uStack_25._2_2_;
                uStack_58 = (float)CONCAT22(sVar40,uVar30);
                uStack_1 = uStack_58;
                iVar50 = (iVar50 - sVar41 * sStack_27) + IStackX_10.x;
                VStack_9._0_8_ = VStack_9._0_8_ + -1;
                sVar41 = uStack_25._2_2_;
                if (VStack_9._0_8_ == 0) break;
                uVar42 = (uint)uVar30;
              }
            }
code_?:
            if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
              FUN_?();
            }
            pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar28 == (CellTraverser *)0x0) goto code_?;
            CellTraverser::CellTraverser_Step(pCVar28,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
              FUN_?();
            }
            pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar28 == (CellTraverser *)0x0) goto code_?;
            uVar52._0_2_ = (pCVar28->fields).stepDir.x;
            uVar52._2_2_ = (pCVar28->fields).stepDir.y;
            uVar30 = (pCVar28->fields).stepDir.z;
            iVar8 = collisionState->scanAxis;
            uStack_31 = uVar52;
            if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (iVar8 != 0) {
              if (iVar8 == 1) {
                uVar52 = uStack_31 >> 0x10;
              }
              else {
                uVar52 = (uint)uVar30;
                if (iVar8 != 2) {
                  uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                  pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
                  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                            (pIVar38,(MethodInfo *)0x0);
                  uVar37 = func_?(&
                                               MethodInfo__MV__WorldObject__IntVector__get_Item_int_
                                              );
                  FUN_?(pIVar38,uVar37);
                  pcVar3 = (code *)swi(3);
                  bVar4 = (*pcVar3)();
                  return bVar4;
                }
              }
            }
            if ((short)uVar52 == 0) {
              if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                FUN_?();
              }
              pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
              if (pCVar28 == (CellTraverser *)0x0) goto code_?;
              uVar59._0_2_ = (pCVar28->fields).voxelPos.x;
              uVar59._2_2_ = (pCVar28->fields).voxelPos.y;
              uStack_1 = (float)CONCAT22(uStack_1._2_2_,(undefined2)uVar59);
              pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
              if (pCVar28 == (CellTraverser *)0x0) goto code_?;
              uStack_60._0_2_ = (pCVar28->fields).voxelPos.x;
              uStack_60._2_2_ = (pCVar28->fields).voxelPos.y;
              uStack_1 = (float)CONCAT22(uStack_60._2_2_,(undefined2)uVar59);
              pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
              if (pCVar28 == (CellTraverser *)0x0) goto code_?;
              uStack_35._0_2_ = (pCVar28->fields).voxelPos.x;
              uStack_35._2_2_ = (pCVar28->fields).voxelPos.y;
              iVar8 = 0;
              iVar50 = (pCVar28->fields).voxelPos.z;
              iStack_2 = iVar50;
              while( true ) {
                if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (iVar8 == 0) {
                  sVar41 = (short)uStack_25;
                }
                else if ((iVar8 != 1) && (sVar41 = IStackX_10.x, iVar8 != 2)) {
                  uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                  pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
                  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                            (pIVar38,(MethodInfo *)0x0);
                  uVar37 = func_?(&
                                               MethodInfo__MV__WorldObject__IntVector__get_Item_int_
                                              );
                  FUN_?(pIVar38,uVar37);
                  pcVar3 = (code *)swi(3);
                  bVar4 = (*pcVar3)();
                  return bVar4;
                }
                if (sVar41 != 0) {
                  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar28 == (CellTraverser *)0x0) goto code_?;
                  uVar61._0_2_ = (pCVar28->fields).stepDir.x;
                  uVar61._2_2_ = (pCVar28->fields).stepDir.y;
                  uVar30 = (pCVar28->fields).stepDir.z;
                  uStack_31 = uVar61;
                  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (iVar8 != 0) {
                    if (iVar8 == 1) {
                      uVar61 = uStack_31 >> 0x10;
                    }
                    else {
                      uVar61 = (uint)uVar30;
                      if (iVar8 != 2) {
                        uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                        pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
                        mscorlib.dll::System::IndexOutOfRangeException::
                        IndexOutOfRangeException__ctor(pIVar38,(MethodInfo *)0x0);
                        uVar37 = func_?(&
                                                  MethodInfo__MV__WorldObject__IntVector__get_Item_int_
                                                  );
                        FUN_?(pIVar38,uVar37);
                        pcVar3 = (code *)swi(3);
                        bVar4 = (*pcVar3)();
                        return bVar4;
                      }
                    }
                  }
                  if ((short)uVar61 == 0) {
                    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                    if (pCVar28 == (CellTraverser *)0x0) goto code_?;
                    uVar62._0_2_ = (pCVar28->fields).stepDir.x;
                    uVar62._2_2_ = (pCVar28->fields).stepDir.y;
                    uVar42 = (uint)(ushort)(pCVar28->fields).stepDir.z;
                    uStack_31 = uVar62;
                    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    iVar8 = iStack_34;
                    if (iStack_34 == 0) {
                      sVar40 = (short)uStack_26;
                      uVar42 = uVar62;
                    }
                    else if (iStack_34 == 1) {
                      sVar40 = uStack_26._2_2_;
                      uVar42 = uStack_31 >> 0x10;
                    }
                    else {
                      sVar40 = sStack_27;
                      if (iStack_34 != 2) {
                        uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                        pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
                        mscorlib.dll::System::IndexOutOfRangeException::
                        IndexOutOfRangeException__ctor(pIVar38,(MethodInfo *)0x0);
                        uVar37 = func_?(&
                                                  MethodInfo__MV__WorldObject__IntVector__get_Item_int_
                                                  );
                        FUN_?(pIVar38,uVar37);
                        pcVar3 = (code *)swi(3);
                        bVar4 = (*pcVar3)();
                        return bVar4;
                      }
                    }
                    if ((short)uVar42 == sVar40) {
                      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      iVar50 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                         ((IntVector *)&uStack_1,iVar8,(MethodInfo *)0x0);
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                                ((IntVector *)&uStack_1,iVar8,iVar50 + (short)iStack_46,
                                 (MethodInfo *)0x0);
                      uVar59 = (uint)uStack_1 & 0xffff;
                      iVar50 = iStack_2;
                    }
                    sVar41 = uStack_25._2_2_;
                    if (-1 < iStack_45) {
                      lVar53 = (longlong)(iStack_45 + 1);
                      while( true ) {
                        fVar13 = uStack_1;
                        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        VStack_63.x = radius->x;
                        VStack_63.y = radius->y;
                        VStack_63.z = radius->z;
                        fStack_64 = fVar13;
                        sStack_65 = iVar50;
                        MVSweptElipsoidCheck_HandleCube
                                  (pVStackX_18,(IntVector *)&fStack_64,&VStack_63,fVar7,
                                   collisionState,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        iVar50 = iVar50 + IStackX_10.x;
                        uVar30 = (short)uStack_25 + (short)uVar59;
                        VStack_22.x = (float)CONCAT22(sVar41 + uStack_1._2_2_,uVar30);
                        uStack_1 = VStack_22.x;
                        lVar53 = lVar53 + -1;
                        if (lVar53 == 0) break;
                        uVar59 = (uint)uVar30;
                      }
                    }
                    goto code_?;
                  }
                }
                iVar8 = iVar8 + 1;
                if (2 < iVar8) break;
                sVar41 = uStack_25._2_2_;
              }
              if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                FUN_?();
              }
              pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
              if (pCVar28 == (CellTraverser *)0x0) goto code_?;
              uVar66._0_2_ = (pCVar28->fields).stepDir.x;
              uVar66._2_2_ = (pCVar28->fields).stepDir.y;
              uVar42 = (uint)(ushort)(pCVar28->fields).stepDir.z;
              uStack_31 = uVar66;
              if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                FUN_?();
              }
              sVar41 = uStack_25._2_2_;
              if (iStack_47 == 0) {
                iVar67 = (short)uStack_25;
                uVar42 = uVar66;
code_?:
                sVar40 = (short)uVar42;
              }
              else {
                if (iStack_47 != 1) {
                  iVar67 = IStackX_10.x;
                  if (iStack_47 != 2) {
                    uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                    pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
                    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                              (pIVar38,(MethodInfo *)0x0);
                    uVar37 = func_?(&
                                                 MethodInfo__MV__WorldObject__IntVector__get_Item_int_
                                                );
                    FUN_?(pIVar38,uVar37);
                    pcVar3 = (code *)swi(3);
                    bVar4 = (*pcVar3)();
                    return bVar4;
                  }
                  goto code_?;
                }
                sVar40 = (short)(uStack_31 >> 0x10);
                iVar67 = uStack_25._2_2_;
              }
              if (sVar40 == iVar67) {
                if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                  FUN_?();
                }
                iVar50 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   ((IntVector *)&uStack_1,iStack_47,(MethodInfo *)0x0);
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                          ((IntVector *)&uStack_1,iStack_47,iVar50 + (short)iStack_45,
                           (MethodInfo *)0x0);
                uVar59 = (uint)uStack_1 & 0xffff;
                iVar50 = iStack_2;
              }
              if (-1 < iStack_46) {
                lVar53 = (longlong)(iStack_46 + 1);
                while( true ) {
                  fVar13 = uStack_1;
                  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  VStack_68.x = radius->x;
                  VStack_68.y = radius->y;
                  VStack_68.z = radius->z;
                  VStack_10.y._0_2_ = iVar50;
                  VStack_10.x = fVar13;
                  MVSweptElipsoidCheck_HandleCube
                            (pVStackX_18,(IntVector *)&VStack_10,&VStack_68,fVar7,collisionState,
                             (MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  iVar50 = iVar50 + sStack_27;
                  uVar30 = (short)uStack_26 + (short)uVar59;
                  VStack_11.x = (float)CONCAT22(uStack_26._2_2_ + uStack_1._2_2_,uVar30);
                  uStack_1 = VStack_11.x;
                  lVar53 = lVar53 + -1;
                  if (lVar53 == 0) break;
                  uVar59 = (uint)uVar30;
                }
              }
              goto code_?;
            }
            if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
              FUN_?();
            }
            pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar28 == (CellTraverser *)0x0) goto code_?;
            uVar69._0_2_ = (pCVar28->fields).voxelPos.x;
            uVar69._2_2_ = (pCVar28->fields).voxelPos.y;
            uVar42 = uVar69 & 0xffff;
            uStack_1 = (float)CONCAT22(uStack_1._2_2_,(undefined2)uVar69);
            pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar28 == (CellTraverser *)0x0) goto code_?;
            uVar70._0_2_ = (pCVar28->fields).voxelPos.x;
            uVar70._2_2_ = (pCVar28->fields).voxelPos.y;
            VStack_5.x = (float)uVar70;
            uStack_1 = (float)CONCAT22(uVar70._2_2_,(undefined2)uVar69);
            pCVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar28 == (CellTraverser *)0x0) goto code_?;
            uStack_35._0_2_ = (pCVar28->fields).voxelPos.x;
            uStack_35._2_2_ = (pCVar28->fields).voxelPos.y;
            iVar50 = (pCVar28->fields).voxelPos.z;
            sVar40 = uVar70._2_2_;
          } while (collisionState->firstHitDetected == 0);
          iVar8 = collisionState->scanAxis;
          if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
            FUN_?();
          }
          iVar67 = (undefined2)uVar69;
          if (((iVar8 != 0) && (iVar67 = uVar70._2_2_, iVar8 != 1)) &&
             (iVar67 = iVar50, iVar8 != 2)) {
            uVar37 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar38 = (IndexOutOfRangeException *)func_?(uVar37);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                      (pIVar38,(MethodInfo *)0x0);
            uVar37 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
            FUN_?(pIVar38,uVar37);
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
          iVar8 = FUN_?((int)iVar67 - collisionState->firstHitScanAxis);
          iVar39 = FUN_?(collisionState->scaledMaxRadius);
        } while (iVar8 <= iVar39);
code_?:
        return collisionState->firstHitDetected;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean MVElipsoidCast(Ray, Transform, Bounds, Single, VoxelHit ByRef, HashSet`1[System.Int32],
   Int32) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast
               (Ray *ray,Transform *transform,Bounds *localBounds,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hit_counter_greater_than_1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (voxelHit->point).x = 0.0;
  (voxelHit->point).y = 0.0;
  *(undefined8 *)&(voxelHit->point).z = 0;
  (voxelHit->normal).y = 0.0;
  (voxelHit->normal).z = 0.0;
  *(undefined8 *)&voxelHit->cubePos = 0;
  voxelHit->face = 0;
  voxelHit->isCubeHit = 0;
  *(undefined3 *)&voxelHit->field_0x25 = 0;
  *(undefined8 *)&voxelHit->woId = 0;
  voxelHit->cube = (Cube *)0x0;
  *(undefined8 *)&voxelHit->distance = 0;
  voxelHit->collider = (Collider *)0x0;
  voxelHit->transform = (Transform *)0x0;
  voxelHit->interactionFlags = 0;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  BStack_1.m_Center.x = (localBounds->m_Center).x;
  BStack_1.m_Center.y = (localBounds->m_Center).y;
  BStack_1._8_8_ = *(undefined8 *)&(localBounds->m_Center).z;
  BStack_1.m_Extents.y = (localBounds->m_Extents).y;
  BStack_1.m_Extents.z = (localBounds->m_Extents).z;
  aRStack_2[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_2[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_2[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_2[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_2[0].m_Direction.z = (ray->m_Direction).z;
  pLVar3 = MVSweptElipsoidCheck_MVElipsoidCast_2
                      (aRStack_2,transform,&BStack_1,0,distance,ignoreWoIds,layerMask,
                       (MethodInfo *)0x0);
  if (pLVar3 != (List_1_VoxelHit_ *)0x0) {
    if ((pLVar3->fields)._size != 0) {
      if ((pLVar3->fields)._size < 2) {
        if ((pLVar3->fields)._size == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pVVar6 = (pLVar3->fields)._items;
        if (pVVar6 != (VoxelHit__Array *)0x0) {
          if ((int)pVVar6->max_length != 0) {
            bVar7 = iRam_? != 0;
            fVar8 = pVVar6->vector[0].point.y;
            uVar9 = *(undefined8 *)&pVVar6->vector[0].point.z;
            fVar10 = pVVar6->vector[0].normal.y;
            fVar11 = pVVar6->vector[0].normal.z;
            IVar12 = pVVar6->vector[0].cubePos;
            uVar13 = *(undefined2 *)&pVVar6->vector[0].field_0x1e;
            iVar14 = pVVar6->vector[0].face;
            bVar5 = pVVar6->vector[0].isCubeHit;
            uVar15 = *(undefined3 *)&pVVar6->vector[0].field_0x25;
            iVar16 = pVVar6->vector[0].woId;
            uVar17 = *(undefined4 *)&pVVar6->vector[0].field_0x2c;
            pCVar18 = pVVar6->vector[0].cube;
            fVar19 = pVVar6->vector[0].distance;
            uVar20 = *(undefined4 *)&pVVar6->vector[0].field_0x3c;
            pCVar21 = pVVar6->vector[0].collider;
            pTVar22 = pVVar6->vector[0].transform;
            iVar23 = pVVar6->vector[0].interactionFlags;
            (voxelHit->point).x = pVVar6->vector[0].point.x;
            (voxelHit->point).y = fVar8;
            *(undefined8 *)&(voxelHit->point).z = uVar9;
            (voxelHit->normal).y = fVar10;
            (voxelHit->normal).z = fVar11;
            voxelHit->cubePos = IVar12;
            *(undefined2 *)&voxelHit->field_0x1e = uVar13;
            voxelHit->face = iVar14;
            voxelHit->isCubeHit = bVar5;
            *(undefined3 *)&voxelHit->field_0x25 = uVar15;
            voxelHit->woId = iVar16;
            *(undefined4 *)&voxelHit->field_0x2c = uVar17;
            voxelHit->cube = pCVar18;
            voxelHit->distance = fVar19;
            *(undefined4 *)&voxelHit->field_0x3c = uVar20;
            voxelHit->collider = pCVar21;
            voxelHit->transform = pTVar22;
            voxelHit->interactionFlags = iVar23;
            if (bVar7) {
              uVar24 = (uint)((ulonglong)&voxelHit->cube >> 0xc);
              uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
              do {
                uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                LOCK();
                bVar7 = uVar26 == *puVar27;
                if (bVar7) {
                  *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            return 1;
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        goto code_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Transform, Bounds, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll
          (Ray *ray,Transform *transform,Bounds *localBounds,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  BStack_1.m_Center.x = (localBounds->m_Center).x;
  BStack_1.m_Center.y = (localBounds->m_Center).y;
  BStack_1._8_8_ = *(undefined8 *)&(localBounds->m_Center).z;
  BStack_1.m_Extents.y = (localBounds->m_Extents).y;
  BStack_1.m_Extents.z = (localBounds->m_Extents).z;
  aRStack_2[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_2[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_2[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_2[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_2[0].m_Direction.z = (ray->m_Direction).z;
  pLVar3 = MVSweptElipsoidCheck_MVElipsoidCast_2
                     (aRStack_2,transform,&BStack_1,1,distance,ignoreWoIds,layerMask,
                      (MethodInfo *)0x0);
  return pLVar3;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Vector3, Quaternion, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll_1
          (Ray *ray,Vector3 *radius,Quaternion *rotation,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_1.x = rotation->x;
  QStack_1.y = rotation->y;
  QStack_1.z = rotation->z;
  QStack_1.w = rotation->w;
  VStack_2.z = radius->z;
  VStack_2.x = radius->x;
  VStack_2.y = radius->y;
  aRStack_3[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_3[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_3[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_3[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_3[0].m_Direction.z = (ray->m_Direction).z;
  pLVar4 = MVSweptElipsoidCheck_MVElipsoidCast_3
                     (aRStack_3,&VStack_2,&QStack_1,distance,1,ignoreWoIds,layerMask,
                      (MethodInfo *)0x0);
  return pLVar4;
}


/* Boolean MVElipsoidCast(Ray, Vector3, Quaternion, Single, VoxelHit ByRef, HashSet`1[System.Int32],
   Int32) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
               (Ray *ray,Vector3 *radius,Quaternion *rotation,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hit_counter_greater_than_1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (voxelHit->point).x = 0.0;
  (voxelHit->point).y = 0.0;
  *(undefined8 *)&(voxelHit->point).z = 0;
  (voxelHit->normal).y = 0.0;
  (voxelHit->normal).z = 0.0;
  *(undefined8 *)&voxelHit->cubePos = 0;
  voxelHit->face = 0;
  voxelHit->isCubeHit = 0;
  *(undefined3 *)&voxelHit->field_0x25 = 0;
  *(undefined8 *)&voxelHit->woId = 0;
  voxelHit->cube = (Cube *)0x0;
  *(undefined8 *)&voxelHit->distance = 0;
  voxelHit->collider = (Collider *)0x0;
  voxelHit->transform = (Transform *)0x0;
  voxelHit->interactionFlags = 0;
  if (((radius->x != 0.0) && (radius->y != 0.0)) && (radius->z != 0.0)) {
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    QStack_1.x = rotation->x;
    QStack_1.y = rotation->y;
    QStack_1.z = rotation->z;
    QStack_1.w = rotation->w;
    VStack_2.z = radius->z;
    VStack_2.x = radius->x;
    VStack_2.y = radius->y;
    aRStack_3[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_3[0].m_Origin.y = (ray->m_Origin).y;
    aRStack_3[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    aRStack_3[0].m_Direction.y = (ray->m_Direction).y;
    aRStack_3[0].m_Direction.z = (ray->m_Direction).z;
    pLVar4 = MVSweptElipsoidCheck_MVElipsoidCast_3
                        (aRStack_3,&VStack_2,&QStack_1,distance,0,ignoreWoIds,layerMask,
                         (MethodInfo *)0x0);
    if (pLVar4 == (List_1_VoxelHit_ *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    if ((pLVar4->fields)._size != 0) {
      if ((pLVar4->fields)._size < 2) {
        if ((pLVar4->fields)._size == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        pVVar7 = (pLVar4->fields)._items;
        if (pVVar7 != (VoxelHit__Array *)0x0) {
          if ((int)pVVar7->max_length != 0) {
            fVar8 = pVVar7->vector[0].point.y;
            fVar9 = pVVar7->vector[0].point.z;
            fVar10 = pVVar7->vector[0].normal.x;
            fVar11 = pVVar7->vector[0].normal.y;
            fVar12 = pVVar7->vector[0].normal.z;
            iVar13 = pVVar7->vector[0].cubePos.x;
            iVar14 = pVVar7->vector[0].cubePos.y;
            uVar15 = *(undefined4 *)&pVVar7->vector[0].cubePos.z;
            iVar16 = pVVar7->vector[0].face;
            bVar6 = pVVar7->vector[0].isCubeHit;
            uVar17 = *(undefined3 *)&pVVar7->vector[0].field_0x25;
            iVar18 = pVVar7->vector[0].woId;
            uVar19 = *(undefined4 *)&pVVar7->vector[0].field_0x2c;
            pCVar20 = pVVar7->vector[0].cube;
            fVar21 = pVVar7->vector[0].distance;
            uVar22 = *(undefined4 *)&pVVar7->vector[0].field_0x3c;
            pCVar23 = pVVar7->vector[0].collider;
            pTVar24 = pVVar7->vector[0].transform;
            iVar25 = pVVar7->vector[0].interactionFlags;
            (voxelHit->point).x = pVVar7->vector[0].point.x;
            (voxelHit->point).y = fVar8;
            (voxelHit->point).z = fVar9;
            (voxelHit->normal).x = fVar10;
            (voxelHit->normal).y = fVar11;
            (voxelHit->normal).z = fVar12;
            (voxelHit->cubePos).x = iVar13;
            (voxelHit->cubePos).y = iVar14;
            *(undefined4 *)&(voxelHit->cubePos).z = uVar15;
            voxelHit->face = iVar16;
            voxelHit->isCubeHit = bVar6;
            *(undefined3 *)&voxelHit->field_0x25 = uVar17;
            voxelHit->woId = iVar18;
            *(undefined4 *)&voxelHit->field_0x2c = uVar19;
            voxelHit->cube = pCVar20;
            voxelHit->distance = fVar21;
            *(undefined4 *)&voxelHit->field_0x3c = uVar22;
            voxelHit->collider = pCVar23;
            voxelHit->transform = pTVar24;
            voxelHit->interactionFlags = iVar25;
            func_?(&voxelHit->cube);
            return 1;
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        goto code_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
  }
  return 0;
}


/* List`1[VoxelHit] MVElipsoidCast(Ray, Transform, Bounds, Boolean, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_2
          (Ray *ray,Transform *transform,Bounds *localBounds,bool all,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (localBounds->m_Extents).x;
  aQStack_2[0].x = (localBounds->m_Extents).x;
  aQStack_2[0].y = (localBounds->m_Extents).y;
  aQStack_2[0].z = (localBounds->m_Extents).z;
  fVar3 = (float)uVar1 * TypeRef__System__Activator__T._0_4_ * _UNK_?;
  fVar4 = (aQStack_2[0].y + aQStack_2[0].y) * _UNK_?;
  fVar5 = (localBounds->m_Extents).z;
  fVar5 = (fVar5 + fVar5) * _UNK_?;
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_8.m_Origin.x = 0.0;
  RStack_8.m_Origin.y = 0.0;
  RStack_8._8_8_ = (ulonglong)(uint)RStack_8.m_Direction.x << 0x20;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar9);
  aQStack_2[0].x = (localBounds->m_Center).x;
  aQStack_2[0].y = (localBounds->m_Center).y;
  aQStack_2[0].z = (localBounds->m_Center).z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_11.x = 0.0;
  QStack_11.y = 0.0;
  QStack_11._8_8_ = (ulonglong)(uint)QStack_11.w << 0x20;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar9,aQStack_2,&QStack_11);
  fVar3 = RStack_8.m_Origin.x * fVar3;
  fVar4 = RStack_8.m_Origin.y * fVar4;
  fVar5 = RStack_8.m_Origin.z * fVar5;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_8.m_Origin.x = 0.0;
  RStack_8.m_Origin.y = 0.0;
  RStack_8._8_8_ = RStack_8._8_8_ & 0xffffffff00000000;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar9);
  aQStack_2[0].x = (ray->m_Origin).x;
  aQStack_2[0].y = (ray->m_Origin).y;
  bVar12 = cRam_? == '\0';
  (ray->m_Origin).x = (QStack_11.x - RStack_8.m_Origin.x) + aQStack_2[0].x;
  (ray->m_Origin).y = (QStack_11.y - RStack_8.m_Origin.y) + aQStack_2[0].y;
  (ray->m_Origin).z = (QStack_11.z - RStack_8.m_Origin.z) + (ray->m_Origin).z;
  if (bVar12) {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aQStack_2[0].x = 0.0;
  aQStack_2[0].y = 0.0;
  aQStack_2[0].z = 0.0;
  aQStack_2[0].w = 0.0;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_VoxelHit_ *)(*pcVar6)();
    return pLVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar9,aQStack_2);
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_8.m_Direction.y = (ray->m_Direction).y;
  RStack_8.m_Direction.z = (ray->m_Direction).z;
  QStack_11.x = aQStack_2[0].x;
  QStack_11.y = aQStack_2[0].y;
  QStack_11.z = aQStack_2[0].z;
  QStack_11.w = aQStack_2[0].w;
  RStack_8.m_Origin.x = (ray->m_Origin).x;
  RStack_8.m_Origin.y = (ray->m_Origin).y;
  RStack_8._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aQStack_2[0].z = fVar5;
  aQStack_2[0].y = fVar4;
  aQStack_2[0].x = fVar3;
  pLVar7 = MVSweptElipsoidCheck_MVElipsoidCast_3
                     (&RStack_8,(Vector3 *)aQStack_2,&QStack_11,distance,all,ignoreWoIds,layerMask
                      ,(MethodInfo *)0x0);
  return pLVar7;
}


/* List`1[VoxelHit] MVElipsoidCast(Ray, Vector3, Quaternion, Single, Boolean,
   HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_3
          (Ray *ray,Vector3 *radius,Quaternion *rotation,float distance,bool all,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.interactionFlags = 0;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pLVar2 = TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
  if (pLVar2 != (List_1_VoxelHit_ *)0x0) {
    uVar3 = (pLVar2->fields)._size;
    method_00 = (MethodInfo *)(ulonglong)uVar3;
    iVar4 = 0;
    piVar5 = &(pLVar2->fields)._version;
    *piVar5 = *piVar5 + 1;
    (pLVar2->fields)._size = 0;
    if (0 < (int)uVar3) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar2->fields)._items,0,uVar3,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar6 = (ray->m_Direction).x;
    uVar7 = (ray->m_Direction).y;
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_9.x = (pVVar8->zeroVector).x;
    VStack_9.y = (pVVar8->zeroVector).y;
    fVar10 = (ray->m_Direction).z - (pVVar8->zeroVector).z;
    if (((float)uVar7 - VStack_9.y) * ((float)uVar7 - VStack_9.y) +
        ((float)uVar6 - VStack_9.x) * ((float)uVar6 - VStack_9.x) + fVar10 * fVar10 <
        _UNK_?) {
      iVar4 = *(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c;
    }
    else {
      if (all != 0) {
        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVSweptElipsoidCheck);
        }
        if (TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos ==
            (HashSet_1_System_Int32_ *)0x0) goto code_?;
        FUN_?();
      }
      fVar10 = 0.0;
      do {
        if (iVar4 == 0) {
          fVar11 = radius->x;
        }
        else if (iVar4 == 1) {
          fVar11 = radius->y;
        }
        else {
          if (iVar4 != 2) {
            uVar12 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this_01 = (IndexOutOfRangeException *)func_?(uVar12);
            message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (this_01,message,(MethodInfo *)0x0);
            uVar12 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(this_01,uVar12);
            pcVar13 = (code *)swi(3);
            pLVar2 = (List_1_VoxelHit_ *)(*pcVar13)();
            return pLVar2;
          }
          fVar11 = radius->z;
        }
        if (fVar10 < fVar11) {
          fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (radius,iVar4,method_00);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      pCVar14 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_9.x = (ray->m_Origin).x;
      VStack_9.y = (ray->m_Origin).y;
      VStack_9.z = (ray->m_Origin).z;
      overlapAmount =
           UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                     (&VStack_9,fVar10,pCVar14,layerMask,(MethodInfo *)0x0);
      RStack_15.m_Direction.y = (ray->m_Direction).y;
      RStack_15.m_Direction.z = (ray->m_Direction).z;
      RStack_15.m_Origin.x = (ray->m_Origin).x;
      RStack_15.m_Origin.y = (ray->m_Origin).y;
      RStack_15._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      hitAmount = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_SphereCastNonAlloc_2
                            (&RStack_15,fVar10,
                             TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer,
                             distance,layerMask,(MethodInfo *)0x0);
      pCVar14 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      hits = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
      if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_9.z = (ray->m_Origin).z;
      VStack_9.x = (ray->m_Origin).x;
      VStack_9.y = (ray->m_Origin).y;
      collisionData =
           SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                     (overlapAmount,pCVar14,hitAmount,hits,&VStack_9,(MethodInfo *)0x0);
      uVar3 = 0;
      if (collisionData == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
      lVar16 = 0x20;
      for (; (int)uVar3 < (collisionData->fields).length; uVar3 = uVar3 + 1) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar17 = (collisionData->fields).physicsCollisionDatas;
        if (pLVar17 == (List_1_PhysicsCollisionData_ *)0x0) goto code_?;
        if ((uint)(pLVar17->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          pLVar2 = (List_1_VoxelHit_ *)(*pcVar13)();
          return pLVar2;
        }
        pPVar18 = (pLVar17->fields)._items;
        if (pPVar18 == (PhysicsCollisionData__Array *)0x0) goto code_?;
        if ((uint)pPVar18->max_length <= uVar3) {
          FUN_?();
          pcVar13 = (code *)swi(3);
          pLVar2 = (List_1_VoxelHit_ *)(*pcVar13)();
          return pLVar2;
        }
        lVar19 = *(longlong *)((longlong)pPVar18->vector + lVar16 + -0x20);
        if (lVar19 == 0) goto code_?;
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                       (*(Transform **)(lVar19 + 0x20),(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (wo != (MVWorldObjectClient *)0x0) {
          if (ignoreWoIds != (HashSet_1_System_Int32_ *)0x0) {
            bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                     HashSet_1_System_Int32Enum__Contains
                               ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,(wo->fields)._.id,
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
            if (bVar20 != 0) goto code_?;
          }
          if (all != 0) {
            if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__MVSweptElipsoidCheck);
            }
            this = (HashSet_1_System_Int32Enum_ *)
                   TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
            if (this == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
            bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                     HashSet_1_System_Int32Enum__Contains
                               (this,(wo->fields)._.id,
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
            if (bVar20 != 0) goto code_?;
          }
          if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
            FUN_?();
          }
          VStack_9.x = radius->x;
          VStack_9.y = radius->y;
          RStack_15.m_Origin.x = rotation->x;
          RStack_15.m_Origin.y = rotation->y;
          RStack_15.m_Origin.z = rotation->z;
          RStack_15.m_Direction.x = rotation->w;
          VStack_9.z = radius->z;
          RStack_21.m_Origin.x = (ray->m_Origin).x;
          RStack_21.m_Origin.y = (ray->m_Origin).y;
          RStack_21._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          RStack_21.m_Direction.y = (ray->m_Direction).y;
          RStack_21.m_Direction.z = (ray->m_Direction).z;
          bVar20 = MVSweptElipsoidCheck_SphereHitDetectOnWo
                             (&RStack_21,&VStack_9,(Quaternion *)&RStack_15,fVar10,distance,
                              uVar3,wo,collisionData,all ^ 1,&VStack_1,ignoreWoIds,
                              (MethodInfo *)0x0);
          if (bVar20 != 0) {
            if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__MVSweptElipsoidCheck);
            }
            pLVar2 = TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
            if (pLVar2 == (List_1_VoxelHit_ *)0x0) goto code_?;
            aVStack_22[0].x = VStack_1.point.x;
            aVStack_22[0].y = VStack_1.point.y;
            aVStack_22[0].z = VStack_1.point.z;
            aVStack_22[1].x = VStack_1.normal.x;
            aVStack_22[1].y = VStack_1.normal.y;
            aVStack_22[1].z = VStack_1.normal.z;
            aVStack_22[2]._0_8_ = VStack_1._24_8_;
            aVStack_22._32_8_ = VStack_1._32_8_;
            aVStack_22[3].y = (float)VStack_1.woId;
            aVStack_22[3].z = (float)VStack_1._44_4_;
            pCStack_23 = VStack_1.cube;
            fStack_24 = VStack_1.distance;
            uStack_25 = VStack_1._60_4_;
            uStack_26 = VStack_1.collider._0_4_;
            uStack_27 = VStack_1.collider._4_4_;
            uStack_28 = VStack_1.transform._0_4_;
            uStack_29 = VStack_1.transform._4_4_;
            iStack_30 = VStack_1.interactionFlags;
            FUN_?(pLVar2,aVStack_22,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
            this_00 = TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
            if (this_00 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      (this_00,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
            if (all == 0) break;
          }
        }
code_?:
        lVar16 = lVar16 + 8;
      }
      iVar4 = *(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c;
    }
    if (iVar4 == 0) {
      FUN_?(TypeInfo__MVSweptElipsoidCheck);
    }
    return TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  pLVar2 = (List_1_VoxelHit_ *)(*pcVar13)();
  return pLVar2;
}


/* Void MoveAxisAlignedRectBackward(Vector3[], Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MoveAxisAlignedRectBackward
               (Vector3__Array *pointsOnProjectPlane,Vector3 *startOrigin,Vector3 *dir,
               MethodInfo *method)

{
  RStack_1.m_Origin.x = dir->x;
  RStack_1.m_Origin.y = dir->y;
  uVar2 = 0;
  RStack_1.m_Origin.z = dir->z;
  PStack_3.m_Distance = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  fVar6 = (float)FUN_?(&RStack_1);
  if (_UNK_? < fVar6) {
    uVar7 = dir->x;
    uVar8 = dir->y;
    fVar9 = (float)uVar8 / fVar6;
    fVar10 = (float)uVar7 / fVar6;
    fVar6 = dir->z / fVar6;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar10 = (pVVar11->zeroVector).x;
    fVar9 = (pVVar11->zeroVector).y;
    fVar6 = (pVVar11->zeroVector).z;
  }
  RStack_1.m_Origin.x = startOrigin->x;
  RStack_1.m_Origin.y = startOrigin->y;
  PStack_3.m_Normal.y = fVar9;
  PStack_3.m_Normal.x = fVar10;
  fVar12 = 0.0;
  fVar13 = (float)((uint)(fVar9 * RStack_1.m_Origin.y + fVar10 * RStack_1.m_Origin.x +
                         fVar6 * startOrigin->z) ^ _UNK_?);
  PStack_3.m_Normal.z = fVar6;
  PStack_3.m_Distance = fVar13;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar14 = dir->x;
  uVar15 = dir->y;
  fVar16 = (float)(uVar15 ^ _UNK_?);
  fVar17 = (float)(uVar14 ^ _UNK_?);
  fVar18 = (float)((uint)dir->z ^ _UNK_?);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar11->zeroVector).x;
  uStack_4._4_4_ = (pVVar11->zeroVector).y;
  fStack_5 = (pVVar11->zeroVector).z;
  RStack_1.m_Origin.y = fVar16;
  RStack_1.m_Origin.x = fVar17;
  RStack_1.m_Origin.z = fVar18;
  fVar19 = (float)FUN_?(&RStack_1);
  if (_UNK_? < fVar19) {
    fStack_20 = fVar18 / fVar19;
    RStack_1.m_Origin.y = fVar16 / fVar19;
    RStack_1.m_Origin.x = fVar17 / fVar19;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_1.m_Origin.x = (pVVar11->zeroVector).x;
    RStack_1.m_Origin.y = (pVVar11->zeroVector).y;
    fStack_20 = (pVVar11->zeroVector).z;
  }
  fStack_21 = RStack_1.m_Origin.x;
  fStack_22 = RStack_1.m_Origin.y;
  if (pointsOnProjectPlane == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  uVar24._4_4_ = fStack_20;
  uVar24._0_4_ = RStack_1.m_Origin.y;
  pVVar25 = pointsOnProjectPlane->vector;
  for (uVar26 = uVar2; (int)uVar26 < (int)pointsOnProjectPlane->max_length; uVar26 = uVar26 + 1) {
    if ((uint)pointsOnProjectPlane->max_length <= uVar26) goto code_?;
    RStack_1.m_Origin.x = pVVar25->x;
    RStack_1.m_Origin.y = pVVar25->y;
    uVar27._0_4_ = pVVar25->x;
    uVar27._4_4_ = pVVar25->y;
    uVar28._0_4_ = pVVar25->x;
    uVar28._4_4_ = pVVar25->y;
    if (0.0 < fVar9 * pVVar25->y + fVar10 * pVVar25->x + fVar6 * pVVar25->z + fVar13) {
      RStack_1.m_Origin.z = pVVar25->z;
      afStackX_8[0] = 0.0;
      RStack_1.m_Direction.x = fStack_21;
      RStack_1.m_Direction._4_8_ = uVar24;
      uStack_4 = uVar27;
      fStack_5 = RStack_1.m_Origin.z;
      bVar29 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                         (&PStack_3,&RStack_1,afStackX_8,method);
      uVar28 = RStack_1.m_Origin._0_8_;
      if ((bVar29 != 0) && (fVar12 < afStackX_8[0])) {
        fVar12 = afStackX_8[0];
      }
    }
    RStack_1.m_Origin._0_8_ = uVar28;
    pVVar25 = pVVar25 + 1;
  }
  if (0.0 < fVar12) {
    pVVar25 = pointsOnProjectPlane->vector;
    uVar30 = dir->y;
    uVar31 = dir->x;
    fVar10 = (float)(uVar31 ^ _UNK_?);
    fVar9 = (float)((uint)dir->z ^ _UNK_?);
    fVar6 = (float)(uVar30 ^ _UNK_?);
    for (; (int)uVar2 < (int)pointsOnProjectPlane->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pointsOnProjectPlane->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      uVar32 = pVVar25->x;
      uVar33 = pVVar25->y;
      pVVar25->x = fVar10 * fVar12 + (float)uVar32;
      pVVar25->y = fVar6 * fVar12 + (float)uVar33;
      pVVar25->z = fVar9 * fVar12 + pVVar25->z;
      pVVar25 = pVVar25 + 1;
    }
  }
  return;
}


/* Void MoveAxisAlignedRectOutOfBox(Vector3[], Vector3, Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
               (Vector3__Array *axisAlignedRect,Vector3 *localNormal,Vector3 *localHit,
               Vector3 *localDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = _UNK_?;
  uVar2 = localNormal->x;
  uVar3 = localNormal->y;
  fStack_4 = localHit->z;
  uStack_5._0_4_ = localHit->x;
  uStack_5._4_4_ = localHit->y;
  fStack_6 = (float)((uint)localNormal->z ^ _UNK_?);
  uStack_7 = CONCAT44(uVar3 ^ _UNK_?,uVar2 ^ _UNK_?);
  FUN_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane0,&uStack_7,
                &uStack_5);
  fVar8 = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar9 = localDir->x;
  uVar10 = localDir->y;
  fVar11 = (float)((uint)localDir->z ^ uVar1);
  uStack_7 = CONCAT44(uVar10 ^ uVar1,uVar9 ^ uVar1);
  fStack_6 = fVar11;
  fVar12 = (float)FUN_?(&uStack_7);
  if (_UNK_? < fVar12) {
    fStack_4 = fVar11 / fVar12;
    uStack_5 = CONCAT44((float)(uVar10 ^ uVar1) / fVar12,(float)(uVar9 ^ uVar1) / fVar12);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar13->zeroVector).x;
    uStack_5._4_4_ = (pVVar13->zeroVector).y;
    fStack_4 = (pVVar13->zeroVector).z;
  }
  fVar14 = fStack_4;
  uVar15 = _UNK_?;
  fVar11 = _UNK_?;
  fVar12 = _UNK_?;
  uVar16 = 0;
  uVar17 = 0;
  if (axisAlignedRect == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  pVVar19 = axisAlignedRect->vector;
  fVar20 = uStack_5._4_4_;
  for (; (int)uVar17 < (int)axisAlignedRect->max_length; uVar17 = uVar17 + 1) {
    if ((uint)axisAlignedRect->max_length <= uVar17) goto DAT_?;
    uStack_21._0_4_ = pVVar19->x;
    uStack_21._4_4_ = pVVar19->y;
    fVar22 = pVVar19->z;
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar23 = TypeInfo__MVSweptElipsoidCheck->static_fields;
    uVar24 = (pMVar23->collisionPlane0).m_Normal.x;
    uVar25 = (pMVar23->collisionPlane0).m_Normal.y;
    fVar26 = fVar20 * (float)uVar25 + (float)uStack_5 * (float)uVar24 +
             fVar14 * (pMVar23->collisionPlane0).m_Normal.z;
    fVar27 = (float)uStack_21 * (float)uVar24;
    fVar28 = uStack_21._4_4_ * (float)uVar25;
    fVar29 = (pMVar23->collisionPlane0).m_Normal.z;
    fVar30 = (pMVar23->collisionPlane0).m_Distance;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Mathf);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar31 = (float)((uint)fVar26 & uVar15);
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    fVar32 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * fVar11;
    fVar33 = fVar31 * fVar12;
    if (fVar31 * fVar12 <= fVar32) {
      fVar33 = fVar32;
    }
    if (((fVar33 <= (float)((uint)(0.0 - fVar26) & uVar15)) &&
        (fVar26 = ((float)((uint)(fVar28 + fVar27 + fVar22 * fVar29) ^ uVar1) - fVar30) / fVar26,
        0.0 < fVar26)) && (fVar8 < fVar26)) {
      fVar8 = fVar26;
    }
    pVVar19 = pVVar19 + 1;
  }
  if (fVar8 != 0.0) {
    uVar34 = localDir->x;
    pVVar19 = axisAlignedRect->vector;
    fVar12 = localDir->y;
    fVar8 = (float)((uint)fVar8 ^ uVar1);
    fVar11 = localDir->z;
    for (; (int)uVar16 < (int)axisAlignedRect->max_length; uVar16 = uVar16 + 1) {
      if ((uint)axisAlignedRect->max_length <= uVar16) {
DAT_?:
        FUN_?();
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      uVar35 = pVVar19->x;
      pVVar19->x = (float)uVar35 + (float)uVar34 * fVar8;
      pVVar19->y = pVVar19->y + fVar12 * fVar8;
      pVVar19->z = pVVar19->z + fVar11 * fVar8;
      pVVar19 = pVVar19 + 1;
    }
  }
  return;
}


/* Boolean RayCast(Ray, Vector3 ByRef, Plane) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_RayCast
               (Ray *ray,Vector3 *hit,Plane *collPlane,MethodInfo *method)

{
  RStack_1.m_Origin.x = (ray->m_Origin).x;
  RStack_1.m_Origin.y = (ray->m_Origin).y;
  RStack_1._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  RStack_1.m_Direction.y = (ray->m_Direction).y;
  RStack_1.m_Direction.z = (ray->m_Direction).z;
  afStackX_8[0] = 0.0;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    (collPlane,&RStack_1,afStackX_8,method);
  if (bVar2 == 0) {
    return 0;
  }
  RStack_1.m_Origin.x = (ray->m_Direction).x;
  RStack_1.m_Origin.y = (ray->m_Direction).y;
  RStack_1.m_Origin.z = (ray->m_Direction).z;
  fVar3 = (float)FUN_?(&RStack_1);
  if (_UNK_? < fVar3) {
    uVar4 = (ray->m_Direction).x;
    uVar5 = (ray->m_Direction).y;
    fVar6 = (ray->m_Direction).z / fVar3;
    RStack_1.m_Origin.y = (float)uVar5 / fVar3;
    RStack_1.m_Origin.x = (float)uVar4 / fVar3;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_1.m_Origin.x = (pVVar7->zeroVector).x;
    RStack_1.m_Origin.y = (pVVar7->zeroVector).y;
    fVar6 = (pVVar7->zeroVector).z;
  }
  uVar8 = (ray->m_Origin).x;
  uVar9 = (ray->m_Origin).y;
  fVar3 = (ray->m_Origin).z;
  hit->x = RStack_1.m_Origin.x * afStackX_8[0] + (float)uVar8;
  hit->y = RStack_1.m_Origin.y * afStackX_8[0] + (float)uVar9;
  hit->z = fVar6 * afStackX_8[0] + fVar3;
  return 1;
}


/* Void SetFoundHitVariables(VoxelHit ByRef, PhysicsCollisionData, Int32, InteractionFlags) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_SetFoundHitVariables
               (VoxelHit *voxelHit,PhysicsCollisionData *collisionData,int32_t woId,
               InteractionFlags__Enum interactionFlag,MethodInfo *method)

{
  voxelHit->isCubeHit = 1;
  voxelHit->woId = woId;
  if (collisionData == (PhysicsCollisionData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  voxelHit->collider = (collisionData->fields).collider;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&voxelHit->collider >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  voxelHit->transform = (collisionData->fields).transform;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&voxelHit->transform >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  voxelHit->interactionFlags = CONCAT44(in_register_0000008c,interactionFlag);
  return;
}


/* Boolean SphereHitDetectOnWo(Ray, Vector3, Quaternion, Single, Single, Int32, MVWorldObjectClient,
   PhysicsCollisionDatasWrapper, Boolean, VoxelHit ByRef, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_SphereHitDetectOnWo
               (Ray *ray,Vector3 *radius,Quaternion *rotation,float maxRadius,float distance,
               int32_t i,MVWorldObjectClient *wo,PhysicsCollisionDatasWrapper *collisionData,
               bool handleObjectsInsideBoxCollider,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__BoxCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (voxelHit->point).x = 0.0;
  (voxelHit->point).y = 0.0;
  *(undefined8 *)&(voxelHit->point).z = 0;
  (voxelHit->normal).y = 0.0;
  (voxelHit->normal).z = 0.0;
  *(undefined8 *)&voxelHit->cubePos = 0;
  voxelHit->face = 0;
  voxelHit->isCubeHit = 0;
  *(undefined3 *)&voxelHit->field_0x25 = 0;
  *(undefined8 *)&voxelHit->woId = 0;
  voxelHit->cube = (Cube *)0x0;
  *(undefined8 *)&voxelHit->distance = 0;
  voxelHit->collider = (Collider *)0x0;
  voxelHit->transform = (Transform *)0x0;
  voxelHit->interactionFlags = 0;
  lVar1 = FUN_?(wo,TypeInfo__ICubeModelCollider);
  if (lVar1 == 0) {
    if ((collisionData != (PhysicsCollisionDatasWrapper *)0x0) &&
       (pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                            (collisionData,i,(MethodInfo *)0x0),
       pPVar2 != (PhysicsCollisionData *)0x0)) {
      if ((pPVar2->fields).isInsideCollider != 0) {
        return 0;
      }
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,i,(MethodInfo *)0x0);
      if (wo != (MVWorldObjectClient *)0x0) {
        woId = (wo->fields)._.id;
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                  (voxelHit,pPVar2,woId,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_3.m_Origin.x = radius->x;
    RStack_3.m_Origin.y = radius->y;
    RStack_3.m_Origin.z = radius->z;
    RStack_4.m_Origin.x = rotation->x;
    RStack_4.m_Origin.y = rotation->y;
    RStack_4.m_Origin.z = rotation->z;
    RStack_4.m_Direction.x = rotation->w;
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_6.x = (pVVar5->zeroVector).x;
    VStack_6.y = (pVVar5->zeroVector).y;
    VStack_6.z = (pVVar5->zeroVector).z;
    MStack_7.m00 = 0.0;
    MStack_7.m10 = 0.0;
    MStack_7.m20 = 0.0;
    MStack_7.m30 = 0.0;
    MStack_7.m01 = 0.0;
    MStack_7.m11 = 0.0;
    MStack_7.m21 = 0.0;
    MStack_7.m31 = 0.0;
    MStack_7.m02 = 0.0;
    MStack_7.m12 = 0.0;
    MStack_7.m22 = 0.0;
    MStack_7.m32 = 0.0;
    MStack_7.m03 = 0.0;
    MStack_7.m13 = 0.0;
    MStack_7.m23 = 0.0;
    MStack_7.m33 = 0.0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      bVar10 = (*pcVar8)();
      return bVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&VStack_6,&RStack_4,&RStack_3,&MStack_7);
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVSweptElipsoidCheck);
    }
    pMVar11 = TypeInfo__MVSweptElipsoidCheck->static_fields;
    (pMVar11->elipsoidSpaceToWorld).m00 = MStack_7.m00;
    (pMVar11->elipsoidSpaceToWorld).m10 = MStack_7.m10;
    (pMVar11->elipsoidSpaceToWorld).m20 = MStack_7.m20;
    (pMVar11->elipsoidSpaceToWorld).m30 = MStack_7.m30;
    (pMVar11->elipsoidSpaceToWorld).m01 = MStack_7.m01;
    (pMVar11->elipsoidSpaceToWorld).m11 = MStack_7.m11;
    (pMVar11->elipsoidSpaceToWorld).m21 = MStack_7.m21;
    (pMVar11->elipsoidSpaceToWorld).m31 = MStack_7.m31;
    (pMVar11->elipsoidSpaceToWorld).m02 = MStack_7.m02;
    (pMVar11->elipsoidSpaceToWorld).m12 = MStack_7.m12;
    (pMVar11->elipsoidSpaceToWorld).m22 = MStack_7.m22;
    (pMVar11->elipsoidSpaceToWorld).m32 = MStack_7.m32;
    (pMVar11->elipsoidSpaceToWorld).m03 = MStack_7.m03;
    (pMVar11->elipsoidSpaceToWorld).m13 = MStack_7.m13;
    (pMVar11->elipsoidSpaceToWorld).m23 = MStack_7.m23;
    (pMVar11->elipsoidSpaceToWorld).m33 = MStack_7.m33;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                        (&MStack_7,
                         &TypeInfo__MVSweptElipsoidCheck->static_fields->elipsoidSpaceToWorld,
                         (MethodInfo *)0x0);
    fVar13 = pMVar12->m10;
    fVar14 = pMVar12->m20;
    fVar15 = pMVar12->m30;
    fVar16 = pMVar12->m01;
    fVar17 = pMVar12->m11;
    fVar18 = pMVar12->m21;
    fVar19 = pMVar12->m31;
    fVar20 = pMVar12->m02;
    fVar21 = pMVar12->m12;
    fVar22 = pMVar12->m22;
    fVar23 = pMVar12->m32;
    fVar24 = pMVar12->m03;
    fVar25 = pMVar12->m13;
    fVar26 = pMVar12->m23;
    fVar27 = pMVar12->m33;
    pMVar11 = TypeInfo__MVSweptElipsoidCheck->static_fields;
    (pMVar11->worldToElipsoidSpace).m00 = pMVar12->m00;
    (pMVar11->worldToElipsoidSpace).m10 = fVar13;
    (pMVar11->worldToElipsoidSpace).m20 = fVar14;
    (pMVar11->worldToElipsoidSpace).m30 = fVar15;
    RStack_4.m_Origin.x = (ray->m_Origin).x;
    RStack_4.m_Origin.y = (ray->m_Origin).y;
    RStack_4._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    (pMVar11->worldToElipsoidSpace).m01 = fVar16;
    (pMVar11->worldToElipsoidSpace).m11 = fVar17;
    (pMVar11->worldToElipsoidSpace).m21 = fVar18;
    (pMVar11->worldToElipsoidSpace).m31 = fVar19;
    RStack_4.m_Direction.y = (ray->m_Direction).y;
    RStack_4.m_Direction.z = (ray->m_Direction).z;
    (pMVar11->worldToElipsoidSpace).m02 = fVar20;
    (pMVar11->worldToElipsoidSpace).m12 = fVar21;
    (pMVar11->worldToElipsoidSpace).m22 = fVar22;
    (pMVar11->worldToElipsoidSpace).m32 = fVar23;
    (pMVar11->worldToElipsoidSpace).m03 = fVar24;
    (pMVar11->worldToElipsoidSpace).m13 = fVar25;
    (pMVar11->worldToElipsoidSpace).m23 = fVar26;
    (pMVar11->worldToElipsoidSpace).m33 = fVar27;
    pIVar28 = TypeInfo__ICubeModelCollider;
    if (wo == (MVWorldObjectClient *)0x0) {
      pIVar29 = (ICubeModelCollider *)0x0;
    }
    else {
      pIVar29 = (ICubeModelCollider *)FUN_?(wo,TypeInfo__ICubeModelCollider);
      if (pIVar29 == (ICubeModelCollider *)0x0) {
        FUN_?(wo,pIVar28);
        pcVar8 = (code *)swi(3);
        bVar10 = (*pcVar8)();
        return bVar10;
      }
    }
    MVSweptElipsoidCheck_GetBoundRays(&RStack_4,pIVar29,(MethodInfo *)0x0);
    if ((collisionData != (PhysicsCollisionDatasWrapper *)0x0) &&
       (pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                            (collisionData,i,(MethodInfo *)0x0),
       pPVar2 != (PhysicsCollisionData *)0x0)) {
      chunk = (BoxCollider *)(pPVar2->fields).collider;
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,i,(MethodInfo *)0x0);
      pIVar28 = TypeInfo__ICubeModelCollider;
      boundRays = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
      if (wo == (MVWorldObjectClient *)0x0) {
        pIVar29 = (ICubeModelCollider *)0x0;
      }
      else {
        pIVar29 = (ICubeModelCollider *)FUN_?(wo,TypeInfo__ICubeModelCollider);
        if (pIVar29 == (ICubeModelCollider *)0x0) {
          FUN_?(wo,pIVar28);
          pcVar8 = (code *)swi(3);
          bVar10 = (*pcVar8)();
          return bVar10;
        }
      }
      if (chunk != (BoxCollider *)0x0) {
        bVar30 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
        if (((chunk->klass->_1).naturalAligment < bVar30) ||
           ((chunk->klass->_1).typeHierarchy[(ulonglong)bVar30 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) {
          FUN_?(chunk);
          pcVar8 = (code *)swi(3);
          bVar10 = (*pcVar8)();
          return bVar10;
        }
      }
      RStack_4.m_Origin.x = (ray->m_Origin).x;
      RStack_4.m_Origin.y = (ray->m_Origin).y;
      RStack_4._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      VStack_6.z = radius->z;
      RStack_4.m_Direction.y = (ray->m_Direction).y;
      RStack_4.m_Direction.z = (ray->m_Direction).z;
      VStack_6.x = radius->x;
      VStack_6.y = radius->y;
      bVar10 = MVSweptElipsoidCheck_LayerScan
                         (voxelHit,&VStack_6,maxRadius,chunk,distance,pIVar29,pPVar2,&RStack_4,
                          boundRays,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        return 0;
      }
      if (handleObjectsInsideBoxCollider != 0) {
        if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
          FUN_?();
        }
        VStack_6.x = radius->x;
        VStack_6.y = radius->y;
        RStack_4.m_Origin.x = rotation->x;
        RStack_4.m_Origin.y = rotation->y;
        RStack_4.m_Origin.z = rotation->z;
        RStack_4.m_Direction.x = rotation->w;
        VStack_6.z = radius->z;
        RStack_3.m_Origin.x = (ray->m_Origin).x;
        RStack_3.m_Origin.y = (ray->m_Origin).y;
        RStack_3._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        RStack_3.m_Direction.y = (ray->m_Direction).y;
        RStack_3.m_Direction.z = (ray->m_Direction).z;
        MVSweptElipsoidCheck_HandleObjectsInsideBoxCollider
                  (&RStack_3,&VStack_6,(Quaternion *)&RStack_4,maxRadius,distance,i,collisionData
                   ,voxelHit,TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays,
                   ignoreWoIds,(MethodInfo *)0x0);
      }
      return 1;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar10 = (*pcVar8)();
  return bVar10;
}


/* MVSweptElipsoidCheck() */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CellTraverser);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<VoxelHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Ray);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_MV_WorldObject_IntVector_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                        );
  FUN_?(pHVar1);
  bVar2 = iRam_? != 0;
  TypeInfo__MVSweptElipsoidCheck->static_fields->debugTestedIntVector = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)TypeInfo__MVSweptElipsoidCheck->static_fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pCVar7 = (CellTraverser *)FUN_?(TypeInfo__CellTraverser);
  (pCVar7->fields).voxelPos.x = 0;
  (pCVar7->fields).voxelPos.y = 0;
  (pCVar7->fields).voxelPos.z = 0;
  TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser = pCVar7;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser >> 0xc)
    ;
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pMVar8 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar8->collisionPlane).m_Normal.x = 0.0;
  (pMVar8->collisionPlane).m_Normal.y = 0.0;
  *(undefined8 *)&(pMVar8->collisionPlane).m_Normal.z = 0;
  pMVar8 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar8->collisionPlane0).m_Normal.x = 0.0;
  (pMVar8->collisionPlane0).m_Normal.y = 0.0;
  *(undefined8 *)&(pMVar8->collisionPlane0).m_Normal.z = 0;
  pHVar9 = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar9,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos = pHVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar10 = (List_1_VoxelHit_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<VoxelHit>);
  FUN_?(pLVar10,MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
  bVar2 = iRam_? != 0;
  TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits = pLVar10;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pVVar11 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace = pVVar11;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)
                    &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace >>
                   0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pVVar11 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace = pVVar11;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)
                    &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pMVar8 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar8->vhCached).point.x = 0.0;
  (pMVar8->vhCached).point.y = 0.0;
  *(undefined8 *)&(pMVar8->vhCached).point.z = 0;
  (pMVar8->vhCached).normal.y = 0.0;
  (pMVar8->vhCached).normal.z = 0.0;
  *(undefined8 *)&(pMVar8->vhCached).cubePos = 0;
  (pMVar8->vhCached).face = 0;
  (pMVar8->vhCached).isCubeHit = 0;
  *(undefined3 *)&(pMVar8->vhCached).field_0x25 = 0;
  *(undefined8 *)&(pMVar8->vhCached).woId = 0;
  (pMVar8->vhCached).cube = (Cube *)0x0;
  *(undefined8 *)&(pMVar8->vhCached).distance = 0;
  (pMVar8->vhCached).collider = (Collider *)0x0;
  (pMVar8->vhCached).transform = (Transform *)0x0;
  (pMVar8->vhCached).interactionFlags = 0;
  pVVar11 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  TypeInfo__MVSweptElipsoidCheck->static_fields->cornerPointsLocalSpaceCalculateAxisAlignedRect =
       pVVar11;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)
                    &TypeInfo__MVSweptElipsoidCheck->static_fields->
                     cornerPointsLocalSpaceCalculateAxisAlignedRect >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pVVar11 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,2);
  TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect = pVVar11;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)
                    &TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect
                   >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pVVar11 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (pVVar11 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((int)pVVar11->max_length != 0) {
    bVar2 = cRam_? == '\0';
    fVar14 = (pVVar12->upVector).y;
    pVVar11->vector[0].x = (pVVar12->upVector).x;
    pVVar11->vector[0].y = fVar14;
    pVVar11->vector[0].z = (pVVar12->upVector).z;
    if (bVar2) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (1 < (uint)pVVar11->max_length) {
      bVar2 = cRam_? == '\0';
      fVar14 = (pVVar12->forwardVector).y;
      pVVar11->vector[1].x = (pVVar12->forwardVector).x;
      pVVar11->vector[1].y = fVar14;
      pVVar11->vector[1].z = (pVVar12->forwardVector).z;
      if (bVar2) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (2 < (uint)pVVar11->max_length) {
        fVar14 = (pVVar12->rightVector).y;
        pVVar11->vector[2].x = (pVVar12->rightVector).x;
        pVVar11->vector[2].y = fVar14;
        pVVar11->vector[2].z = (pVVar12->rightVector).z;
        TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector =
             pVVar11;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__MVSweptElipsoidCheck->static_fields->
                           testVectorGetMaxAngleLocalAxisVector >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pRVar15 = (Ray__Array *)FUN_?(TypeInfo__UnityEngine__Ray,4);
        TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays = pRVar15;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pVVar11 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
        TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays = pVVar11;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays
                         >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pVVar11 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
        TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane = pVVar11;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane
                         >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

