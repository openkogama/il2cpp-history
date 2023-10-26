
/* Void CalculateAxisAlignedRect(Vector3[], Transform) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CalculateAxisAlignedRect
               (Vector3__Array *hitsClockwise,Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  uVar2 = 0;
  if (hitsClockwise != (Vector3__Array *)0x0) {
    do {
      if (hitsClockwise->max_length <= uVar2) goto code_?;
      if (t == (Transform *)0x0) goto code_?;
      pMVar3 = (MethodInfo *)&UNK_?;
      position.z = *(float *)((int)&hitsClockwise->vector[0].z + iVar1);
      position._0_8_ = *(undefined8 *)((int)&hitsClockwise->vector[0].x + iVar1);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         (&VStack_5,t,position,(MethodInfo *)0x0);
      ppIStack_6 = (Il2CppType **)pVVar4->x;
      _Stack_c = (_union_154)pVVar4->y;
      _Stack_8 = (_union_155)pVVar4->z;
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        VStack_5.z = (float)TypeInfo__MVSweptElipsoidCheck;
        VStack_5.y = (float)&UNK_?;
        func_?();
      }
      pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->
               cornerPointsLocalSpaceCalculateAxisAlignedRect;
      if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
      if (pVVar7->max_length <= uVar2) goto code_?;
      uVar2 = uVar2 + 1;
      *(undefined8 *)((int)&pVVar7->vector[0].x + iVar1) = _ppIStack_10;
      *(_union_155 *)((int)&pVVar7->vector[0].z + iVar1) = _Stack_8;
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x30);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVSweptElipsoidCheck);
    }
    pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->
             cornerPointsLocalSpaceCalculateAxisAlignedRect;
    if (pVVar7 != (Vector3__Array *)0x0) {
      if (pVVar7->max_length == 0) goto code_?;
      VStack_5.x = pVVar7->vector[0].x;
      VStack_5.y = pVVar7->vector[0].y;
      iVar1 = 1;
      VStack_5.z = pVVar7->vector[0].z;
      VStack_8._0_8_ = VStack_5._0_8_;
      VStack_8.z = VStack_5.z;
      do {
        index = (MethodInfo *)0x0;
        do {
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          if (TypeInfo__MVSweptElipsoidCheck->static_fields->
              cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
          goto code_?;
          pVVar4 = (Vector3 *)func_?(iVar1,index,0);
          _Stack_8 = (_union_155)
                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar4,(int32_t)in_stack_9,pMVar3);
          method_00 = (MethodInfo *)0x0;
          pVVar4 = &VStack_5;
          pMVar3 = index;
          _Var7 = (_union_154)
                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                            (pVVar4,(int32_t)index,(MethodInfo *)0x0);
          _Stack_c = (_union_154)(_union_154)_Var7.rgctx_data;
          if ((float)_Var7 < (float)_Stack_8) {
            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVSweptElipsoidCheck);
            }
            if (TypeInfo__MVSweptElipsoidCheck->static_fields->
                cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
            goto code_?;
            pVVar10 = (Vector3 *)func_?(iVar1,index,0);
            _Var7 = (_union_154)
                    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (pVVar10,(int32_t)pVVar4,pMVar3);
            pMVar3 = (MethodInfo *)&VStack_5;
            _Stack_c = (_union_154)(_union_154)_Var7.rgctx_data;
            method_00 = index;
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      ((Vector3 *)pMVar3,(int32_t)index,(float)_Var7,(MethodInfo *)0x0);
          }
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          if (TypeInfo__MVSweptElipsoidCheck->static_fields->
              cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
          goto code_?;
          pVVar4 = (Vector3 *)func_?(iVar1,index,0);
          _Stack_8 = (_union_155)
                     UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar4,(int32_t)pMVar3,method_00);
          pMVar3 = (MethodInfo *)0x0;
          pVVar4 = &VStack_8;
          in_stack_9 = index;
          _Var7 = (_union_154)
                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                            (pVVar4,(int32_t)index,(MethodInfo *)0x0);
          _Stack_c = (_union_154)(_union_154)_Var7.rgctx_data;
          if ((float)_Stack_8 < (float)_Var7) {
            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVSweptElipsoidCheck);
            }
            if (TypeInfo__MVSweptElipsoidCheck->static_fields->
                cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
            goto code_?;
            pVVar10 = (Vector3 *)func_?(iVar1,index,0);
            _Var7 = (_union_154)
                    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              (pVVar10,(int32_t)pVVar4,in_stack_9);
            in_stack_9 = (MethodInfo *)&VStack_8;
            _Stack_c = (_union_154)(_union_154)_Var7.rgctx_data;
            pMVar3 = index;
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      ((Vector3 *)in_stack_9,(int32_t)index,(float)_Var7,(MethodInfo *)0x0);
          }
          index = (MethodInfo *)((int)&index->methodPointer + 1);
        } while ((int)index < 3);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 4);
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVSweptElipsoidCheck);
      }
      pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect;
      if (pVVar7 != (Vector3__Array *)0x0) {
        if (pVVar7->max_length == 0) goto code_?;
        pVVar7->vector[0].x = VStack_8.x;
        pVVar7->vector[0].y = VStack_8.y;
        pVVar7->vector[0].z = VStack_8.z;
        pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect;
        if (pVVar7 != (Vector3__Array *)0x0) {
          if (1 < pVVar7->max_length) {
            pVVar7->vector[1].x = VStack_5.x;
            pVVar7->vector[1].y = VStack_5.y;
            pVVar7->vector[1].z = VStack_5.z;
            return;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean CubeIsWithinFirstHitRadius(IntVector, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CubeIsWithinFirstHitRadius
               (IntVector pos,float moveDistance,CollisionState *collisionState,MethodInfo *method)

{
  if (collisionState->firstHitDetected != 0) {
    uVar1 = (collisionState->localOrigin).x;
    uVar2 = (collisionState->localOrigin).y;
    fVar3 = collisionState->scaledMaxRadius + _UNK_?;
    uVar4 = (collisionState->localDirection).x;
    uVar5 = (collisionState->localDirection).y;
    fVar6 = moveDistance * collisionState->scaledMaxRadius;
    fVar7 = (float)(int)pos.x - ((float)uVar1 + (float)uVar4 * fVar6);
    fVar8 = (float)(int)pos.y - ((float)uVar2 + (float)uVar5 * fVar6);
    fVar6 = (float)(int)pos.z -
            ((collisionState->localOrigin).z + (collisionState->localDirection).z * fVar6);
    if (fVar3 * fVar3 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
      return 0;
    }
  }
  return 1;
}


/* Boolean CubeIsWithinSphereRadius(IntVector, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CubeIsWithinSphereRadius
               (IntVector pos,CollisionState *collisionState,MethodInfo *method)

{
  fVar1 = collisionState->scaledMaxRadius;
  fStack_2 = 0.0;
  uVar3 = (collisionState->localOrigin).x;
  uVar4 = (collisionState->localOrigin).y;
  uVar5 = (collisionState->localDirection).x;
  uVar6 = (collisionState->localDirection).y;
  uVar7 = (collisionState->localOrigin).x;
  uVar8 = (collisionState->localOrigin).y;
  uVar9 = (collisionState->localDirection).x;
  uVar10 = (collisionState->localDirection).y;
  point.y = (float)(int)pos.y;
  point.x = (float)(int)pos.x;
  lineEnd.y = (float)uVar8 + (float)uVar10 * _UNK_?;
  lineEnd.x = (float)uVar7 + (float)uVar9 * _UNK_?;
  lineStart.y = (float)uVar4 - (float)uVar6 * _UNK_?;
  lineStart.x = (float)uVar3 - (float)uVar5 * _UNK_?;
  point.z = (float)(int)pos.z;
  lineStart.z = (collisionState->localOrigin).z - (collisionState->localDirection).z * _UNK_?
  ;
  lineEnd.z = (collisionState->localOrigin).z + (collisionState->localDirection).z * _UNK_?;
  MathFunctions::MathFunctions_DistancePointLine
            (point,lineStart,lineEnd,&fStack_2,(MethodInfo *)0x0);
  return fStack_2 <= fVar1 + _UNK_?;
}


/* Void DrawAxisAlignedRect(Vector3, Vector3, Int32, Transform, Single) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_DrawAxisAlignedRect
               (Vector3 min,Vector3 max,int32_t ignoreAxis,Transform *t,float localIgnoreAxisValue,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  MathFunctions::MathFunctions_Vector3ToVector2(&min,&VStack_2,ignoreAxis,(MethodInfo *)0x0);
  MathFunctions::MathFunctions_Vector3ToVector2(&max,&VStack_1,ignoreAxis,(MethodInfo *)0x0);
  this = (List_1_UnityEngine_Vector2_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  pLStack_3 = this;
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?();
    pSStack_4 = (SendOrPostCallback *)
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    fStack_5 = VStack_2.x;
    fStack_6 = VStack_1.y;
    func_?(this,VStack_2.x,VStack_1.y);
    func_?(this,VStack_1.x,VStack_1.y,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    fStack_5 = VStack_1.x;
    fStack_6 = VStack_2.y;
    func_?(this,VStack_1.x,VStack_2.y,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    UStack_7.m_DelagateCallback =
         (SendOrPostCallback *)TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>;
    this_00 = (SendOrPostCallback *)func_?();
    if (this_00 != (SendOrPostCallback *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      index_00 = 0;
      while( true ) {
        VStack_8.z = 0.0;
        VStack_8.x = 0.0;
        VStack_8.y = 0.0;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__get_Item
                  (this,index_00,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                  );
        MathFunctions::MathFunctions_Vector2ToVector3
                  ((Vector2 *)&stack0xffffff9c,&VStack_8,ignoreAxis,localIgnoreAxisValue,
                   (MethodInfo *)0x0);
        if (t == (Transform *)0x0) break;
        position.z = VStack_8.z;
        position.x = VStack_8.x;
        position.y = VStack_8.y;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                            (&VStack_10,t,position,(MethodInfo *)0x0);
        pMVar11 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        pIVar12 = (this_00->fields)._._.method_ptr;
        uVar13 = *(undefined8 *)pVVar9;
        fVar14 = pVVar9->z;
        ppIVar15 = (Il2CppClass **)&(this_00->fields)._._.m_target;
        *ppIVar15 = (Il2CppClass *)((int)&(*ppIVar15)->image + 1);
        if (pIVar12 == (InvokerMethod)0x0) break;
        pcVar16 = (this_00->fields)._._.invoke_impl;
        if (pcVar16 < *(char **)(pIVar12 + 0xc)) {
          (this_00->fields)._._.invoke_impl = pcVar16 + 1;
          if (*(char **)(pIVar12 + 0xc) <= pcVar16) goto code_?;
          *(undefined8 *)(pIVar12 + (int)pcVar16 * 0xc + 0x10) = uVar13;
          *(float *)(pIVar12 + (int)pcVar16 * 0xc + 0x18) = fVar14;
        }
        else {
          pSStack_4 = this_00;
          (*(pMVar11->klass->rgctx_data[0xb].method)->virtualMethodPointer)();
        }
        index_00 = index_00 + 1;
        this = pLStack_3;
        if (3 < index_00) {
          uVar17 = 0;
          do {
            pUVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                      UnitySynchronizationContext+WorkRequest]::
                      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                                (&UStack_19,
                                 (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                 this_00,uVar17 & 3,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
            uStack_20._0_4_ = pUVar18->m_DelagateCallback;
            uStack_20._4_4_ = pUVar18->m_DelagateState;
            pMVar21 = pUVar18->m_WaitHandle;
            pUVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                      UnitySynchronizationContext+WorkRequest]::
                      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                                (&UStack_7,
                                 (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                 this_00,uVar17 & 3,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
            fVar14 = (float)pUVar18->m_DelagateCallback;
            fVar22 = (float)pUVar18->m_DelagateState;
            pMVar23 = pUVar18->m_WaitHandle;
            index = uVar17 + 1 & 0x80000003;
            if ((int)index < 0) {
              index = (index - 1 | 0xfffffffc) + 1;
            }
            pUVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                      UnitySynchronizationContext+WorkRequest]::
                      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                                ((UnitySynchronizationContext_WorkRequest *)&stack0xffffff70,
                                 (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                 this_00,index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
            uVar24 = pUVar18->m_DelagateCallback;
            uVar25 = pUVar18->m_DelagateState;
            pLStack_3 = (List_1_UnityEngine_Vector2_ *)((float)uVar25 + fVar22);
            fStack_6 = (float)pUVar18->m_WaitHandle + (float)pMVar23;
            pUVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                      UnitySynchronizationContext+WorkRequest]::
                      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                                ((UnitySynchronizationContext_WorkRequest *)&pSStack_4,
                                 (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                 this_00,uVar17 & 3,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
            uVar26 = pUVar18->m_DelagateCallback;
            uVar27 = pUVar18->m_DelagateState;
            VStack_10.x = ((float)uVar24 + fVar14) - (float)uVar26;
            VStack_10.y = (float)pLStack_3 - (float)uVar27;
            VStack_10.z = fStack_6 - (float)pUVar18->m_WaitHandle;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            uVar13 = uStack_20;
            uStack_20 = CONCAT44(&UNK_?,(undefined4)uStack_20);
            uVar28 = uStack_20;
            start.z = (float)pMVar21;
            uStack_20._0_4_ = (undefined4)uVar13;
            uStack_20._4_4_ = SUB84(uVar13,4);
            start.x = (float)(undefined4)uStack_20;
            start.y = (float)uStack_20._4_4_;
            end.y = VStack_10.y;
            end.x = VStack_10.x;
            end.z = VStack_10.z;
            uStack_20 = uVar28;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_2
                      (start,end,(MethodInfo *)0x0);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < 4);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void GetBoundRays(Ray, ICubeModelCollider) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetBoundRays
               (Ray ray,ICubeModelCollider *cmb,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  fStack_1 = ray.m_Origin.x;
  pSStack_2 = (String *)ray.m_Origin.y;
  fVar3 = ray.m_Direction.y;
  fVar4 = ray.m_Direction.z;
  uVar5 = ray.m_Direction._4_8_;
  pSVar6 = (String *)ray.m_Origin.z;
  fVar7 = ray.m_Direction.x;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
    uVar5._4_4_ = fVar4;
    uVar5._0_4_ = fVar3;
  }
  ray_00.m_Origin.y = (float)pSStack_2;
  ray_00.m_Origin.x = fStack_1;
  ray_00.m_Origin.z = (float)pSVar6;
  ray_00.m_Direction.x = fVar7;
  ray_00.m_Direction.y = (float)uVar5;
  ray_00.m_Direction.z = SUB84(uVar5,4);
  pVVar8 = MVSweptElipsoidCheck_GetMaxAngleLocalAxisVector
                     ((Vector3 *)&stack0xffffffa8,ray_00,cmb,(MethodInfo *)0x0);
  uVar9 = pVVar8->x;
  uVar10 = pVVar8->y;
  fVar7 = pVVar8->z;
  pRVar11 = mscorlib.dll::System::Collections::Generic::
           Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                     ((Regex_CachedCodeEntryKey *)&stack0xffffffa8,
                      (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&ray,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
            ((Vector3 *)&stack0xffffffa8,
             &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace,(Vector3)*pRVar11,
             (MethodInfo *)0x0);
  vector.y = (float)uVar10;
  vector.x = (float)uVar9;
  vector.z = fVar7;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
            ((Vector3 *)&stack0xffffffa8,
             &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace,vector,
             (MethodInfo *)0x0);
  puVar12 = (undefined8 *)func_?();
  uVar5 = *puVar12;
  pSVar6 = *(String **)(puVar12 + 1);
  puVar12 = (undefined8 *)func_?();
  fVar4 = (float)uVar5;
  pSVar13 = SUB84(uVar5,4);
  fVar7 = *(float *)(puVar12 + 1);
  fVar3 = *(float *)(puVar12 + 1);
  fVar14 = (float)*puVar12;
  fVar15 = (float)((ulonglong)*puVar12 >> 0x20);
  pVVar16 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
  if (pVVar16 != (Vector3__Array *)0x0) {
    if (pVVar16->max_length != 0) {
      pVVar16->vector[0].x = fVar4 + fVar14;
      pVVar16->vector[0].y = (float)pSVar13 + fVar15;
      pVVar16->vector[0].z = (float)pSVar6 + fVar3;
      uVar17 = __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
      pVVar16 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      if (1 < pVVar16->max_length) {
        pVVar16->vector[1].x = fVar4 - fVar14;
        pVVar16->vector[1].y = (float)((float)pSVar13 - fVar15);
        pVVar16->vector[1].z = (float)pSVar6 - fVar7;
        pVVar16 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
        if (2 < pVVar16->max_length) {
          pVVar16->vector[2].x = fVar14 + (float)((uint)fVar4 ^ uVar17);
          pVVar16->vector[2].y = (float)(fVar15 + (float)((uint)pSVar13 ^ uVar17));
          pVVar16->vector[2].z = fVar7 + (float)((uint)pSVar6 ^ uVar17);
          pVVar16 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
          if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
          if (3 < pVVar16->max_length) {
            uVar18 = 0;
            iVar19 = 0;
            pVVar16->vector[3].x = (float)((uint)fVar4 ^ uVar17) - fVar14;
            pVVar16->vector[3].y = (float)((float)((uint)pSVar13 ^ uVar17) - fVar15);
            pVVar16->vector[3].z = (float)((uint)pSVar6 ^ uVar17) - fVar7;
            puVar20 = (undefined *)0x0;
            while( true ) {
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar16 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
              if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
              if ((int)pVVar16->max_length <= (int)uVar18) {
                return;
              }
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pRVar21 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
              if ((pRVar21 == (Ray__Array *)0x0) ||
                 (pVVar16 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays,
                 pVVar16 == (Vector3__Array *)0x0)) goto code_?;
              if (pVVar16->max_length <= uVar18) break;
              vector_00.z = *(float *)(puVar20 + 8 + (int)&pVVar16->vector[0].x);
              vector_00._0_8_ = *(undefined8 *)(puVar20 + (int)&pVVar16->vector[0].x);
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                 ((Vector3 *)&stack0xffffff98,
                                  &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                   elipsoidSpaceToWorld,vector_00,(MethodInfo *)0x0);
              this = (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)pVVar8->x;
              method_00 = (MethodInfo *)pVVar8->y;
              fVar7 = pVVar8->z;
              pRVar11 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                       RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                       KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                 ((Regex_CachedCodeEntryKey *)&stack0xffffff88,this,method_00);
              uVar22 = pRVar11->_options;
              uVar23 = pRVar11->_cultureKey;
              if (pRVar21->max_length <= uVar18) break;
              value.y = (float)uVar23 + (float)method_00;
              value.x = (float)uVar22 + (float)this;
              value.z = (float)pRVar11->_pattern + fVar7;
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
              ParticleSystem_Particle_set_position
                        ((ParticleSystem_Particle *)((int)&pRVar21->vector[0].m_Origin.x + iVar19),
                         value,(MethodInfo *)0x0);
              pRVar21 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
              if (pRVar21 == (Ray__Array *)0x0) goto code_?;
              pRVar11 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text
                       ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                 ((Regex_CachedCodeEntryKey *)&fStack_1,
                                  (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                   *)&ray,(MethodInfo *)0x0);
              if (pRVar21->max_length <= uVar18) break;
              puVar20 = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_set_direction
                        ((Ray *)((int)&pRVar21->vector[0].m_Origin.x + iVar19),(Vector3)*pRVar11,
                         (MethodInfo *)0x0);
              puVar20 = puVar20 + 0xc;
              uVar18 = uVar18 + 1;
              iVar19 = iVar19 + 0x18;
            }
          }
        }
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Vector3 GetMaxAngleLocalAxisVector(Ray, ICubeModelCollider) */

Vector3 * Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetMaxAngleLocalAxisVector
                    (Vector3 *__return_storage_ptr__,Ray ray,ICubeModelCollider *cmb,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (cmb == (ICubeModelCollider *)0x0) {
code_?:
    func_?();
  }
  else {
code_?:
    uVar1 = 0;
    uVar2 = (cmb->klass->_1).interface_offsets_count;
    if (uVar2 != 0) {
      do {
        if (cmb->klass->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          pVVar3 = &(cmb->klass->vtable).get_WorldRotation +
                   cmb->klass->interfaceOffsets[uVar1].offset;
          goto code_?;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    pVVar3 = (VirtualInvokeData *)func_?(cmb,TypeInfo__ICubeModelCollider,6);
code_?:
    pQVar4 = (Quaternion *)(*pVVar3->methodPtr)(afStack_5,cmb,pVVar3->method);
    rotation = *pQVar4;
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVSweptElipsoidCheck);
    }
    pVVar6 = TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector;
    if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar6->max_length != 0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (aVStack_8,rotation,pVVar6->vector[0],(MethodInfo *)0x0);
      fVar9 = pVVar7->z;
      pRVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          ((Regex_CachedCodeEntryKey *)(afStack_5 + 5),
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&ray,(MethodInfo *)0x0);
      uVar11 = pRVar10->_options;
      uVar12 = pRVar10->_cultureKey;
      pSVar13 = pRVar10->_pattern;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      afStack_5[0] = fStack_14;
      afStack_5[1] = 0.0;
      afStack_5[2] = 0.0;
      afStack_5[3] = 0.0;
      dVar15 = (double)(fStack_16 * fStack_16 + fStack_14 * fStack_14 + fStack_17 * fStack_17);
      if (dVar15 < 0.0) {
        func_?();
      }
      else {
        dVar15 = SQRT(dVar15);
      }
      fVar18 = (float)dVar15;
      if (_UNK_? < fVar18) {
        fVar19 = fStack_17 / fVar18;
        uVar20 = CONCAT44(fStack_16 / fVar18,afStack_5[0] / fVar18);
        fStack_21 = fVar19;
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar20._0_4_ = (pVVar22->zeroVector).x;
        uVar20._4_4_ = (pVVar22->zeroVector).y;
        fVar19 = (pVVar22->zeroVector).z;
      }
      fStack_23 = (float)uVar20;
      fStack_24 = (float)((ulonglong)uVar20 >> 0x20);
      fVar18 = (float)((uint)(fStack_24 * (float)uVar12 + fStack_23 * (float)uVar11 +
                             fVar19 * (float)pSVar13) & _UNK_?);
      if (fVar18 < fStack_25) {
        __return_storage_ptr__->x = aVStack_8[0].x;
        __return_storage_ptr__->y = aVStack_8[0].y;
        __return_storage_ptr__->z = fVar9;
        fStack_25 = fVar18;
      }
      goto code_?;
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar26)();
  return pVVar7;
}


/* Vector3 GetPlaneNormal(Vector3) */

Vector3 * Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetPlaneNormal
                    (Vector3 *__return_storage_ptr__,Vector3 localDir,MethodInfo *method)

{
  if (((float)((uint)localDir.x & _UNK_?) < (float)((uint)localDir.y & _UNK_?)) ||
     ((float)((uint)localDir.x & _UNK_?) < (float)((uint)localDir.z & _UNK_?))) {
    if (((float)((uint)localDir.x & _UNK_?) <= (float)((uint)localDir.y & _UNK_?)) &&
       ((float)((uint)localDir.z & _UNK_?) <= (float)((uint)localDir.y & _UNK_?))) {
      fStack_1 = 0.0;
      fStack_2 = 0.0;
      if (0.0 <= localDir.y) {
        fVar3 = (float10)func_?((double)localDir.y);
        fVar4 = (float)fVar3;
      }
      else {
        fVar3 = (float10)func_?((double)localDir.y);
        fVar4 = (float)fVar3;
      }
      goto code_?;
    }
    fStack_2 = 0.0;
    if (0.0 <= localDir.z) {
      fVar3 = (float10)func_?((double)localDir.z);
    }
    else {
      fVar3 = (float10)func_?((double)localDir.z);
    }
    fStack_1 = (float)fVar3;
  }
  else {
    fStack_1 = 0.0;
    if (0.0 <= localDir.x) {
      fVar3 = (float10)func_?((double)localDir.x);
      fStack_2 = (float)fVar3;
    }
    else {
      fVar3 = (float10)func_?((double)localDir.x);
      fStack_2 = (float)fVar3;
    }
  }
  fVar4 = 0.0;
code_?:
  fVar4 = fVar4 * _UNK_?;
  fStack_1 = fStack_1 * _UNK_?;
  __return_storage_ptr__->x = fStack_2 * _UNK_?;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fStack_1;
  return __return_storage_ptr__;
}


/* Void GetRaysProjectedOnPlane(Ray[], Plane ByRef, Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetRaysProjectedOnPlane
               (Ray__Array *boundRays,Plane *projectPlane,Vector3 planeOrigin,Vector3 planeNormal,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
  if (boundRays == (Ray__Array *)0x0) {
code_?:
    func_?();
    goto code_?;
  }
  if (boundRays->max_length == 0) goto code_?;
  pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                      (&RStack_3,
                       (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)boundRays->vector,(MethodInfo *)0x0);
  if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
  pSVar4 = pRVar2->_cultureKey;
  pSVar5 = pRVar2->_pattern;
  if (pVVar1->max_length == 0) goto code_?;
  pVVar1->vector[0].x = (float)pRVar2->_options;
  pVVar1->vector[0].y = (float)pSVar4;
  pVVar1->vector[0].z = (float)pSVar5;
  pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
  if (boundRays->max_length < 2) {
code_?:
    func_?();
  }
  else {
    pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        (&RStack_3,
                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)(boundRays->vector + 1),(MethodInfo *)0x0);
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    pSVar4 = pRVar2->_cultureKey;
    pSVar5 = pRVar2->_pattern;
    if (pVVar1->max_length < 2) {
code_?:
      func_?();
      goto code_?;
    }
    pVVar1->vector[1].x = (float)pRVar2->_options;
    pVVar1->vector[1].y = (float)pSVar4;
    pVVar1->vector[1].z = (float)pSVar5;
    pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
    if (2 < boundRays->max_length) {
      pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_3,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)(boundRays->vector + 2),(MethodInfo *)0x0);
      if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
      pSVar4 = pRVar2->_cultureKey;
      pSVar5 = pRVar2->_pattern;
      if (2 < pVVar1->max_length) {
        pVVar1->vector[2].x = (float)pRVar2->_options;
        pVVar1->vector[2].y = (float)pSVar4;
        pVVar1->vector[2].z = (float)pSVar5;
        pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
        if (boundRays->max_length < 4) goto code_?;
        pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_3,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)(boundRays->vector + 3),(MethodInfo *)0x0);
        if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
        pSVar4 = pRVar2->_cultureKey;
        pSVar5 = pRVar2->_pattern;
        if (3 < pVVar1->max_length) {
          pVVar1->vector[3].x = (float)pRVar2->_options;
          pVVar1->vector[3].y = (float)pSVar4;
          pVVar1->vector[3].z = (float)pSVar5;
          pMVar6 = (MethodInfo *)0x0;
          pRStack_7 = boundRays->vector;
          iStack_8 = 0;
          while (pMVar6 < (MethodInfo *)boundRays->max_length) {
            method_00 = (MethodInfo *)(pRStack_7->m_Origin).x;
            uVar9 = (pRStack_7->m_Origin).x;
            uVar10 = (pRStack_7->m_Origin).y;
            uVar11 = (pRStack_7->m_Origin).z;
            ray.m_Origin.z = (float)uVar11;
            ray.m_Origin.y = (float)uVar10;
            ray.m_Origin.x = (float)uVar9;
            uVar12 = (pRStack_7->m_Direction).x;
            ray.m_Direction.x = (float)uVar12;
            uStack_13._0_4_ = (pRStack_7->m_Direction).y;
            uStack_13._4_4_ = (pRStack_7->m_Direction).z;
            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVSweptElipsoidCheck);
            }
            pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
            if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
            if ((MethodInfo *)pVVar1->max_length <= pMVar6) break;
            ray.m_Direction.y = (float)(undefined4)uStack_13;
            ray.m_Direction.z = (float)uStack_13._4_4_;
            bVar14 = MVSweptElipsoidCheck_RayCast
                              (ray,(Vector3 *)((int)&pVVar1->vector[0].x + iStack_8),*projectPlane,
                               (MethodInfo *)0x0);
            if (bVar14 == 0) {
              method_01 = pMVar6;
              this = (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)func_?();
              pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  (&RStack_15,this,method_01);
              uStack_13._0_4_ = pRVar2->_options;
              uStack_13._4_4_ = pRVar2->_cultureKey;
              pSVar5 = pRVar2->_pattern;
              this_00 = (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)func_?();
              pRVar2 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text
                        ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                  (&RStack_16,this_00,method_00);
              uStack_17._0_4_ = pRVar2->_options;
              uStack_17._4_4_ = pRVar2->_cultureKey;
              pSStack_18 = pRVar2->_pattern;
              RStack_3._pattern =
                   (String *)
                   ((uint)pSStack_18 ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar22 = 0.0;
              uVar23._0_4_ = 0.0;
              uVar23._4_4_ = 0.0;
              origin.z = (float)pSVar5;
              origin.x = (float)(undefined4)uStack_13;
              origin.y = (float)uStack_13._4_4_;
              direction.y = (float)(uStack_17._4_4_ ^
                                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                   );
              direction.x = (float)((undefined4)uStack_17 ^
                                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                   );
              direction.z = (float)RStack_3._pattern;
              UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                        ((Ray *)&stack0xffffff60,origin,direction,(MethodInfo *)0x0);
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVSweptElipsoidCheck);
              }
              if (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane ==
                  (Vector3__Array *)0x0) goto code_?;
              collPlane = *projectPlane;
              hit = (Vector3 *)func_?(pMVar6);
              ray_00.m_Origin.y = fVar20;
              ray_00.m_Origin.x = fVar19;
              ray_00.m_Origin.z = fVar21;
              ray_00.m_Direction.x = fVar22;
              ray_00.m_Direction.y = (float)uVar23;
              ray_00.m_Direction.z = SUB84(uVar23,4);
              MVSweptElipsoidCheck_RayCast(ray_00,hit,collPlane,(MethodInfo *)0x0);
            }
            pMVar6 = (MethodInfo *)((int)&pMVar6->methodPointer + 1);
            iStack_8 = iStack_8 + 0xc;
            pRStack_7 = pRStack_7 + 1;
            if (0x2f < iStack_8) {
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Int32 GetScanAxis(Vector3) */

int32_t Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetScanAxis
                  (Vector3 scanRectNormal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_No_scan_axis_found_);
    cRam_? = '\x01';
  }
  index = 0;
  do {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                      (&scanRectNormal,index,(MethodInfo *)0x0);
    if (_UNK_? < (float)((uint)fVar1 & _UNK_?)) {
      return index;
    }
    index = index + 1;
  } while (index < 3);
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_ToString
                     ((Vector3 *)scanRectNormal.x,(MethodInfo *)scanRectNormal.y);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_No_scan_axis_found_,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    scanRectNormal.x = (float)TypeInfo__UnityEngine__Debug;
    func_?();
  }
  scanRectNormal.x = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)pSVar2,(MethodInfo *)0x0);
  return -1;
}


/* Void HandleCube(VoxelHit ByRef, IntVector, Vector3, Single, CollisionState ByRef) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleCube
               (VoxelHit *vh,IntVector pos,Vector3 radius,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  uVar1 = CONCAT22(pos.y,pos.x);
  bStack_2 = 0;
  uStack_3 = CONCAT44(uVar1,(undefined4)uStack_3);
  uStack_4 = CONCAT22(pos.z,(undefined2)uStack_4);
  uStack_5._2_2_ = pos.z;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    uVar1 = CONCAT22(pos.y,pos.x);
    uStack_4 = CONCAT22(pos.z,(undefined2)uStack_4);
  }
  if (uStack_3._4_2_ < (collisionState->minBounds).x) {
    return;
  }
  if (uStack_3._6_2_ < (collisionState->minBounds).y) {
    return;
  }
  if (uStack_5._2_2_ < (collisionState->minBounds).z) {
    return;
  }
  if ((collisionState->maxBounds).x < uStack_3._4_2_) {
    return;
  }
  if ((collisionState->maxBounds).y < uStack_3._6_2_) {
    return;
  }
  if ((collisionState->maxBounds).z < uStack_5._2_2_) {
    return;
  }
  uStack_3 = CONCAT44(uVar1,(undefined4)uStack_3);
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  uStack_5 = (Cube *)collisionState->scaledMaxRadius;
  iVar6 = (int)uStack_3._6_2_;
  fStack_7 = (float)(int)uStack_3._4_2_;
  fStack_8 = 0.0;
  uStack_9 = 0;
  uStack_10 = 0;
  fStack_11 = 0.0;
  fStack_12 = (float)(int)uStack_4._2_2_;
  uVar13 = (collisionState->localOrigin).x;
  uVar14 = (collisionState->localOrigin).y;
  uVar15 = (collisionState->localDirection).x;
  uVar16 = (collisionState->localDirection).y;
  uStack_3._0_4_ = (collisionState->localOrigin).x;
  uStack_3._4_4_ = (collisionState->localOrigin).y;
  pVStack_17 = (Vector3__Array *)(collisionState->localOrigin).z;
  uStack_18._0_4_ = (collisionState->localDirection).x;
  uStack_18._4_4_ = (collisionState->localDirection).y;
  fStack_19 = (collisionState->localDirection).z;
  point.y = (float)iVar6;
  point.x = fStack_7;
  lineStart.y = (float)uVar14 - (float)uVar16 * _UNK_?;
  lineStart.x = (float)uVar13 - (float)uVar15 * _UNK_?;
  point.z = fStack_12;
  lineStart.z = (collisionState->localOrigin).z - (collisionState->localDirection).z * _UNK_?
  ;
  lineEnd.y = (float)uStack_3._4_4_ + uStack_18._4_4_ * _UNK_?;
  lineEnd.x = (float)(undefined4)uStack_3 + (float)uStack_18 * _UNK_?;
  lineEnd.z = (float)pVStack_17 + fStack_19 * _UNK_?;
  MathFunctions::MathFunctions_DistancePointLine
            (point,lineStart,lineEnd,&fStack_8,(MethodInfo *)0x0);
  if ((float)uStack_5 + _UNK_? < fStack_8) {
    return;
  }
  if (collisionState->cmb != (ICubeModelCollider *)0x0) {
    pCVar20 = (Cube *)func_?();
    uStack_5 = pCVar20;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar21 = 0.0;
    this = (Matrix4x4 *)0x0;
    __return_storage_ptr__ = pCVar20;
    bVar22 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      ((CubeBase *)pCVar20,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar22 == 0) {
      return;
    }
    if (pCVar20 != (Cube *)0x0) {
      if ((pCVar20->fields).hiddenSides == 0x3f) {
        return;
      }
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                ((CubeBase *)pCVar20,
                 &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace,
                 (MethodInfo *)0x0);
      iStack_23 = (int)pos.z;
      iVar6 = (int)pos.x;
      uStack_4 = 0;
      iVar24 = (int)pos.y;
      fStack_8 = 0.0;
      while( true ) {
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar25 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar25 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar25->max_length <= (int)uStack_4) {
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVVar25 = (Vector3__Array *)
                    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
          uStack_4 = 0;
          pCVar20 = uStack_5;
          pVStack_26 = pVVar25;
          if (pVVar25 == (Vector3__Array *)0x0) goto code_?;
          goto code_?;
        }
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar25 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar25 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar25->max_length <= uStack_4) break;
        fStack_19 = *(float *)((int)&pVVar25->vector[0].z + (int)fStack_8);
        uVar27 = *(undefined8 *)((int)&pVVar25->vector[0].x + (int)fStack_8);
        uStack_18._0_4_ = (float)uVar27;
        uStack_18._4_4_ = (float)((ulonglong)uVar27 >> 0x20);
        *(ulonglong *)((int)&pVVar25->vector[0].x + (int)fStack_8) =
             CONCAT44(uStack_18._4_4_ + (float)iVar24,(float)uStack_18 + (float)iVar6);
        *(float *)((int)&pVVar25->vector[0].z + (int)fStack_8) = fStack_19 + (float)iStack_23;
        pVStack_17 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        pVStack_26 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        uStack_18 = uVar27;
        if (pVStack_26 == (Vector3__Array *)0x0) goto code_?;
        if (pVStack_26->max_length <= uStack_4) break;
        uVar27 = *(undefined8 *)((int)&pVStack_26->vector[0].x + (int)fStack_8);
        fVar21 = (float)uVar27;
        this = &collisionState->localToElipsoidSpace;
        __return_storage_ptr__ = (Cube *)&stack0xffffff80;
        point_00.z = *(float *)((int)&pVStack_26->vector[0].z + (int)fStack_8);
        point_00.x = (float)(int)uVar27;
        point_00.y = (float)(int)((ulonglong)uVar27 >> 0x20);
        pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)__return_storage_ptr__,this,point_00,(MethodInfo *)0x0);
        pVStack_26 = (Vector3__Array *)pVVar28->z;
        if (pVStack_17->max_length <= uStack_4) break;
        *(undefined8 *)((int)&pVStack_17->vector[0].x + (int)fStack_8) = *(undefined8 *)pVVar28;
        *(Vector3__Array **)((int)&pVStack_17->vector[0].z + (int)fStack_8) = pVStack_26;
        uStack_4 = uStack_4 + 1;
        fStack_8 = (float)((int)fStack_8 + 0xc);
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
code_?:
  if ((int)pVVar25->max_length <= (int)uStack_4) {
    if ((bStack_2 != 0) && (collisionState->firstHitDetected == 0)) {
      iVar30 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                        (&pos,collisionState->scanAxis,(MethodInfo *)0x0);
      collisionState->firstHitScanAxis = (int)iVar30;
      collisionState->firstHitDetected = 1;
    }
    return;
  }
  if (pVVar25->max_length <= uStack_4) goto code_?;
  bVar31 = *(byte *)((int)&pVVar25->vector[0].x + uStack_4);
  pVStack_17 = (Vector3__Array *)CONCAT31(pVStack_17._1_3_,bVar31);
  if (((pCVar20->fields).hiddenSides & bVar31) == 0) {
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar25 = pVStack_17;
    fStack_8 = (float)MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                                 ((FaceFlags__Enum)pVStack_17,(MethodInfo *)0x0);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                     ((FaceFlags__Enum)pVVar25,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
              (&TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace,
               &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace,face,
               (MethodInfo *)0x0);
    if (((TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
          (Vector3__Array *)0x0) ||
        (func_?(),
        TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0)) ||
       (func_?(),
       TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
       (Vector3__Array *)0x0)) goto code_?;
    func_?();
    uVar1 = CONCAT22(pos.y,pos.x);
    method_00 = (MethodInfo *)0x0;
    pCVar32 = collisionState;
    pfVar33 = (float *)&stack0xfffffdb4;
    for (iVar6 = 0x31; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar33 = (pCVar32->localOrigin).x;
      pCVar32 = (CollisionState *)&(pCVar32->localOrigin).y;
      pfVar33 = pfVar33 + 1;
    }
    p1_00.y = (float)uStack_10;
    p1_00.x = (float)uStack_9;
    p1_00.z = fStack_11;
    p2_00.z = fStack_34;
    p2_00.x = (float)(undefined4)uStack_35;
    p2_00.y = (float)uStack_35._4_4_;
    p3_00.z = fStack_19;
    p3_00.x = (float)uStack_18;
    p3_00.y = uStack_18._4_4_;
    pos_01.z = pos.z;
    pos_01.x = pos.x;
    pos_01.y = pos.y;
    collisionState_01.scaledMaxRadius = (float)in_stack_36;
    auVar37 = in_stack_38._0_12_;
    auVar39 = in_stack_38._12_12_;
    auVar40 = in_stack_38._24_12_;
    auVar41 = in_stack_38._36_12_;
    auVar42 = in_stack_38._48_12_;
    auVar43 = in_stack_38._60_12_;
    auVar44 = in_stack_38._76_64_;
    uVar45 = in_stack_38._144_6_;
    uVar46 = in_stack_38._150_6_;
    collisionState_01.localOrigin.x = (float)auVar37._0_4_;
    collisionState_01.localOrigin.y = (float)auVar37._4_4_;
    collisionState_01.localOrigin.z = (float)auVar37._8_4_;
    collisionState_01.localHitPoint.x = (float)auVar39._0_4_;
    collisionState_01.localHitPoint.y = (float)auVar39._4_4_;
    collisionState_01.localHitPoint.z = (float)auVar39._8_4_;
    collisionState_01.localNormal.x = (float)auVar40._0_4_;
    collisionState_01.localNormal.y = (float)auVar40._4_4_;
    collisionState_01.localNormal.z = (float)auVar40._8_4_;
    collisionState_01.localDirection.x = (float)auVar41._0_4_;
    collisionState_01.localDirection.y = (float)auVar41._4_4_;
    collisionState_01.localDirection.z = (float)auVar41._8_4_;
    collisionState_01.origin.x = (float)auVar42._0_4_;
    collisionState_01.origin.y = (float)auVar42._4_4_;
    collisionState_01.origin.z = (float)auVar42._8_4_;
    collisionState_01.direction.x = (float)auVar43._0_4_;
    collisionState_01.direction.y = (float)auVar43._4_4_;
    collisionState_01.direction.z = (float)auVar43._8_4_;
    collisionState_01.cmb = (ICubeModelCollider *)in_stack_38._72_4_;
    collisionState_01.localToElipsoidSpace.m00 = (float)auVar44._0_4_;
    collisionState_01.localToElipsoidSpace.m10 = (float)auVar44._4_4_;
    collisionState_01.localToElipsoidSpace.m20 = (float)auVar44._8_4_;
    collisionState_01.localToElipsoidSpace.m30 = (float)auVar44._12_4_;
    collisionState_01.localToElipsoidSpace.m01 = (float)auVar44._16_4_;
    collisionState_01.localToElipsoidSpace.m11 = (float)auVar44._20_4_;
    collisionState_01.localToElipsoidSpace.m21 = (float)auVar44._24_4_;
    collisionState_01.localToElipsoidSpace.m31 = (float)auVar44._28_4_;
    collisionState_01.localToElipsoidSpace.m02 = (float)auVar44._32_4_;
    collisionState_01.localToElipsoidSpace.m12 = (float)auVar44._36_4_;
    collisionState_01.localToElipsoidSpace.m22 = (float)auVar44._40_4_;
    collisionState_01.localToElipsoidSpace.m32 = (float)auVar44._44_4_;
    collisionState_01.localToElipsoidSpace.m03 = (float)auVar44._48_4_;
    collisionState_01.localToElipsoidSpace.m13 = (float)auVar44._52_4_;
    collisionState_01.localToElipsoidSpace.m23 = (float)auVar44._56_4_;
    collisionState_01.localToElipsoidSpace.m33 = (float)auVar44._60_4_;
    collisionState_01.scanAxis = in_stack_38._140_4_;
    collisionState_01.minBounds.x = (short)uVar45;
    collisionState_01.minBounds.y = (short)((uint6)uVar45 >> 0x10);
    collisionState_01.minBounds.z = (short)((uint6)uVar45 >> 0x20);
    collisionState_01.maxBounds.x = (short)uVar46;
    collisionState_01.maxBounds.y = (short)((uint6)uVar46 >> 0x10);
    collisionState_01.maxBounds.z = (short)((uint6)uVar46 >> 0x20);
    collisionState_01.firstHitScanAxis = in_stack_38._156_4_;
    collisionState_01.firstHitDetected = in_stack_38[0xa0];
    collisionState_01._161_3_ = in_stack_38._161_3_;
    auVar37 = in_stack_47._0_12_;
    auVar39 = in_stack_47._12_12_;
    collisionState_01.elipsoidSpaceOrigin.x = (float)auVar37._0_4_;
    collisionState_01.elipsoidSpaceOrigin.y = (float)auVar37._4_4_;
    collisionState_01.elipsoidSpaceOrigin.z = (float)auVar37._8_4_;
    collisionState_01.elipsoidSpaceDirection.x = (float)auVar39._0_4_;
    collisionState_01.elipsoidSpaceDirection.y = (float)auVar39._4_4_;
    collisionState_01.elipsoidSpaceDirection.z = (float)auVar39._8_4_;
    collisionState_01.elipsoidSpaceDistance = (float)in_stack_47._24_4_;
    fVar48 = distance;
    fVar49 = fStack_8;
    pCVar20 = uStack_5;
    uVar27 = radius._0_8_;
    fVar50 = radius.z;
    iVar30 = pos.z;
    bVar22 = MVSweptElipsoidCheck_HandleTriangleTest
                      (p1_00,p2_00,p3_00,vh,distance,(Face__Enum)fStack_8,uStack_5,radius,pos_01,
                       collisionState_01,method_00);
    bStack_2 = bVar22 != 0 || bStack_2 != 0;
    if (((TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
          (Vector3__Array *)0x0) ||
        (func_?(),
        TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0)) ||
       (func_?(),
       TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
       (Vector3__Array *)0x0)) goto code_?;
    fVar51 = 0.0;
    pMVar52 = (MonitorData *)&uStack_53;
    pCVar54 = (Cube__Class *)&UNK_?;
    func_?();
    pos_00.y = pos.y;
    pos_00.x = pos.x;
    in_stack_36 = (MethodInfo *)0x0;
    pCVar32 = collisionState;
    pfVar33 = (float *)&stack0xfffffd94;
    for (iVar6 = 0x31; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar33 = (pCVar32->localOrigin).x;
      pCVar32 = (CollisionState *)&(pCVar32->localOrigin).y;
      pfVar33 = pfVar33 + 1;
    }
    p2.y = (float)pMVar52;
    p2.x = (float)pCVar54;
    p1.y = (float)this;
    p1.x = (float)__return_storage_ptr__;
    p1.z = fVar21;
    p2.z = fVar51;
    p3.z = fStack_12;
    p3.x = (float)(undefined4)uStack_53;
    p3.y = (float)uStack_53._4_4_;
    pos_00.z = pos.z;
    collisionState_00.localOrigin.y = fVar49;
    collisionState_00.localOrigin.x = fVar48;
    collisionState_00.localOrigin.z = (float)pCVar20;
    collisionState_00.localHitPoint.x = (float)uVar27;
    collisionState_00.localHitPoint.y = SUB84(uVar27,4);
    collisionState_00.localHitPoint.z = fVar50;
    collisionState_00.localNormal.x = (float)uVar1;
    collisionState_00.localNormal.y._0_2_ = iVar30;
    collisionState_00.localNormal.y._2_2_ = in_stack_55;
    auVar37 = in_stack_38._4_12_;
    auVar39 = in_stack_38._16_12_;
    auVar40 = in_stack_38._28_12_;
    auVar44 = in_stack_38._44_64_;
    uVar45 = in_stack_38._112_6_;
    uVar46 = in_stack_38._118_6_;
    auVar41 = in_stack_38._136_12_;
    auVar42 = in_stack_38._148_12_;
    collisionState_00.localNormal.z = (float)in_stack_38._0_4_;
    collisionState_00.localDirection.x = (float)auVar37._0_4_;
    collisionState_00.localDirection.y = (float)auVar37._4_4_;
    collisionState_00.localDirection.z = (float)auVar37._8_4_;
    collisionState_00.origin.x = (float)auVar39._0_4_;
    collisionState_00.origin.y = (float)auVar39._4_4_;
    collisionState_00.origin.z = (float)auVar39._8_4_;
    collisionState_00.direction.x = (float)auVar40._0_4_;
    collisionState_00.direction.y = (float)auVar40._4_4_;
    collisionState_00.direction.z = (float)auVar40._8_4_;
    collisionState_00.cmb = (ICubeModelCollider *)in_stack_38._40_4_;
    collisionState_00.localToElipsoidSpace.m00 = (float)auVar44._0_4_;
    collisionState_00.localToElipsoidSpace.m10 = (float)auVar44._4_4_;
    collisionState_00.localToElipsoidSpace.m20 = (float)auVar44._8_4_;
    collisionState_00.localToElipsoidSpace.m30 = (float)auVar44._12_4_;
    collisionState_00.localToElipsoidSpace.m01 = (float)auVar44._16_4_;
    collisionState_00.localToElipsoidSpace.m11 = (float)auVar44._20_4_;
    collisionState_00.localToElipsoidSpace.m21 = (float)auVar44._24_4_;
    collisionState_00.localToElipsoidSpace.m31 = (float)auVar44._28_4_;
    collisionState_00.localToElipsoidSpace.m02 = (float)auVar44._32_4_;
    collisionState_00.localToElipsoidSpace.m12 = (float)auVar44._36_4_;
    collisionState_00.localToElipsoidSpace.m22 = (float)auVar44._40_4_;
    collisionState_00.localToElipsoidSpace.m32 = (float)auVar44._44_4_;
    collisionState_00.localToElipsoidSpace.m03 = (float)auVar44._48_4_;
    collisionState_00.localToElipsoidSpace.m13 = (float)auVar44._52_4_;
    collisionState_00.localToElipsoidSpace.m23 = (float)auVar44._56_4_;
    collisionState_00.localToElipsoidSpace.m33 = (float)auVar44._60_4_;
    collisionState_00.scanAxis = in_stack_38._108_4_;
    collisionState_00.minBounds.x = (short)uVar45;
    collisionState_00.minBounds.y = (short)((uint6)uVar45 >> 0x10);
    collisionState_00.minBounds.z = (short)((uint6)uVar45 >> 0x20);
    collisionState_00.maxBounds.x = (short)uVar46;
    collisionState_00.maxBounds.y = (short)((uint6)uVar46 >> 0x10);
    collisionState_00.maxBounds.z = (short)((uint6)uVar46 >> 0x20);
    collisionState_00.firstHitScanAxis = in_stack_38._124_4_;
    collisionState_00.firstHitDetected = in_stack_38[0x80];
    collisionState_00._161_3_ = in_stack_38._129_3_;
    collisionState_00.scaledMaxRadius = (float)in_stack_38._132_4_;
    collisionState_00.elipsoidSpaceOrigin.x = (float)auVar41._0_4_;
    collisionState_00.elipsoidSpaceOrigin.y = (float)auVar41._4_4_;
    collisionState_00.elipsoidSpaceOrigin.z = (float)auVar41._8_4_;
    collisionState_00.elipsoidSpaceDirection.x = (float)auVar42._0_4_;
    collisionState_00.elipsoidSpaceDirection.y = (float)auVar42._4_4_;
    collisionState_00.elipsoidSpaceDirection.z = (float)auVar42._8_4_;
    collisionState_00.elipsoidSpaceDistance = (float)in_stack_38._160_4_;
    bVar22 = MVSweptElipsoidCheck_HandleTriangleTest
                      (p1,p2,p3,vh,distance,(Face__Enum)fStack_8,uStack_5,radius,pos_00,
                       collisionState_00,in_stack_36);
    bStack_2 = bStack_2 | bVar22;
    pVVar25 = pVStack_26;
    pCVar20 = uStack_5;
  }
  uStack_4 = uStack_4 + 1;
  goto code_?;
}


/* Void HandleObjectsInsideBoxCollider(Ray, Vector3, Quaternion, Single, Single, Int32,
   PhysicsCollisionDatasWrapper, VoxelHit ByRef, Ray[], HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleObjectsInsideBoxCollider
               (Ray ray,Vector3 radius,Quaternion rotation,float maxRadius,float distance,
               int32_t indexOfFirstHit,PhysicsCollisionDatasWrapper *collisionData,
               VoxelHit *voxelHit,Ray__Array *boundRays,HashSet_1_System_Int32_ *ignoreWoIds,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__BoxCollider);
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffac,0,0x48);
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    while( true ) {
      while( true ) {
        do {
          indexOfFirstHit = indexOfFirstHit + 1;
          if ((collisionData->fields).length <= indexOfFirstHit) {
            return;
          }
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                           );
            cRam_? = '\x01';
          }
          this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (collisionData->fields).physicsCollisionDatas;
          if ((this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
             (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this,indexOfFirstHit,
                                 MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                                ), RVar1 == (RegexCharClass_SingleRange)0x0)) goto code_?;
          pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                             (*(Transform **)((int)RVar1 + 0x14),(MethodInfo *)0x0);
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            cRam_? = '\x01';
          }
          unaff_EBX = pMVar2;
        } while ((pMVar2 == (MVWorldObjectClient *)0x0) ||
                ((ignoreWoIds != (HashSet_1_System_Int32_ *)0x0 &&
                 (bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                          HashSet_1_System_Int32__Contains
                                    (ignoreWoIds,(pMVar2->fields)._.id,
                                     MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                    ), bVar3 != 0))));
        iVar4 = func_?(pMVar2,TypeInfo__ICubeModelCollider);
        if (iVar4 != 0) break;
        pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
        if (pPVar5 == (PhysicsCollisionData *)0x0) goto code_?;
        if ((pPVar5->fields).isInsideCollider == 0) {
          fVar6 = voxelHit->distance;
          pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
          if (pPVar5 == (PhysicsCollisionData *)0x0) goto code_?;
          pfVar7 = &(pPVar5->fields).distance;
          if (*pfVar7 <= fVar6 && fVar6 != *pfVar7) {
            pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                               (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
            woId = (pMVar2->fields)._.id;
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,pPVar5,woId,(MethodInfo *)0x0);
            return;
          }
        }
      }
      fVar6 = voxelHit->distance;
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if (pPVar5 == (PhysicsCollisionData *)0x0) break;
      if (fVar6 <= (pPVar5->fields).distance) {
        return;
      }
      func_?(&stack0xffffffac,0,0x48);
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if (pPVar5 == (PhysicsCollisionData *)0x0) break;
      unaff_EBX = (MVWorldObjectClient *)(pPVar5->fields).collider;
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVSweptElipsoidCheck);
      }
      pIStack_8 = TypeInfo__ICubeModelCollider;
      wo = (ICubeModelCollider *)func_?(pMVar2,TypeInfo__ICubeModelCollider);
      if (wo == (ICubeModelCollider *)0x0) goto code_?;
      if (unaff_EBX == (MVWorldObjectClient *)0x0) {
        chunk = (BoxCollider *)0x0;
      }
      else {
        chunk = (BoxCollider *)func_?(unaff_EBX,TypeInfo__UnityEngine__BoxCollider);
        if (chunk == (BoxCollider *)0x0) goto code_?;
      }
      bVar3 = MVSweptElipsoidCheck_LayerScan
                        ((VoxelHit *)&stack0xffffffac,radius,maxRadius,chunk,distance,wo,pPVar5,ray,
                         boundRays,(MethodInfo *)0x0);
      if ((bVar3 != 0) &&
         (unaff_EBX = (MVWorldObjectClient *)voxelHit, fStack_9 < voxelHit->distance)) {
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
                  (voxelHit,(VoxelHit *)&stack0xffffffac,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX,TypeInfo__UnityEngine__BoxCollider);
  pMVar2 = unaff_EBX;
code_?:
  func_?(pMVar2,pIStack_8);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean HandleTriangleTest(Vector3, Vector3, Vector3, VoxelHit ByRef, Single, Face, Cube,
   Vector3, IntVector, CollisionState) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleTriangleTest
               (Vector3 p1,Vector3 p2,Vector3 p3,VoxelHit *currentVoxelHit,float distance,
               Face__Enum face,Cube *cube,Vector3 radiusVec,IntVector pos,
               CollisionState collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_this_is_wrong);
    func_?(&StringLiteral_Points___0____1____2_);
    func_?(&StringLiteral_Origin__Direction__distance__0__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  (TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance = INFINITY;
  bVar1 = TriangleCheck::TriangleCheck_CheckTriangle
                     (&p1,&p2,&p3,&collisionState.elipsoidSpaceOrigin,
                      &collisionState.elipsoidSpaceDirection,collisionState.elipsoidSpaceDistance,
                      &TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if ((TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance <=
      collisionState.elipsoidSpaceDistance) {
code_?:
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pfVar2 = &(TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance;
    if (*pfVar2 <= currentVoxelHit->distance && currentVoxelHit->distance != *pfVar2) {
      fVar3 = collisionState.elipsoidSpaceOrigin.x;
      fVar4 = collisionState.elipsoidSpaceOrigin.y;
      fVar5 = collisionState.elipsoidSpaceOrigin.z;
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar6 = TypeInfo__MVSweptElipsoidCheck->static_fields;
      uVar7 = (pMVar6->vhCached).point.x;
      uVar8 = (pMVar6->vhCached).point.y;
      fVar5 = fVar5 - (pMVar6->vhCached).point.z;
      if (_UNK_? <=
          (fVar4 - (float)uVar8) * (fVar4 - (float)uVar8) +
          (fVar3 - (float)uVar7) * (fVar3 - (float)uVar7) + fVar5 * fVar5) {
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        currentVoxelHit->distance =
             (TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)&stack0xffffffb8,
                             &TypeInfo__MVSweptElipsoidCheck->static_fields->elipsoidSpaceToWorld,
                             (TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).point,
                             (MethodInfo *)0x0);
        fVar3 = pVVar9->y;
        fVar5 = pVVar9->z;
        (currentVoxelHit->point).x = pVVar9->x;
        (currentVoxelHit->point).y = fVar3;
        (currentVoxelHit->point).z = fVar5;
        currentVoxelHit->face = face;
        point_00.z = p1.z;
        point_00.x = p1.x;
        point_00.y = p1.y;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)&stack0xffffffb8,
                             &TypeInfo__MVSweptElipsoidCheck->static_fields->elipsoidSpaceToWorld,
                             point_00,(MethodInfo *)0x0);
        fVar5 = pVVar9->z;
        pVVar9 = (Vector3 *)&stack0xffffffb8;
        puVar10 = &UNK_?;
        point_01.y = p2.y;
        point_01.x = p2.x;
        point_01.z = p2.z;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            (pVVar9,&TypeInfo__MVSweptElipsoidCheck->static_fields->
                                      elipsoidSpaceToWorld,point_01,(MethodInfo *)0x0);
        uVar12 = pVVar11->x;
        uVar13 = pVVar11->y;
        fVar3 = pVVar11->z;
        p2.x = 0.0;
        p1.y = p3.y;
        p1.x = p3.x;
        p1.z = p3.z;
        point.z = p3.z;
        point.x = p3.x;
        point.y = p3.y;
        fVar4 = (float)uVar12;
        fVar14 = (float)uVar13;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)&stack0xffffffb8,
                             &TypeInfo__MVSweptElipsoidCheck->static_fields->elipsoidSpaceToWorld,
                             point,(MethodInfo *)0x0);
        p2.y = fVar14;
        p2.x = fVar4;
        uVar15 = pVVar11->x;
        uVar16 = pVVar11->y;
        p3.z = pVVar11->z;
        p1.y = (float)pVVar9;
        p1.x = (float)puVar10;
        pa.z = fVar5;
        pa.x = (float)puVar10;
        pa.y = (float)pVVar9;
        pb.y = p2.y;
        pb.x = p2.x;
        pb.z = fVar3;
        p1.z = fVar5;
        p2.z = fVar3;
        p3.x = (float)uVar15;
        p3.y = (float)uVar16;
        pVVar9 = MathFunctions::MathFunctions_GetNormal
                            ((Vector3 *)&stack0xffffffb8,pa,pb,*pVVar11,(MethodInfo *)0x0);
        fVar3 = pVVar9->y;
        fVar5 = pVVar9->z;
        (currentVoxelHit->normal).x = pVVar9->x;
        (currentVoxelHit->normal).y = fVar3;
        (currentVoxelHit->normal).z = fVar5;
        currentVoxelHit->cube = cube;
        p3.z = (float)&currentVoxelHit->cube;
        p3.y = (float)&UNK_?;
        func_?();
        p3.y = 0.0;
        p3.x = (float)CONCAT22(in_stack_17,pos.z);
        uVar18._0_2_ = 0;
        uVar18._2_2_ = 0;
        p2.z = pos._2_4_;
        iVar19 = 0;
        p2.x = (float)&stack0xfffffff4;
        p2.y = pos._0_4_;
        p1.z = (float)&UNK_?;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  ((IntVector *)p2.x,(int32_t)p2.y,(int32_t)p2.z,(int32_t)p3.x,(MethodInfo *)0x0);
        (currentVoxelHit->cubePos).x = (int16_t)uVar18;
        (currentVoxelHit->cubePos).y = SUB42(uVar18,2);
        (currentVoxelHit->cubePos).z = iVar19;
        return 1;
      }
    }
    return 0;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_this_is_wrong,(MethodInfo *)0x0);
  pOVar20 = (Object__Array *)func_?();
  pOVar21 = (Object *)func_?();
  if (pOVar20 == (Object__Array *)0x0) goto code_?;
  if ((pOVar21 == (Object *)0x0) || (iVar22 = func_?(), iVar22 != 0)) {
    if (pOVar20->max_length == 0) goto code_?;
    pOVar20->vector[0] = pOVar21;
    func_?();
    pOVar21 = (Object *)func_?();
    if ((pOVar21 != (Object *)0x0) && (iVar22 = func_?(), iVar22 == 0))
    goto code_?;
    if (pOVar20->max_length < 2) goto code_?;
    pOVar20->vector[1] = pOVar21;
    func_?();
    pOVar21 = (Object *)func_?();
    if ((pOVar21 != (Object *)0x0) && (iVar22 = func_?(), iVar22 == 0))
    goto code_?;
    if (pOVar20->max_length < 3) goto code_?;
    pOVar20->vector[2] = pOVar21;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
              (StringLiteral_Points___0____1____2_,pOVar20,(MethodInfo *)0x0);
    pOVar20 = (Object__Array *)func_?();
    pOVar21 = (Object *)func_?();
    if (pOVar20 == (Object__Array *)0x0) goto code_?;
    if ((pOVar21 != (Object *)0x0) && (iVar22 = func_?(), iVar22 == 0))
    goto code_?;
    if (pOVar20->max_length == 0) goto code_?;
    pOVar20->vector[0] = pOVar21;
    func_?();
    pOVar21 = (Object *)func_?();
    if ((pOVar21 != (Object *)0x0) && (iVar22 = func_?(), iVar22 == 0))
    goto code_?;
    if (1 < pOVar20->max_length) {
      pOVar20->vector[1] = pOVar21;
      func_?();
      pOVar21 = (Object *)func_?();
      if ((pOVar21 != (Object *)0x0) && (iVar22 = func_?(), iVar22 == 0))
      goto code_?;
      if (2 < pOVar20->max_length) {
        pOVar20->vector[2] = pOVar21;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                  (StringLiteral_Origin__Direction__distance__0__,pOVar20,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  else {
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  bVar1 = (*pcVar23)();
  return bVar1;
}


/* Boolean IsWithinBounds(IntVector, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_IsWithinBounds
               (IntVector pos,CollisionState *collisionState,MethodInfo *method)

{
  if (((((collisionState->minBounds).x <= pos.x) && ((collisionState->minBounds).y <= pos.y)) &&
      ((collisionState->minBounds).z <= pos.z)) &&
     ((pos.x <= (collisionState->maxBounds).x && (pos.y <= (collisionState->maxBounds).y)))) {
    return pos.z <= (collisionState->maxBounds).z;
  }
  return 0;
}


/* Boolean LayerScan(VoxelHit ByRef, Vector3, Single, BoxCollider, Single, ICubeModelCollider,
   PhysicsCollisionData, Ray, Ray[]) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan
               (VoxelHit *vh,Vector3 radius,float maxRadius,BoxCollider *chunk,float distance,
               ICubeModelCollider *wo,PhysicsCollisionData *collisionData,Ray ray,
               Ray__Array *boundRays,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    func_?(&TypeInfo__SharedCollisionFunctions);
    func_?(&StringLiteral_scanRect_cant_be_zero);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  pSVar3 = (String *)0x0;
  pSVar4 = (String *)0x0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  func_?(&stack0xfffffee8,0,0xc4);
  if (chunk != (BoxCollider *)0x0) {
    pVVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                        ((Vector3 *)&RStack_8,chunk,(MethodInfo *)0x0);
    uVar9 = pVVar7->x;
    uVar10 = pVVar7->y;
    fVar11 = pVVar7->z;
    pVVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                        ((Vector3 *)&RStack_8,chunk,(MethodInfo *)0x0);
    center.y = (float)uVar10;
    center.x = (float)uVar9;
    center.z = fVar11;
    UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
              ((Bounds *)&stack0xfffffed0,center,*pVVar7,(MethodInfo *)0x0);
    RStack_8._cultureKey = pSVar3;
    RStack_8._options = (int32_t)fVar2;
    RStack_8._pattern = pSVar4;
    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      fVar2 = (float)RStack_8._options;
      pSVar3 = RStack_8._cultureKey;
    }
    localSpaceBounds.m_Center.y = fVar2;
    localSpaceBounds.m_Center.x = fVar1;
    localSpaceBounds.m_Center.z = (float)pSVar3;
    localSpaceBounds.m_Extents.x = (float)RStack_8._pattern;
    localSpaceBounds.m_Extents.y = fVar5;
    localSpaceBounds.m_Extents.z = fVar6;
    SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
              ((IntVector *)&stack0xffffff78,(IntVector *)&stack0xffffff7e,localSpaceBounds,
               (MethodInfo *)0x0);
    if ((collisionData != (PhysicsCollisionData *)0x0) &&
       (pTVar12 = (collisionData->fields).transform, pTVar12 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                ((Vector3 *)&RStack_8,pTVar12,(collisionData->fields).point,(MethodInfo *)0x0);
      pTVar12 = (collisionData->fields).transform;
      if (pTVar12 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformDirection
                  ((Vector3 *)&RStack_8,pTVar12,(collisionData->fields).normal,(MethodInfo *)0x0);
        pTVar12 = (collisionData->fields).transform;
        pRVar13 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            (&RStack_8,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&ray,(MethodInfo *)0x0);
        if (pTVar12 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformDirection
                    ((Vector3 *)&RStack_8,pTVar12,(Vector3)*pRVar13,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pMVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields;
          fVar2 = (pMVar14->worldToElipsoidSpace).m00;
          RStack_8._options = (int32_t)(pMVar14->worldToElipsoidSpace).m10;
          RStack_8._cultureKey = (String *)(pMVar14->worldToElipsoidSpace).m20;
          RStack_8._pattern = (String *)(pMVar14->worldToElipsoidSpace).m30;
          fVar1 = (pMVar14->worldToElipsoidSpace).m01;
          fVar5 = (pMVar14->worldToElipsoidSpace).m11;
          fVar6 = (pMVar14->worldToElipsoidSpace).m21;
          fVar11 = (pMVar14->worldToElipsoidSpace).m31;
          fStack_15 = (pMVar14->worldToElipsoidSpace).m02;
          RStack_16._options = (int32_t)(pMVar14->worldToElipsoidSpace).m12;
          RStack_16._cultureKey = (String *)(pMVar14->worldToElipsoidSpace).m22;
          RStack_16._pattern = (String *)(pMVar14->worldToElipsoidSpace).m32;
          fVar17 = (pMVar14->worldToElipsoidSpace).m03;
          fVar18 = (pMVar14->worldToElipsoidSpace).m13;
          fVar19 = (pMVar14->worldToElipsoidSpace).m23;
          puVar20 = (undefined *)(pMVar14->worldToElipsoidSpace).m33;
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)chunk,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localToWorldMatrix
                                ((Matrix4x4 *)&stack0xfffffe90,pTVar12,(MethodInfo *)0x0);
            fVar22 = pMVar21->m10;
            fVar23 = pMVar21->m20;
            fVar24 = pMVar21->m30;
            lhs.m10 = (float)RStack_8._options;
            lhs.m00 = fVar2;
            lhs.m20 = (float)RStack_8._cultureKey;
            lhs.m30 = (float)RStack_8._pattern;
            lhs.m01 = fVar1;
            lhs.m11 = fVar5;
            lhs.m21 = fVar6;
            lhs.m31 = fVar11;
            lhs.m02 = fStack_15;
            lhs.m12 = (float)RStack_16._options;
            lhs.m22 = (float)RStack_16._cultureKey;
            lhs.m32 = (float)RStack_16._pattern;
            lhs.m03 = fVar17;
            lhs.m13 = fVar18;
            lhs.m23 = fVar19;
            lhs.m33 = (float)puVar20;
            pSVar3 = RStack_16._pattern;
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                      ((Matrix4x4 *)&stack0xfffffe90,lhs,*pMVar21,(MethodInfo *)0x0);
            pIVar25 = wo;
            func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            puVar26 = (undefined8 *)func_?();
            RStack_16._options = (int32_t)*puVar26;
            RStack_16._cultureKey = (String *)((ulonglong)*puVar26 >> 0x20);
            fVar2 = (float)RStack_16._options * maxRadius;
            RStack_8._pattern = (String *)(*(float *)(puVar26 + 1) * maxRadius);
            RStack_16._cultureKey = (String *)((float)RStack_16._cultureKey * maxRadius);
            RStack_16._options = (int32_t)fVar2;
            RStack_16._pattern = RStack_8._pattern;
            if (pIVar25 != (ICubeModelCollider *)0x0) {
              pRVar13 = &RStack_8;
              pfVar27 = (float *)func_?();
              RStack_16._options = (int32_t)(fVar2 / *pfVar27);
              if (pRVar13 != (Regex_CachedCodeEntryKey *)0x0) {
                pRVar13 = &RStack_8;
                iVar28 = func_?();
                RStack_16._cultureKey =
                     (String *)((float)RStack_16._cultureKey / *(float *)(iVar28 + 4));
                if (pRVar13 != (Regex_CachedCodeEntryKey *)0x0) {
                  iVar28 = func_?();
                  RStack_16._pattern =
                       (String *)((float)RStack_16._pattern / *(float *)(iVar28 + 8));
                  func_?();
                  mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_8,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&ray,(MethodInfo *)0x0);
                  this = (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&ray;
                  pRVar13 = &RStack_8;
                  puVar29 = &UNK_?;
                  pRVar30 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                            Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                      (pRVar13,this,(MethodInfo *)0x0);
                  fVar2 = (float)pRVar30->_options;
                  fVar1 = (float)pRVar30->_cultureKey;
                  pSVar4 = pRVar30->_pattern;
                  if ((collisionData->fields).isInsideCollider == 0) {
                    pRVar13 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                              Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                        (&RStack_8,
                                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                          *)&ray,(MethodInfo *)0x0);
                    fVar5 = (float)pRVar13->_options;
                    fVar6 = (float)pRVar13->_cultureKey;
                    pSVar31 = pRVar13->_pattern;
                    pRVar13 = mscorlib.dll::System::Collections::Generic::
                              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System
                              ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                        (&RStack_8,
                                         (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                          *)&ray,(MethodInfo *)0x0);
                    RStack_16._options = pRVar13->_options;
                    RStack_16._cultureKey = pRVar13->_cultureKey;
                    RStack_16._pattern = pRVar13->_pattern;
                    fVar11 = (collisionData->fields).distance - _UNK_?;
                    this = (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)((float)pSVar31 + (float)RStack_16._pattern * fVar11);
                    puVar29 = (undefined *)(fVar5 + (float)RStack_16._options * fVar11);
                    pRVar13 = (Regex_CachedCodeEntryKey *)
                              (fVar6 + (float)RStack_16._cultureKey * fVar11);
                    RStack_8._pattern = (String *)this;
                    pRVar30 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                              Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                        (&RStack_8,
                                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                          *)&ray,(MethodInfo *)0x0);
                    RStack_16._options = pRVar30->_options;
                    RStack_16._cultureKey = pRVar30->_cultureKey;
                    RStack_16._pattern = pRVar30->_pattern;
                    RStack_8._pattern = (String *)((float)RStack_16._pattern - (float)this);
                    fVar32 = (float10)func_?();
                    distance = distance - (float)fVar32;
                  }
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  point.y = (float)pRVar13;
                  point.x = (float)puVar29;
                  point.z = (float)this;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)&RStack_8,
                             &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace,
                             point,(MethodInfo *)0x0);
                  vector.y = fVar1;
                  vector.x = fVar2;
                  vector.z = (float)pSVar4;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                            ((Vector3 *)&RStack_8,
                             &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace,
                             vector,(MethodInfo *)0x0);
                  func_?();
                  RStack_8._pattern = (String *)((float)pSVar4 * distance);
                  vector_00.y._0_2_ = SUB42(fVar1 * distance,0);
                  vector_00.x = fVar2 * distance;
                  vector_00.y._2_2_ = (int16_t)((uint)(fVar1 * distance) >> 0x10);
                  vector_00.z._0_2_ = (int16_t)RStack_8._pattern;
                  vector_00.z._2_2_ = (int16_t)((uint)RStack_8._pattern >> 0x10);
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                            ((Vector3 *)&RStack_8,
                             &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace,
                             vector_00,(MethodInfo *)0x0);
                  func_?();
                  pTVar12 = (collisionData->fields).transform;
                  if (pTVar12 != (Transform *)0x0) {
                    position.y = (float)pRVar13;
                    position.x = (float)puVar29;
                    position.z = (float)this;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              ((Vector3 *)&RStack_8,pTVar12,position,(MethodInfo *)0x0);
                    RStack_16._0_8_ = CONCAT44(fVar23,fVar22);
                    RStack_16._pattern = (String *)fVar24;
                    if (((float)((uint)fVar22 & _UNK_?) <
                         (float)((uint)fVar23 & _UNK_?)) ||
                       ((float)((uint)fVar22 & _UNK_?) <
                        (float)((uint)fVar24 & _UNK_?))) {
                      if (((float)((uint)fVar23 & _UNK_?) <
                           (float)((uint)fVar22 & _UNK_?)) ||
                         ((float)((uint)fVar23 & _UNK_?) <
                          (float)((uint)fVar24 & _UNK_?))) {
                        fVar2 = 0.0;
                        if (0.0 <= fVar24) {
                          fVar32 = (float10)func_?();
                        }
                        else {
                          fVar32 = (float10)func_?();
                        }
                        fVar1 = (float)fVar32;
                      }
                      else {
                        fVar1 = 0.0;
                        if (0.0 <= fVar23) {
                          fVar32 = (float10)func_?();
                          fVar2 = (float)fVar32;
                        }
                        else {
                          fVar32 = (float10)func_?();
                          fVar2 = (float)fVar32;
                        }
                      }
                      fVar5 = 0.0;
                    }
                    else {
                      fVar1 = 0.0;
                      fVar2 = 0.0;
                      if (0.0 <= fVar22) {
                        fVar32 = (float10)func_?();
                        fVar5 = (float)fVar32;
                      }
                      else {
                        fVar32 = (float10)func_?();
                        fVar5 = (float)fVar32;
                      }
                    }
                    pSVar4 = (String *)(fVar2 * _UNK_?);
                    fVar5 = fVar5 * _UNK_?;
                    pSVar31 = (String *)(fVar1 * _UNK_?);
                    RStack_16._cultureKey = pSVar4;
                    RStack_16._options = (int32_t)fVar5;
                    RStack_16._pattern = pSVar31;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pVVar33 = TypeInfo__UnityEngine__Vector3->static_fields;
                    uVar34 = (pVVar33->zeroVector).x;
                    uVar35 = (pVVar33->zeroVector).y;
                    fVar5 = fVar5 - (float)uVar34;
                    fVar2 = (float)pSVar31 - (pVVar33->zeroVector).z;
                    if (fVar5 * fVar5 +
                        ((float)pSVar4 - (float)uVar35) * ((float)pSVar4 - (float)uVar35) +
                        fVar2 * fVar2 < _UNK_?) {
                      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      puVar20 = &UNK_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                                ((Object *)StringLiteral_scanRect_cant_be_zero,(MethodInfo *)0x0);
                    }
                    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    RStack_8._options = RStack_16._options;
                    RStack_8._cultureKey = RStack_16._cultureKey;
                    RStack_8._pattern = RStack_16._pattern;
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    fVar2 = 0.0;
                    do {
                      puVar36 = (undefined *)0x0;
                      pRVar13 = &RStack_8;
                      puVar29 = &UNK_?;
                      fVar1 = fVar2;
                      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                        ((Vector3 *)pRVar13,(int32_t)fVar2,(MethodInfo *)0x0);
                      if (_UNK_? < (float)((uint)fVar5 & _UNK_?))
                      goto code_?;
                      fVar2 = (float)((int)fVar2 + 1);
                    } while ((int)fVar2 < 3);
                    pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_ToString
                                        ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
                    puVar36 = &UNK_?;
                    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                        (StringLiteral_No_scan_axis_found_,pSVar4,(MethodInfo *)0x0
                                        );
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                              ((Object *)pSVar4,(MethodInfo *)0x0);
code_?:
                    pSVar4 = RStack_16._pattern;
                    pTVar12 = (collisionData->fields).transform;
                    if (pTVar12 != (Transform *)0x0) {
                      direction.z = (float)RStack_16._pattern;
                      direction.x = (float)RStack_16._options;
                      direction.y = (float)RStack_16._cultureKey;
                      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_TransformDirection
                                          ((Vector3 *)&RStack_8,pTVar12,direction,(MethodInfo *)0x0
                                          );
                      UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
                                (&TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane,
                                 *pVVar7,(collisionData->fields).point,(MethodInfo *)0x0);
                      fVar11 = (collisionData->fields).point.x;
                      fVar22 = (collisionData->fields).point.y;
                      pTVar12 = (collisionData->fields).transform;
                      fVar2 = (collisionData->fields).point.z;
                      if (pTVar12 != (Transform *)0x0) {
                        direction_00.z = (float)pSVar4;
                        direction_00.x = (float)RStack_16._options;
                        direction_00.y = (float)RStack_16._cultureKey;
                        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_TransformDirection
                                            ((Vector3 *)&RStack_8,pTVar12,direction_00,
                                             (MethodInfo *)0x0);
                        planeOrigin.y = fVar22;
                        planeOrigin.x = fVar11;
                        planeOrigin.z._0_2_ = SUB42(fVar2,0);
                        planeOrigin.z._2_2_ = (int16_t)((uint)fVar2 >> 0x10);
                        MVSweptElipsoidCheck_GetRaysProjectedOnPlane
                                  (boundRays,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane,
                                   planeOrigin,*pVVar7,(MethodInfo *)0x0);
                        if ((collisionData->fields).isInsideCollider != 0) {
                          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0)
                          {
                            func_?();
                          }
                          pointsOnProjectPlane =
                               TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
                          pRVar30 = mscorlib.dll::System::Collections::Generic::
                                    KeyValuePair`2[System::Text::RegularExpressions::
                                    Regex+CachedCodeEntryKey,System::Object]::
                                    KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                              (&RStack_8,
                                               (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                                *)&ray,(MethodInfo *)0x0);
                          fVar23 = (float)pRVar30->_options;
                          fVar24 = (float)pRVar30->_cultureKey;
                          pSVar4 = pRVar30->_pattern;
                          pRVar30 = mscorlib.dll::System::Collections::Generic::
                                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System
                                    ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::
                                    Object]::
                                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                              (&RStack_8,
                                               (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                                *)&ray,(MethodInfo *)0x0);
                          startOrigin.y = fVar24;
                          startOrigin.x = fVar23;
                          startOrigin.z = (float)pSVar4;
                          MVSweptElipsoidCheck_MoveAxisAlignedRectBackward
                                    (pointsOnProjectPlane,startOrigin,(Vector3)*pRVar30,
                                     (MethodInfo *)0x0);
                        }
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        MVSweptElipsoidCheck_CalculateAxisAlignedRect
                                  (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,
                                   (collisionData->fields).transform,(MethodInfo *)0x0);
                        if ((collisionData->fields).isInsideCollider == 0) {
                          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0)
                          {
                            func_?();
                          }
                          localNormal.y = (float)puVar20;
                          localNormal.x = fVar19;
                          localNormal.z = (float)puVar29;
                          localHit.y = fVar17;
                          localHit.x = (float)pSVar3;
                          localHit.z = fVar18;
                          localDir.y = fVar1;
                          localDir.x = (float)pRVar13;
                          localDir.z = (float)puVar36;
                          MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
                                    (TypeInfo__MVSweptElipsoidCheck->static_fields->
                                     minMaxCalculateAxisAlignedRect,localNormal,localHit,localDir,
                                     (MethodInfo *)0x0);
                        }
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        fVar2 = radius.x;
                        fVar1 = radius.y;
                        puVar20 = &UNK_?;
                        pVVar37 = vh;
                        bVar38 = MVSweptElipsoidCheck_LayerScan_1
                                           (radius,TypeInfo__MVSweptElipsoidCheck->static_fields->
                                                   minMaxCalculateAxisAlignedRect,vh,distance,
                                            (CollisionState *)&stack0xfffffee8,(MethodInfo *)0x0);
                        if (bVar38 == 0) {
                          return 0;
                        }
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        fVar5 = vh->distance;
                        RStack_8._pattern = (String *)(fVar1 * fVar5);
                        vector_01.y = fVar2 * fVar5;
                        vector_01.x = (float)puVar20 * fVar5;
                        vector_01.z = (float)RStack_8._pattern;
                        UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                  ((Vector3 *)&RStack_8,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                    elipsoidSpaceToWorld,vector_01,(MethodInfo *)0x0);
                        fVar32 = (float10)func_?();
                        vh->distance = (float)(fVar32 + (float10)(float)pVVar37);
                        if (wo != (ICubeModelCollider *)0x0) {
                          iVar39 = func_?();
                          iVar40 = func_?();
                          vh->woId = iVar39;
                          vh->isCubeHit = 1;
                          vh->collider = (collisionData->fields).collider;
                          func_?();
                          vh->transform = (collisionData->fields).transform;
                          func_?();
                          vh->interactionFlags = iVar40;
                          return 1;
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
  }
  func_?();
  pcVar41 = (code *)swi(3);
  bVar38 = (*pcVar41)();
  return bVar38;
}


/* Boolean LayerScan(Vector3, Vector3[], VoxelHit ByRef, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan_1
               (Vector3 radius,Vector3__Array *alignedRect,VoxelHit *vh,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  IStack_2.x = 0;
  IStack_2.y = 0;
  IStack_2.z = 0;
  IStack_3.x = 0;
  IStack_3.y = 0;
  IStack_3.z = 0;
  _Stack_60.rgctx_data = (Il2CppRGCTXData *)0x0;
  _Stack_5c._0_2_ = 0;
  IStack_4.x = 0;
  IStack_4.y = 0;
  IStack_4.z = 0;
  IStack_5.x = 0;
  IStack_5.y = 0;
  IStack_5.z = 0;
  vh->distance = INFINITY;
  if (alignedRect != (Vector3__Array *)0x0) {
    if (alignedRect->max_length == 0) goto code_?;
    uStack_6._0_4_ = (Il2CppMethodPointer)alignedRect->vector[0].x;
    uStack_6._4_4_ = (Il2CppMethodPointer)alignedRect->vector[0].y;
    bVar7 = false;
    pMStack_8 = (MethodInfo *)alignedRect->vector[0].z;
    iVar9 = 0;
    uVar10 = SUB42((Il2CppMethodPointer)uStack_6,0);
    uVar11 = (undefined2)((uint)(Il2CppMethodPointer)uStack_6 >> 0x10);
    uVar12 = SUB42(uStack_6._4_4_,0);
    uVar13 = (undefined2)((uint)uStack_6._4_4_ >> 0x10);
    pIVar14 = (Il2CppMethodPointer)alignedRect->vector[0].x;
    fVar15 = alignedRect->vector[0].y;
    uVar16 = SUB42(fVar15,0);
    uStack_17 = (undefined2)((uint)fVar15 >> 0x10);
    uVar18 = SUB42(pMStack_8,0);
    uVar19 = (undefined2)((uint)pMStack_8 >> 0x10);
    bVar20 = false;
    pIStack_21 = (Il2CppMethodPointer)uStack_6;
    pIStack_22 = uStack_6._4_4_;
    pMStack_23 = pMStack_8;
    pMStack_24 = pMStack_8;
    do {
      if ((iVar9 == collisionState->scanAxis) || (bVar7)) {
        if ((bool)(bVar7 & iVar9 != collisionState->scanAxis)) {
          pVVar25 = (Vector3 *)func_?();
          fStack_26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                (pVVar25,CONCAT22(in_stack_27,in_stack_28),
                                 in_stack_29);
          in_stack_29 = (MethodInfo *)&stack0xffffff84;
          in_stack_28 = 0xc53;
          in_stack_27 = 0x101d;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    ((Vector3 *)in_stack_29,iVar9,fStack_26,(MethodInfo *)0x0);
          bVar7 = bVar20;
        }
      }
      else {
        pVVar25 = (Vector3 *)func_?();
        fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (pVVar25,CONCAT22(in_stack_27,in_stack_28),in_stack_29)
        ;
        in_stack_29 = (MethodInfo *)&uStack_6;
        in_stack_28 = 0xc0e;
        in_stack_27 = 0x101d;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                  ((Vector3 *)in_stack_29,iVar9,fVar15,(MethodInfo *)0x0);
        bVar20 = true;
        bVar7 = bVar20;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    puVar30 = &stack0xffffff60;
    puVar31 = &stack0xffffff94;
    puVar32 = (undefined8 *)func_?();
    uVar33 = *puVar32;
    pMVar34 = *(MethodInfo **)(puVar32 + 1);
    pMStack_23 = (MethodInfo *)((float)CONCAT22(uVar19,uVar18) - (float)pMStack_23);
    uVar35 = 0;
    uVar36 = 0;
    puVar32 = (undefined8 *)func_?();
    method_00 = *(MethodInfo **)(puVar32 + 1);
    pIStack_22 = (Il2CppMethodPointer)*puVar32;
    pMStack_23 = (MethodInfo *)((ulonglong)*puVar32 >> 0x20);
    uVar37 = (undefined2)uVar33;
    uVar38 = (undefined2)((ulonglong)uVar33 >> 0x10);
    uVar39 = (undefined2)((ulonglong)uVar33 >> 0x20);
    uVar40 = (undefined2)((ulonglong)uVar33 >> 0x30);
    p_Var37 = &_Stack_68;
    puVar41 = &UNK_?;
    localPos_01.y._0_2_ = uVar37;
    localPos_01.x = (float)p_Var37;
    localPos_01.y._2_2_ = uVar38;
    localPos_01.z._0_2_ = uVar39;
    localPos_01.z._2_2_ = uVar40;
    IVar42 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_01,pMVar34);
    IStack_1._0_4_ = *IVar42._0_4_;
    IStack_1.z = *(int16_t *)(IVar42._0_4_ + 1);
    uVar43 = 0;
    uVar44 = 0;
    p_Var45 = &_Stack_68;
    uVar45 = 0xd69;
    uVar46 = 0x101d;
    localPos_02.y = (float)pIStack_22;
    localPos_02.x = (float)p_Var45;
    localPos_02.z = (float)pMStack_23;
    pIVar47 = pIStack_22;
    pMVar34 = pMStack_23;
    IVar42 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_02,method_00);
    IStack_2._0_4_ = *IVar42._0_4_;
    IStack_2.z = *(int16_t *)(IVar42._0_4_ + 1);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      uVar48 = 0xd8c;
      uVar49 = 0x101d;
      func_?();
      puVar30 = (undefined1 *)CONCAT22(uVar49,uVar48);
    }
    pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
    if (pCVar50 != (CellTraverser *)0x0) {
      localOrigin.x._2_2_ = uVar11;
      localOrigin.x._0_2_ = uVar10;
      localOrigin.y._0_2_ = uVar12;
      localOrigin.y._2_2_ = uVar13;
      iVar9 = 0x31;
      uVar10 = 0;
      uVar11 = 0;
      pCVar51 = collisionState;
      pfVar52 = (float *)&stack0xfffffe7c;
      while( true ) {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        *pfVar52 = (pCVar51->localOrigin).x;
        pCVar51 = (CollisionState *)&(pCVar51->localOrigin).y;
        pfVar52 = pfVar52 + 1;
      }
      localOrigin.z = (float)pMStack_24;
      collisionState_00.minBounds._0_4_ = puVar41;
      auVar53 = in_stack_54._0_12_;
      auVar55 = in_stack_54._12_12_;
      auVar56 = in_stack_54._24_12_;
      auVar57 = in_stack_54._36_12_;
      auVar58 = in_stack_54._48_12_;
      auVar59 = in_stack_54._60_12_;
      auVar60 = in_stack_54._76_64_;
      collisionState_00.localOrigin.x = (float)auVar53._0_4_;
      collisionState_00.localOrigin.y = (float)auVar53._4_4_;
      collisionState_00.localOrigin.z = (float)auVar53._8_4_;
      collisionState_00.localHitPoint.x = (float)auVar55._0_4_;
      collisionState_00.localHitPoint.y = (float)auVar55._4_4_;
      collisionState_00.localHitPoint.z = (float)auVar55._8_4_;
      collisionState_00.localNormal.x = (float)auVar56._0_4_;
      collisionState_00.localNormal.y = (float)auVar56._4_4_;
      collisionState_00.localNormal.z = (float)auVar56._8_4_;
      collisionState_00.localDirection.x = (float)auVar57._0_4_;
      collisionState_00.localDirection.y = (float)auVar57._4_4_;
      collisionState_00.localDirection.z = (float)auVar57._8_4_;
      collisionState_00.origin.x = (float)auVar58._0_4_;
      collisionState_00.origin.y = (float)auVar58._4_4_;
      collisionState_00.origin.z = (float)auVar58._8_4_;
      collisionState_00.direction.x = (float)auVar59._0_4_;
      collisionState_00.direction.y = (float)auVar59._4_4_;
      collisionState_00.direction.z = (float)auVar59._8_4_;
      collisionState_00.cmb = (ICubeModelCollider *)in_stack_54._72_4_;
      collisionState_00.localToElipsoidSpace.m00 = (float)auVar60._0_4_;
      collisionState_00.localToElipsoidSpace.m10 = (float)auVar60._4_4_;
      collisionState_00.localToElipsoidSpace.m20 = (float)auVar60._8_4_;
      collisionState_00.localToElipsoidSpace.m30 = (float)auVar60._12_4_;
      collisionState_00.localToElipsoidSpace.m01 = (float)auVar60._16_4_;
      collisionState_00.localToElipsoidSpace.m11 = (float)auVar60._20_4_;
      collisionState_00.localToElipsoidSpace.m21 = (float)auVar60._24_4_;
      collisionState_00.localToElipsoidSpace.m31 = (float)auVar60._28_4_;
      collisionState_00.localToElipsoidSpace.m02 = (float)auVar60._32_4_;
      collisionState_00.localToElipsoidSpace.m12 = (float)auVar60._36_4_;
      collisionState_00.localToElipsoidSpace.m22 = (float)auVar60._40_4_;
      collisionState_00.localToElipsoidSpace.m32 = (float)auVar60._44_4_;
      collisionState_00.localToElipsoidSpace.m03 = (float)auVar60._48_4_;
      collisionState_00.localToElipsoidSpace.m13 = (float)auVar60._52_4_;
      collisionState_00.localToElipsoidSpace.m23 = (float)auVar60._56_4_;
      collisionState_00.localToElipsoidSpace.m33 = (float)auVar60._60_4_;
      collisionState_00.scanAxis = in_stack_54._140_4_;
      collisionState_00._148_4_ = p_Var37;
      collisionState_00.maxBounds.y = uVar37;
      collisionState_00.maxBounds.z = uVar38;
      collisionState_00.firstHitScanAxis._0_2_ = uVar39;
      collisionState_00.firstHitScanAxis._2_2_ = uVar40;
      collisionState_00._160_2_ = uVar45;
      collisionState_00._162_2_ = uVar46;
      collisionState_00.scaledMaxRadius._0_2_ = (short)p_Var45;
      collisionState_00.scaledMaxRadius._2_2_ = (short)((uint)p_Var45 >> 0x10);
      collisionState_00.elipsoidSpaceOrigin.x = (float)pIVar47;
      collisionState_00.elipsoidSpaceOrigin.y = (float)pMVar34;
      collisionState_00.elipsoidSpaceOrigin.z = (float)method_00;
      collisionState_00.elipsoidSpaceDirection.x._0_2_ = uVar43;
      collisionState_00.elipsoidSpaceDirection.x._2_2_ = uVar44;
      collisionState_00.elipsoidSpaceDirection.y._0_2_ = uVar35;
      collisionState_00.elipsoidSpaceDirection.y._2_2_ = uVar36;
      collisionState_00.elipsoidSpaceDirection.z._0_2_ = (short)puVar31;
      collisionState_00.elipsoidSpaceDirection.z._2_2_ = (short)((uint)puVar31 >> 0x10);
      collisionState_00.elipsoidSpaceDistance._0_2_ = (short)puVar30;
      collisionState_00.elipsoidSpaceDistance._2_2_ = (short)((uint)puVar30 >> 0x10);
      CellTraverser::CellTraverser_Init
                (pCVar50,localOrigin,collisionState_00,(MethodInfo *)CONCAT22(uVar11,uVar10));
      radius.z = (float)uStack_6;
      alignedRect._0_2_ = SUB82(uStack_6,4);
      alignedRect._2_1_ = SUB81(uStack_6,6);
      alignedRect._3_1_ = SUB81(uStack_6,7);
      localPos.y = radius.z;
      localPos.x = (float)&_Stack_68;
      localPos.z._0_2_ = alignedRect._0_2_;
      localPos.z._2_1_ = alignedRect._2_1_;
      localPos.z._3_1_ = alignedRect._3_1_;
      IVar42 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos,pMStack_8);
      localPos_00.z._2_2_ = uStack_17;
      localPos_00.z._0_2_ = uVar16;
      IStack_3._0_4_ = *IVar42._0_4_;
      IStack_3.z = *(int16_t *)(IVar42._0_4_ + 1);
      localPos_00.y = (float)pIVar14;
      localPos_00.x = (float)&_Stack_68;
      IVar42 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector
                         (localPos_00,(MethodInfo *)CONCAT22(uVar19,uVar18));
      _Stack_60 = *IVar42._0_4_;
      _Stack_5c._0_2_ = *(undefined2 *)(IVar42._0_4_ + 1);
      iVar61 = collisionState->scanAxis;
      iVar62 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&IStack_3,iVar61,(MethodInfo *)0x0);
      iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->minBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      iVar64 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->maxBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      if ((iVar63 <= iVar62) && (iVar63 = iVar62, iVar64 < iVar62)) {
        iVar63 = iVar64;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (&IStack_3,iVar61,iVar63,(MethodInfo *)0x0);
      iVar61 = collisionState->scanAxis;
      iVar62 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&IStack_3,iVar61,(MethodInfo *)0x0);
      iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->minBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      iVar64 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->maxBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      if ((iVar63 <= iVar62) && (iVar63 = iVar62, iVar64 < iVar62)) {
        iVar63 = iVar64;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                ((IntVector *)&_Stack_60,iVar61,iVar63,(MethodInfo *)0x0);
      iVar9 = 0;
      iStack_65 = 0;
      iStack_66 = 0;
      iStack_67 = 0;
      iVar68 = 0;
      iStack_69 = 0;
      do {
        iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                           (&IStack_1,iVar68,(MethodInfo *)0x0);
        if (iVar63 != 0) {
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_3,iVar68,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar50 == (CellTraverser *)0x0) goto code_?;
          IStack_5.x = (pCVar50->fields).voxelPos.x;
          IStack_5.y = (pCVar50->fields).voxelPos.y;
          IStack_5.z = (pCVar50->fields).voxelPos.z;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_5,iVar68,(MethodInfo *)0x0);
          iStack_65 = func_?();
          iVar9 = iStack_66;
          iStack_67 = iVar68;
        }
        this = &IStack_2;
        iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                           (this,iVar68,(MethodInfo *)0x0);
        if (iVar63 != 0) {
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    ((IntVector *)&_Stack_60,iVar68,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar50 == (CellTraverser *)0x0) goto code_?;
          IStack_5.x = (pCVar50->fields).voxelPos.x;
          IStack_5.y = (pCVar50->fields).voxelPos.y;
          IStack_5.z = (pCVar50->fields).voxelPos.z;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_5,iVar68,(MethodInfo *)0x0);
          iVar9 = func_?();
          iStack_69 = iVar68;
          iStack_66 = iVar9;
        }
        uVar10 = (undefined2)((ulonglong)uVar33 >> 0x30);
        iVar68 = iVar68 + 1;
      } while (iVar68 < 3);
      iVar9 = iVar9 + 1;
      iStack_65 = iStack_65 + 1;
      iStack_66 = iVar9;
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
      if (pCVar50 != (CellTraverser *)0x0) {
        iVar61._0_2_ = (pCVar50->fields).voxelPos.x;
        iVar61._2_2_ = (pCVar50->fields).voxelPos.y;
        pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
        if (pCVar50 != (CellTraverser *)0x0) {
          uVar70._0_2_ = (pCVar50->fields).voxelPos.x;
          uVar70._2_2_ = (pCVar50->fields).voxelPos.y;
          pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar50 != (CellTraverser *)0x0) {
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      (&IStack_4,iVar61,uVar70 >> 0x10,
                       (int32_t)(CONCAT26(uVar10,(pCVar50->fields).voxelPos) >> 0x20),
                       (MethodInfo *)0x0);
            do {
              do {
                iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (&IStack_4,collisionState->scanAxis,(MethodInfo *)0x0);
                uVar11 = (undefined2)((uint)collisionState->scanAxis >> 0x10);
                uVar10 = 0x101d;
                iVar62 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (&collisionState->maxBounds,collisionState->scanAxis,
                                    (MethodInfo *)0x0);
                if (iVar62 < iVar63) goto code_?;
                iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (&IStack_4,collisionState->scanAxis,(MethodInfo *)0x0);
                uVar12 = 0;
                this_00 = &collisionState->minBounds;
                iVar62 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (this_00,collisionState->scanAxis,(MethodInfo *)0x0);
                if (iVar63 < iVar62) goto code_?;
                if (-1 < iStack_65) {
                  fStack_26 = (float)(iVar9 + 1);
                  pMStack_24 = (MethodInfo *)(iStack_65 + 1);
                  do {
                    uVar13 = (undefined2)((uint)this >> 0x10);
                    uVar71 = (ushort)((uint)p_Var45 >> 0x10);
                    fVar15 = fStack_26;
                    if (-1 < iStack_66) {
                      do {
                        iVar63 = IStack_4.z;
                        uVar72 = IStack_4._0_4_;
                        uStack_73 = (undefined2)((uint)fVar15 >> 0x10);
                        uVar16 = SUB42(fVar15,0);
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        uVar74 = IStack_4._0_4_;
                        IVar42.z = iVar63;
                        IStack_4.x = (int16_t)uVar72;
                        IStack_4.y = SUB42(uVar72,2);
                        IVar42.x = IStack_4.x;
                        IVar42.y = IStack_4.y;
                        radius_00.y = (float)&_Stack_68;
                        radius_00.x = (float)&UNK_?;
                        radius_00.z = radius.z;
                        uVar13 = 0x101d;
                        IStack_4._0_4_ = uVar74;
                        pCVar51 = collisionState;
                        MVSweptElipsoidCheck_HandleCube
                                  ((VoxelHit *)&UNK_?,IVar42,radius_00,3.0973952e-29,
                                   collisionState,(MethodInfo *)0x0);
                        iVar62 = IStack_4.z;
                        uVar72 = IStack_4._0_4_;
                        iVar63 = IStack_2.z;
                        IStack_75.x = IStack_2.x;
                        IStack_75.y = IStack_2.y;
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          uVar12 = 0x101d;
                          func_?();
                        }
                        uVar10 = (undefined2)((uint)pCVar51 >> 0x10);
                        i1.z = (int16_t)uVar72;
                        i1._0_4_ = &stack0xffffff64;
                        i2.y = uVar13;
                        i2.x = iVar62;
                        i2.z = IStack_75.x;
                        IVar42 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                 IntVector_op_Addition(i1,i2,(MethodInfo *)CONCAT22(uVar71,iVar63));
                        uVar13 = (undefined2)((uint)this >> 0x10);
                        p_Var45 = (_union_155 *)((uint)uVar71 << 0x10);
                        fVar15 = (float)(CONCAT22(uStack_73,uVar16) + -1);
                        IStack_4._0_4_ = *IVar42._0_4_;
                        IStack_4.z = *(int16_t *)(IVar42._0_4_ + 1);
                      } while (fVar15 != 0.0);
                    }
                    iVar62 = IStack_4.z;
                    uVar72 = IStack_4._0_4_;
                    iVar63 = IStack_2.z;
                    IStack_75.x = IStack_2.x;
                    IStack_75.y = IStack_2.y;
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      uVar10 = 0x101d;
                      func_?();
                    }
                    uVar71 = (ushort)((uint)this_00 >> 0x10);
                    iV.z = IStack_75.x;
                    iV._0_4_ = fStack_26;
                    IVar42 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                                       ((int32_t)&stack0xffffff88,iV,
                                        (MethodInfo *)CONCAT22(uVar10,iVar63));
                    puVar31 = auStack_76;
                    i1_00.z = (int16_t)uVar72;
                    i1_00._0_4_ = puVar31;
                    i2_00.y = uVar11;
                    i2_00.x = iVar62;
                    i2_00.z = (int16_t)*IVar42._0_4_;
                    IVar42 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                                       (i1_00,i2_00,
                                        (MethodInfo *)
                                        CONCAT22(uVar13,*(undefined2 *)(IVar42._0_4_ + 1)));
                    puVar77 = IVar42._0_4_;
                    IStack_4._0_4_ = *puVar77;
                    IStack_4.z = *(int16_t *)(puVar77 + 1);
                    in_stack_78 = 0;
                    this = (IntVector *)&UNK_?;
                    i1_01.z = (int16_t)*puVar77;
                    i1_01._0_4_ = &stack0xffffff50;
                    i2_01.y = uVar71;
                    i2_01.x = *(undefined2 *)(puVar77 + 1);
                    i2_01.z = IStack_1.x;
                    IVar42 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                       (i1_01,i2_01,(MethodInfo *)CONCAT22(uVar12,IStack_1.z));
                    uVar10 = (undefined2)((uint)puVar31 >> 0x10);
                    this_00 = (IntVector *)((uint)uVar71 << 0x10);
                    pMStack_24 = (MethodInfo *)((int)pMStack_24 + -1);
                    IStack_4._0_4_ = *IVar42._0_4_;
                    IStack_4.z = *(int16_t *)(IVar42._0_4_ + 1);
                  } while (pMStack_24 != (MethodInfo *)0x0);
                  pMStack_24 = (MethodInfo *)0x0;
                  iVar9 = iStack_66;
                }
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                CellTraverser::CellTraverser_Step(pCVar50,(MethodInfo *)0x0);
                while( true ) {
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    this = (IntVector *)&UNK_?;
                    func_?();
                  }
                  pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                  IStack_5.x = (pCVar50->fields).stepDir.x;
                  IStack_5.y = (pCVar50->fields).stepDir.y;
                  IStack_5.z = (pCVar50->fields).stepDir.z;
                  iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                     (&IStack_5,collisionState->scanAxis,(MethodInfo *)0x0);
                  if (iVar63 != 0) break;
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                  uVar79 = (pCVar50->fields).voxelPos.x;
                  IStack_4.x = uVar79;
                  pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                  uVar80 = (pCVar50->fields).voxelPos.y;
                  IStack_4.y = uVar80;
                  pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                  IStack_75.x = (pCVar50->fields).voxelPos.x;
                  IStack_75.y = (pCVar50->fields).voxelPos.y;
                  iVar68 = 0;
                  IStack_4.z = (pCVar50->fields).voxelPos.z;
                  do {
                    iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                       (&IStack_1,iVar68,(MethodInfo *)0x0);
                    if (iVar63 != 0) {
                      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                      if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                      IStack_5.x = (pCVar50->fields).stepDir.x;
                      IStack_5.y = (pCVar50->fields).stepDir.y;
                      IStack_5.z = (pCVar50->fields).stepDir.z;
                      iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                         (&IStack_5,iVar68,(MethodInfo *)0x0);
                      if (iVar63 == 0) {
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                        if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                        IStack_5.x = (pCVar50->fields).stepDir.x;
                        IStack_5.y = (pCVar50->fields).stepDir.y;
                        IStack_5.z = (pCVar50->fields).stepDir.z;
                        iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                           (&IStack_5,iStack_69,(MethodInfo *)0x0);
                        iVar62 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                           (&IStack_2,iStack_69,(MethodInfo *)0x0);
                        iVar68 = iStack_69;
                        if (iVar63 == iVar62) {
                          uVar71 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                             (&IStack_4,iStack_69,(MethodInfo *)0x0);
                          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                                    (&IStack_4,iVar68,(int16_t)((uint)uVar71 + iVar9),
                                     (MethodInfo *)0x0);
                        }
                        if (-1 < iStack_65) {
                          fStack_26 = (float)(iStack_65 + 1);
                          do {
                            iVar63 = IStack_4.z;
                            uVar72 = IStack_4._0_4_;
                            uVar10 = in_stack_81._2_2_;
                            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0
                               ) {
                              func_?();
                            }
                            uVar74 = IStack_4._0_4_;
                            pos_00.z = iVar63;
                            IStack_4.x = (int16_t)uVar72;
                            IStack_4.y = SUB42(uVar72,2);
                            pos_00.x = IStack_4.x;
                            pos_00.y = IStack_4.y;
                            radius_02.y = (float)&_Stack_68;
                            radius_02.x = (float)&UNK_?;
                            radius_02.z = radius.z;
                            IStack_4._0_4_ = uVar74;
                            MVSweptElipsoidCheck_HandleCube
                                      ((VoxelHit *)&UNK_?,pos_00,radius_02,3.0973952e-29,
                                       collisionState,(MethodInfo *)0x0);
                            iVar62 = IStack_4.z;
                            uVar72 = IStack_4._0_4_;
                            iVar63 = IStack_1.z;
                            IStack_75.x = IStack_1.x;
                            IStack_75.y = IStack_1.y;
                            if ((TypeInfo__MV__WorldObject__IntVector->_1).
                                cctor_finished_or_no_cctor == 0) {
                              _Stack_68._0_2_ = SUB42(TypeInfo__MV__WorldObject__IntVector,0);
                              _Stack_68._2_2_ =
                                   (undefined2)((uint)TypeInfo__MV__WorldObject__IntVector >> 0x10);
                              uVar10 = 0x101d;
                              func_?();
                            }
                            _Stack_68._0_2_ = 0;
                            _Stack_68._2_2_ = 0;
                            in_stack_81._2_2_ = uVar10;
                            in_stack_81._0_2_ = iVar63;
                            i1_03.z = (int16_t)uVar72;
                            i1_03._0_4_ = &pIStack_22;
                            i2_03.y = uVar19;
                            i2_03.x = iVar62;
                            i2_03.z = IStack_75.x;
                            IVar42 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                     IntVector_op_Addition
                                               (i1_03,i2_03,
                                                (MethodInfo *)in_stack_81.methodMetadataHandle
                                               );
                            fStack_26 = (float)((int)fStack_26 + -1);
                            IStack_4._0_4_ = *IVar42._0_4_;
                            IStack_4.z = *(int16_t *)(IVar42._0_4_ + 1);
                          } while (fStack_26 != 0.0);
                          fStack_26 = 0.0;
                        }
                        goto code_?;
                      }
                    }
                    iVar68 = iVar68 + 1;
                  } while (iVar68 < 3);
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                  IStack_5.x = (pCVar50->fields).stepDir.x;
                  IStack_5.y = (pCVar50->fields).stepDir.y;
                  IStack_5.z = (pCVar50->fields).stepDir.z;
                  iVar63 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                     (&IStack_5,iStack_67,(MethodInfo *)0x0);
                  iVar62 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                     (&IStack_1,iStack_67,(MethodInfo *)0x0);
                  iVar68 = iStack_67;
                  if (iVar63 == iVar62) {
                    uVar71 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                       (&IStack_4,iStack_67,(MethodInfo *)0x0);
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                              (&IStack_4,iVar68,(int16_t)((uint)uVar71 + iStack_65),
                               (MethodInfo *)0x0);
                  }
                  if (-1 < iVar9) {
                    fStack_26 = (float)(iVar9 + 1);
                    do {
                      iVar63 = IStack_4.z;
                      uVar72 = IStack_4._0_4_;
                      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      uVar74 = IStack_4._0_4_;
                      pos.z = iVar63;
                      IStack_4.x = (int16_t)uVar72;
                      IStack_4.y = SUB42(uVar72,2);
                      pos.x = IStack_4.x;
                      pos.y = IStack_4.y;
                      radius_01.y = (float)&_Stack_68;
                      radius_01.x = (float)&UNK_?;
                      radius_01.z = radius.z;
                      uVar10 = 0x101d;
                      IStack_4._0_4_ = uVar74;
                      MVSweptElipsoidCheck_HandleCube
                                ((VoxelHit *)&UNK_?,pos,radius_01,3.0973952e-29,
                                 collisionState,(MethodInfo *)0x0);
                      iVar62 = IStack_4.z;
                      uVar72 = IStack_4._0_4_;
                      iVar63 = IStack_2.z;
                      IStack_75.x = IStack_2.x;
                      IStack_75.y = IStack_2.y;
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        _Stack_68._0_2_ = SUB42(TypeInfo__MV__WorldObject__IntVector,0);
                        _Stack_68._2_2_ =
                             (undefined2)((uint)TypeInfo__MV__WorldObject__IntVector >> 0x10);
                        in_stack_81.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
                        func_?();
                      }
                      i1_02.z = (int16_t)uVar72;
                      i1_02._0_4_ = &stack0xffffff70;
                      i2_02.y = uVar10;
                      i2_02.x = iVar62;
                      i2_02.z = IStack_75.x;
                      IVar42 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                         (i1_02,i2_02,
                                          (MethodInfo *)CONCAT22(in_stack_78,iVar63));
                      fStack_26 = (float)((int)fStack_26 + -1);
                      IStack_4._0_4_ = *IVar42._0_4_;
                      IStack_4.z = *(int16_t *)(IVar42._0_4_ + 1);
                    } while (fStack_26 != 0.0);
                  }
code_?:
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                  CellTraverser::CellTraverser_Step(pCVar50,(MethodInfo *)0x0);
                  iVar9 = iStack_66;
                }
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                uVar82 = (pCVar50->fields).voxelPos.x;
                uVar83 = (pCVar50->fields).voxelPos.y;
                IStack_4.x = uVar82;
                pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                _Stack_68._2_2_ = uVar82;
                uStack_84 = uVar83;
                if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                uVar85 = (pCVar50->fields).voxelPos.y;
                IStack_4.y = uVar85;
                pCVar50 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar50 == (CellTraverser *)0x0) goto code_?;
                IStack_75.x = (pCVar50->fields).voxelPos.x;
                IStack_75.y = (pCVar50->fields).voxelPos.y;
                IStack_4.z = (pCVar50->fields).voxelPos.z;
              } while (collisionState->firstHitDetected == 0);
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                        (&IStack_4,collisionState->scanAxis,(MethodInfo *)0x0);
              iVar68 = func_?();
              this = (IntVector *)&UNK_?;
              iVar86 = func_?();
            } while (iVar68 <= iVar86);
code_?:
            return collisionState->firstHitDetected;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar87 = (code *)swi(3);
  bVar88 = (*pcVar87)();
  return bVar88;
}


/* Boolean MVElipsoidCast(Ray, Transform, Bounds, Single, VoxelHit ByRef, HashSet`1[System.Int32],
   Int32) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast
               (Ray ray,Transform *transform,Bounds localBounds,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    func_?(&StringLiteral_Hit_counter_greater_than_1_);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  this = (List_1_GameTierProgressBar_TierProgressData_ *)
         MVSweptElipsoidCheck_MVElipsoidCast_2
                   (ray,transform,localBounds,0,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (this != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((this->fields)._size != 0) {
      if ((this->fields)._size < 2) {
        pGVar1 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)&stack0xffffffb4,this,0,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        pTVar2 = pGVar1->progressText;
        pGVar3 = pGVar1->progressDivider;
        pGVar4 = pGVar1->progressBarTextBubble;
        pGVar5 = pGVar1->avatarHead;
        pRVar6 = pGVar1->avatarHeadImage;
        pGVar7 = pGVar1->avatarHeadUI;
        pPVar8 = pGVar1->disabledProgressBar;
        pGVar9 = pGVar1->disabledProgressDivider;
        pGVar10 = pGVar1->disabledBarTextBubble;
        pGVar11 = pGVar1->tierIconTempUnlock;
        pCVar12 = (Cube *)pGVar1->tierIconNumber;
        pPVar13 = pGVar1->endResultProgressBar;
        pCVar14 = (Collider *)pGVar1->tempProgress;
        pTVar15 = (Transform *)pGVar1->disabledTempProgress;
        pGVar16 = pGVar1->freeTryTextBubble;
        iVar17 = *(int64_t *)&pGVar1->hoverInputHandler;
        (voxelHit->point).x = (float)pGVar1->progressBar;
        (voxelHit->point).y = (float)pTVar2;
        (voxelHit->point).z = (float)pGVar3;
        (voxelHit->normal).x = (float)pGVar4;
        (voxelHit->normal).y = (float)pGVar5;
        (voxelHit->normal).z = (float)pRVar6;
        *(GameObject **)&voxelHit->cubePos = pGVar7;
        *(ProgressBar **)&(voxelHit->cubePos).z = pPVar8;
        voxelHit->face = (int32_t)pGVar9;
        *(GamePassesTextBubble **)&voxelHit->isCubeHit = pGVar10;
        voxelHit->woId = (int32_t)pGVar11;
        voxelHit->cube = pCVar12;
        voxelHit->distance = (float)pPVar13;
        voxelHit->collider = pCVar14;
        voxelHit->transform = pTVar15;
        *(GamePassesTextBubble **)&voxelHit->field_0x3c = pGVar16;
        voxelHit->interactionFlags = iVar17;
        func_?();
        return 1;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Transform, Bounds, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll
          (Ray ray,Transform *transform,Bounds localBounds,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pLVar1 = MVSweptElipsoidCheck_MVElipsoidCast_2
                     (ray,transform,localBounds,1,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar1;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Vector3, Quaternion, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll_1
          (Ray ray,Vector3 radius,Quaternion rotation,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pLVar1 = MVSweptElipsoidCheck_MVElipsoidCast_3
                     (ray,radius,rotation,distance,1,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean MVElipsoidCast(Ray, Vector3, Quaternion, Single, VoxelHit ByRef, HashSet`1[System.Int32],
   Int32) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
               (Ray ray,Vector3 radius,Quaternion rotation,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    func_?(&StringLiteral_Hit_counter_greater_than_1_);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  if (((radius.x != 0.0) && (radius.y != 0.0)) && (radius.z != 0.0)) {
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVSweptElipsoidCheck);
    }
    pLStack_1 = MVSweptElipsoidCheck_MVElipsoidCast_3
                           (ray,radius,rotation,distance,0,ignoreWoIds,layerMask,(MethodInfo *)0x0);
    if (pLStack_1 == (List_1_VoxelHit_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((pLStack_1->fields)._size != 0) {
      if ((pLStack_1->fields)._size < 2) {
        puStack_4 = auStack_5;
        pfVar6 = (float *)func_?();
        puStack_7 = (undefined *)0x0;
        fVar8 = pfVar6[1];
        fVar9 = pfVar6[2];
        fVar10 = pfVar6[3];
        fVar11 = pfVar6[4];
        fVar12 = pfVar6[5];
        fVar13 = pfVar6[6];
        fVar14 = pfVar6[7];
        fVar15 = pfVar6[8];
        fVar16 = pfVar6[9];
        fVar17 = pfVar6[10];
        pCVar18 = (Cube *)pfVar6[0xb];
        fVar19 = pfVar6[0xc];
        pCVar20 = (Collider *)pfVar6[0xd];
        pTVar21 = (Transform *)pfVar6[0xe];
        fVar22 = pfVar6[0xf];
        iVar23 = *(int64_t *)(pfVar6 + 0x10);
        ppCStack_24 = &voxelHit->cube;
        (voxelHit->point).x = *pfVar6;
        (voxelHit->point).y = fVar8;
        (voxelHit->point).z = fVar9;
        (voxelHit->normal).x = fVar10;
        (voxelHit->normal).y = fVar11;
        (voxelHit->normal).z = fVar12;
        *(float *)&voxelHit->cubePos = fVar13;
        *(float *)&(voxelHit->cubePos).z = fVar14;
        voxelHit->face = (int32_t)fVar15;
        *(float *)&voxelHit->isCubeHit = fVar16;
        voxelHit->woId = (int32_t)fVar17;
        voxelHit->cube = pCVar18;
        voxelHit->distance = fVar19;
        voxelHit->collider = pCVar20;
        voxelHit->transform = pTVar21;
        *(float *)&voxelHit->field_0x3c = fVar22;
        voxelHit->interactionFlags = iVar23;
        func_?();
        return 1;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
  }
  return 0;
}


/* List`1[VoxelHit] MVElipsoidCast(Ray, Transform, Bounds, Boolean, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_2
          (Ray ray,Transform *transform,Bounds localBounds,bool all,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
            ((Vector3 *)&stack0xffffffcc,&localBounds,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
            ((Vector3 *)&stack0xffffffcc,&localBounds,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
            ((Vector3 *)&stack0xffffffcc,&localBounds,(MethodInfo *)0x0);
  if (transform != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
              ((Vector3 *)&stack0xffffffcc,transform,(MethodInfo *)0x0);
    pRVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        ((Regex_CachedCodeEntryKey *)&stack0xffffffcc,
                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&localBounds,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffffcc,transform,(Vector3)*pRVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pVVar2 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xffffffcc,(Vector3 *)&stack0xffffffbc,
                         (Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    uVar6 = pVVar2->x;
    uVar7 = pVVar2->y;
    fVar8 = pVVar2->z;
    radius = *pVVar2;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)(auStack_9 + 4),transform,(MethodInfo *)0x0);
    uVar10 = pVVar2->x;
    uVar11 = pVVar2->y;
    fVar12 = pVVar2->z;
    pRVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        ((Regex_CachedCodeEntryKey *)(auStack_9 + 4),
                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&ray,(MethodInfo *)0x0);
    uVar13 = pRVar1->_options;
    uVar14 = pRVar1->_cultureKey;
    ray.m_Direction.x = (float)uVar13 + ((float)uVar3 - (float)uVar10);
    ray.m_Direction.y = (float)uVar14 + ((float)uVar4 - (float)uVar11);
    ray.m_Direction.z = (float)pRVar1->_pattern + (fVar5 - fVar12);
    ray.m_Origin.z = (float)&ray;
    ray.m_Origin.y = (float)&UNK_?;
    value.y = ray.m_Direction.y;
    value.x = ray.m_Direction.x;
    value.z = ray.m_Direction.z;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
    ParticleSystem_Particle_set_position
              ((ParticleSystem_Particle *)ray.m_Origin.z,value,(MethodInfo *)0x0);
    fVar5 = ray.m_Direction.y;
    pSVar15 = (String *)ray.m_Direction.x;
    ray.m_Direction.y = (float)auStack_9;
    ray.m_Direction.z = (float)transform;
    ray.m_Direction.x = (float)&UNK_?;
    fVar12 = ray.m_Origin.x;
    fVar16 = ray.m_Origin.y;
    pSVar17 = (String *)ray.m_Origin.z;
    pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)ray.m_Direction.y,transform,(MethodInfo *)0x0);
    auStack_9._0_4_ = pQVar18->x;
    auStack_9._4_4_ = pQVar18->y;
    fStack_19 = pQVar18->z;
    puStack_20 = (undefined *)pQVar18->w;
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      distance = (float)TypeInfo__MVSweptElipsoidCheck;
      func_?();
    }
    ray.m_Origin.x = (float)pSVar15;
    localBounds.m_Extents.z = (float)ignoreWoIds;
    localBounds.m_Extents.y = (float)layerMask;
    fVar21 = localBounds.m_Extents.y;
    localBounds.m_Extents.x = distance;
    localBounds.m_Center.x = (float)auStack_9._4_4_;
    localBounds.m_Center.y = fStack_19;
    localBounds.m_Center.z = (float)puStack_20;
    _fStack_8 = CONCAT44(fVar16,fVar12);
    fVar22 = (float)pSVar17;
    ray.m_Origin.y = fVar5;
    ray.m_Origin.z = (float)transform;
    ray_00 = (Ray)CONCAT168(ray_00._0_16_,_fStack_8);
    rotation.y = (float)auStack_9._4_4_;
    rotation.x = (float)auStack_9._0_4_;
    rotation.z = fStack_19;
    rotation.w = (float)puStack_20;
    localBounds.m_Extents.y._0_1_ = (bool)layerMask;
    all_00 = localBounds.m_Extents.y._0_1_;
    ray.m_Direction.x = (float)uVar6;
    ray.m_Direction.y = (float)uVar7;
    ray.m_Direction.z = fVar8;
    localBounds.m_Extents.y = fVar21;
    pLVar23 = MVSweptElipsoidCheck_MVElipsoidCast_3
                        (ray_00,radius,rotation,distance,all_00,ignoreWoIds,layerMask,
                         (MethodInfo *)0x0);
    return pLVar23;
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pLVar23 = (List_1_VoxelHit_ *)(*pcVar24)();
  return pLVar23;
}


/* List`1[VoxelHit] MVElipsoidCast(Ray, Vector3, Quaternion, Single, Boolean,
   HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_3
          (Ray ray,Vector3 radius,Quaternion rotation,float distance,bool all,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__Clear__);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff84,0,0x48);
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pLVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
  if (pLVar1 == (List_1_VoxelHit_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    this_03 = (IndexOutOfRangeException *)func_?(uVar2);
    func_?(this_03);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this_03,pSVar3,method_00);
    func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
    func_?();
    pcVar4 = (code *)swi(3);
    pLVar1 = (List_1_VoxelHit_ *)(*pcVar4)();
    return pLVar1;
  }
  iVar5 = (pLVar1->fields)._size;
  piVar6 = &(pLVar1->fields)._version;
  *piVar6 = *piVar6 + 1;
  (pLVar1->fields)._size = 0;
  if (0 < iVar5) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pLVar1->fields)._items,0,iVar5,(MethodInfo *)0x0);
  }
  pRVar7 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                      (&RStack_8,
                       (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&ray,(MethodInfo *)0x0);
  fVar9 = (float)pRVar7->_options;
  pSVar3 = pRVar7->_cultureKey;
  pSVar10 = pRVar7->_pattern;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12 = (pVVar11->zeroVector).x;
  uVar13 = (pVVar11->zeroVector).y;
  RStack_8._pattern = (String *)(pVVar11->zeroVector).z;
  fVar14 = (float)pSVar10 - (float)RStack_8._pattern;
  RStack_8._options = uVar12;
  RStack_8._cultureKey = (String *)uVar13;
  if (_UNK_? <=
      ((float)pSVar3 - (float)uVar13) * ((float)pSVar3 - (float)uVar13) +
      (fVar9 - (float)uVar12) * (fVar9 - (float)uVar12) + fVar14 * fVar14) {
    if (all != 0) {
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVSweptElipsoidCheck);
      }
      this = (HashSet_1_UnityEngine_Vector3_ *)
             TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
      if (this == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3__Clear
                (this,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    }
    fVar9 = 0.0;
    iVar5 = 0;
    fStack_15 = 0.0;
    do {
      fVar14 = radius.x;
      if (((iVar5 != 0) && (fVar14 = radius.y, iVar5 != 1)) && (fVar14 = radius.z, iVar5 != 2))
      goto code_?;
      if (fVar9 < fVar14) {
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                          (&radius,iVar5,(MethodInfo *)0x0);
        fStack_15 = fVar9;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    pRVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        ((Regex_CachedCodeEntryKey *)&stack0xffffffdc,
                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&ray,(MethodInfo *)0x0);
    uVar16 = pRVar7->_options;
    uVar17 = pRVar7->_cultureKey;
    pSVar3 = pRVar7->_pattern;
    RStack_8._cultureKey = (String *)uVar16;
    RStack_8._pattern = (String *)uVar17;
    if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    position.y = (float)RStack_8._pattern;
    position.x = (float)RStack_8._cultureKey;
    position.z = (float)pSVar3;
    overlapAmount =
         UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                   (position,fStack_15,
                    TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                    layerMask,(MethodInfo *)0x0);
    fVar18 = ray.m_Direction.y;
    fVar19 = ray.m_Direction.z;
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = ray.m_Origin.z;
    ray_01.m_Direction.x = ray.m_Direction.x;
    ray_01.m_Direction.y = fVar18;
    ray_01.m_Direction.z = fVar19;
    puVar20 = (undefined *)ray.m_Origin.y;
    pSVar21 = (SharedCollisionFunctions__Class *)ray.m_Origin.z;
    fVar9 = ray.m_Direction.x;
    fVar14 = fStack_15;
    hitAmount = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_SphereCastNonAlloc_2
                          (ray_01,fStack_15,
                           TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer,
                           distance,layerMask,(MethodInfo *)0x0);
    uVar2._0_1_ = 0;
    uVar2._1_3_ = 0;
    RStack_8._pattern =
         (String *)TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
    overlapResult = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    this_04 = &ray;
    pRVar7 = (Regex_CachedCodeEntryKey *)&stack0xffffffd0;
    puVar22 = &UNK_?;
    pRVar23 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        (pRVar7,(KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)this_04,(MethodInfo *)0x0);
    pSVar24 = (SharedCollisionFunctions__Class *)pRVar23->_options;
    pSVar3 = pRVar23->_cultureKey;
    pSStack_25 = pRVar23->_pattern;
    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
      pSVar24 = TypeInfo__SharedCollisionFunctions;
      func_?();
    }
    origin.y = (float)pSVar3;
    origin.x = (float)pSVar24;
    origin.z = (float)pSStack_25;
    collisionData =
         SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                   (overlapAmount,overlapResult,hitAmount,(RaycastHit__Array *)RStack_8._pattern,
                    origin,(MethodInfo *)0x0);
    iVar5 = 0;
    if (collisionData == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
    for (; iVar5 < (collisionData->fields).length; iVar5 = iVar5 + 1) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (collisionData->fields).physicsCollisionDatas;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (this_00,iVar5,
                              MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                             ), RVar26 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                     (*(Transform **)((int)RVar26 + 0x14),(MethodInfo *)0x0);
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        puVar20 = &UNK_?;
        pSVar21 = TypeInfo__SharedCollisionFunctions;
        func_?();
      }
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        cRam_? = '\x01';
      }
      if ((wo != (MVWorldObjectClient *)0x0) &&
         ((ignoreWoIds == (HashSet_1_System_Int32_ *)0x0 ||
          (bVar27 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                    HashSet_1_System_Int32__Contains
                              (ignoreWoIds,(wo->fields)._.id,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                              ), bVar27 == 0)))) {
        if (all != 0) {
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          this_01 = TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
          if (this_01 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
          bVar27 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                   HashSet_1_System_Int32__Contains
                             (this_01,(wo->fields)._.id,
                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_)
          ;
          if (bVar27 != 0) goto code_?;
        }
        pSVar28 = ray.m_Direction.y;
        pSStack_29 = ray.m_Direction.z;
        fVar30 = ray.m_Origin.x;
        fVar31 = ray.m_Origin.y;
        pSVar3 = (String *)ray.m_Origin.z;
        pSVar10 = (String *)ray.m_Direction.x;
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVSweptElipsoidCheck);
        }
        radius_00.y = radius.y;
        radius_00.x = radius.x;
        ray_00.m_Origin.y = fVar31;
        ray_00.m_Origin.x = fVar30;
        ray_00.m_Origin.z = (float)pSVar3;
        ray_00.m_Direction.x = (float)pSVar10;
        ray_00.m_Direction.y = (float)pSVar28;
        ray_00.m_Direction.z = (float)pSStack_29;
        radius_00.z = radius.z;
        bVar27 = MVSweptElipsoidCheck_SphereHitDetectOnWo
                           (ray_00,radius_00,rotation,fStack_15,distance,iVar5,wo,collisionData,
                            all ^ 1,(VoxelHit *)&stack0xffffff84,ignoreWoIds,(MethodInfo *)0x0);
        if (bVar27 != 0) {
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          pLVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
          if (pLVar1 == (List_1_VoxelHit_ *)0x0) goto code_?;
          func_?(pLVar1,puVar20,pSVar21,fVar9,fVar18,fVar19,fVar14,puVar22,pRVar7,this_04
                          ,uVar2,iStack_32,pCStack_33,fStack_34,pCStack_35,pTStack_36,&UNK_?
                          ,overlapAmount,overlapResult,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
          this_02 = (HashSet_1_System_Object_ *)
                    TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
          if (this_02 == (HashSet_1_System_Object_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Add
                    (this_02,(Object *)(wo->fields)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          if (all == 0) break;
        }
      }
code_?:
    }
  }
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  return TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
}


/* Void MoveAxisAlignedRectBackward(Vector3[], Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MoveAxisAlignedRectBackward
               (Vector3__Array *pointsOnProjectPlane,Vector3 startOrigin,Vector3 dir,
               MethodInfo *method)

{
  pVVar1 = pointsOnProjectPlane;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  puStack_4 = (undefined *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor
            ((Plane *)&fStack_2,dir,startOrigin,(MethodInfo *)0x0);
  startOrigin.z = 0.0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar5 = (float)((uint)dir.z ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar6 = (float)((uint)dir.x ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar7 = (float)((uint)dir.y ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar8 = 0.0;
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar9->zeroVector).y;
  fVar11 = (pVVar9->zeroVector).z;
  VVar12.y = fVar7;
  VVar12.x = fVar6;
  VVar12.z = fVar5;
  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
            ((Ray *)&stack0xffffffc0,pVVar9->zeroVector,VVar12,(MethodInfo *)0x0);
  puVar13 = (undefined *)0x0;
  if (pointsOnProjectPlane != (Vector3__Array *)0x0) {
    pVVar14 = pointsOnProjectPlane->vector;
    for (; (int)puVar13 < (int)pVVar1->max_length; puVar13 = puVar13 + 1) {
      if ((undefined *)pVVar1->max_length <= puVar13) goto code_?;
      fVar15 = pVVar14->y;
      pointsOnProjectPlane = (Vector3__Array *)pVVar14->z;
      puVar13 = (undefined *)0x0;
      fVar16 = (float)pointsOnProjectPlane;
      bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_GetSide
                        ((Plane *)&fStack_2,*pVVar14,(MethodInfo *)0x0);
      fVar18 = fVar5;
      if (bVar17 != 0) {
        puVar13 = &UNK_?;
        fVar19 = fVar16;
        VVar12.x = fVar15;
        VVar12 = (Vector3)CONCAT84(VVar12._0_8_,VVar12.x);
        dir.x = fVar8;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
        ParticleSystem_Particle_set_position
                  ((ParticleSystem_Particle *)&stack0xffffffc0,VVar12,(MethodInfo *)0x0);
        dir.y = (float)&stack0xfffffff8;
        dir.z = 0.0;
        puVar20 = &UNK_?;
        ray.m_Origin.y = fVar11;
        ray.m_Origin.x = fVar10;
        ray.m_Origin.z = fVar6;
        ray.m_Direction.x = fVar7;
        ray.m_Direction.y = fVar5;
        ray.m_Direction.z = dir.x;
        fVar18 = fVar5;
        fVar8 = dir.x;
        bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                          ((Plane *)&fStack_2,ray,(float *)dir.y,(MethodInfo *)0x0);
        startOrigin.z = fVar5;
        if ((bVar17 != 0) && (fVar5 < (float)puVar20)) {
          startOrigin.z = (float)puVar20;
        }
      }
      pVVar14 = pVVar14 + 1;
      fVar5 = fVar18;
    }
    if (_UNK_? < startOrigin.z) {
      fVar10 = (float)((uint)dir.x ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      fVar11 = (float)((uint)dir.y ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      fVar5 = (float)((uint)dir.z ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      pVVar14 = pVVar1->vector;
      for (uVar21 = 0; (int)uVar21 < (int)pVVar1->max_length; uVar21 = uVar21 + 1) {
        if (pVVar1->max_length <= uVar21) goto code_?;
        uVar22 = pVVar14->x;
        uVar23 = pVVar14->y;
        pVVar14->x = (float)uVar22 + fVar10 * startOrigin.z;
        pVVar14->y = (float)uVar23 + fVar11 * startOrigin.z;
        pVVar14->z = pVVar14->z + fVar5 * startOrigin.z;
        pVVar14 = pVVar14 + 1;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
code_?:
  func_?();
  goto code_?;
}


/* Void MoveAxisAlignedRectOutOfBox(Vector3[], Vector3, Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
               (Vector3__Array *axisAlignedRect,Vector3 localNormal,Vector3 localHit,
               Vector3 localDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  inNormal.y = (float)((uint)localNormal.y ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  inNormal.x = (float)((uint)localNormal.x ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  inNormal.z = (float)((uint)localNormal.z ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
            (&TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane0,inNormal,localHit,
             (MethodInfo *)0x0);
  localNormal.z = 0.0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar2 = (float)((uint)localDir.z ^
                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar3 = (float)((uint)localDir.x ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar4 = (float)((uint)localDir.y ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar5 = 0.0;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar8 = (pVVar6->zeroVector).z;
  direction.y = fVar4;
  direction.x = fVar3;
  direction.z = fVar2;
  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
            ((Ray *)&stack0xffffffe0,pVVar6->zeroVector,direction,(MethodInfo *)0x0);
  uVar9 = 0;
  if (axisAlignedRect != (Vector3__Array *)0x0) {
    pVVar10 = axisAlignedRect->vector;
    for (; (int)uVar9 < (int)axisAlignedRect->max_length; uVar9 = uVar9 + 1) {
      if (axisAlignedRect->max_length <= uVar9) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
      ParticleSystem_Particle_set_position
                ((ParticleSystem_Particle *)&stack0xffffffe0,*pVVar10,(MethodInfo *)0x0);
      localNormal.z = fVar8;
      localDir.x = fVar5;
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        localNormal.z = fVar8;
        localDir.x = fVar5;
      }
      localDir.z = 0.0;
      localDir.y = (float)&fStack_1;
      ray.m_Origin.y = localNormal.z;
      ray.m_Origin.x = fVar7;
      ray.m_Origin.z = fVar3;
      ray.m_Direction.x = fVar4;
      ray.m_Direction.y = fVar2;
      ray.m_Direction.z = localDir.x;
      fVar8 = localNormal.z;
      fVar5 = localDir.x;
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                        (&TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane0,ray,
                         (float *)localDir.y,(MethodInfo *)0x0);
      if ((bVar11 != 0) && (localNormal.z < fStack_1)) {
        localNormal.z = fStack_1;
      }
      pVVar10 = (Vector3 *)&UNK_?;
    }
    if (localNormal.z != _UNK_?) {
      fVar7 = (float)((uint)localNormal.z ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      pVVar10 = axisAlignedRect->vector;
      for (uVar9 = 0; (int)uVar9 < (int)axisAlignedRect->max_length; uVar9 = uVar9 + 1) {
        if (axisAlignedRect->max_length <= uVar9) goto code_?;
        uVar12 = pVVar10->x;
        uVar13 = pVVar10->y;
        pVVar10->x = (float)uVar12 + localDir.x * fVar7;
        pVVar10->y = (float)uVar13 + localDir.y * fVar7;
        pVVar10->z = pVVar10->z + localDir.z * fVar7;
        pVVar10 = pVVar10 + 1;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
code_?:
  func_?();
  goto code_?;
}


/* Boolean RayCast(Ray, Vector3 ByRef, Plane) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_RayCast
               (Ray ray,Vector3 *hit,Plane collPlane,MethodInfo *method)

{
  fStack_1 = 0.0;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    (&collPlane,ray,&fStack_1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pRVar3 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     ((Regex_CachedCodeEntryKey *)&stack0xffffffec,
                      (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&ray,(MethodInfo *)0x0);
  uStack_4._0_4_ = (float)pRVar3->_options;
  uStack_4._4_4_ = (float)pRVar3->_cultureKey;
  mscorlib.dll::System::Collections::Generic::
  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::RegularExpressions::
  Regex+CachedCodeEntryKey,System::Object]::
  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
            (&RStack_5,
             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
              *)&ray,(MethodInfo *)0x0);
  puVar6 = (undefined8 *)func_?();
  uVar7 = *puVar6;
  fVar8 = *(float *)(puVar6 + 1);
  hit->x = (float)uStack_4 + (float)uVar7 * fStack_1;
  hit->y = uStack_4._4_4_ + (float)(String *)((ulonglong)uVar7 >> 0x20) * fStack_1;
  hit->z = (float)puStack_9 + fVar8 * fStack_1;
  return 1;
}


/* Void SetFoundHitVariables(VoxelHit ByRef, PhysicsCollisionData, Int32, InteractionFlags) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_SetFoundHitVariables
               (VoxelHit *voxelHit,PhysicsCollisionData *collisionData,int32_t woId,
               InteractionFlags__Enum interactionFlag,MethodInfo *method)

{
  voxelHit->isCubeHit = 1;
  voxelHit->woId = woId;
  if (collisionData != (PhysicsCollisionData *)0x0) {
    pCVar1 = (collisionData->fields).collider;
    voxelHit->collider = pCVar1;
    func_?(&voxelHit->collider,pCVar1);
    pTVar2 = (collisionData->fields).transform;
    voxelHit->transform = pTVar2;
    func_?(&voxelHit->transform,pTVar2);
    *(InteractionFlags__Enum *)&voxelHit->interactionFlags = interactionFlag;
    *(MethodInfo **)((int)&voxelHit->interactionFlags + 4) = method;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean SphereHitDetectOnWo(Ray, Vector3, Quaternion, Single, Single, Int32, MVWorldObjectClient,
   PhysicsCollisionDatasWrapper, Boolean, VoxelHit ByRef, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_SphereHitDetectOnWo
               (Ray ray,Vector3 radius,Quaternion rotation,float maxRadius,float distance,int32_t i,
               MVWorldObjectClient *wo,PhysicsCollisionDatasWrapper *collisionData,
               bool handleObjectsInsideBoxCollider,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__BoxCollider);
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  iVar1 = func_?(wo,TypeInfo__ICubeModelCollider);
  if (iVar1 == 0) {
    if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (collisionData->fields).physicsCollisionDatas;
      if ((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,i,
                              MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                             ), RVar3 != (RegexCharClass_SingleRange)0x0)) {
        if (*(char *)((int)RVar3 + 0x18) != '\0') {
          return 0;
        }
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (collisionData->fields).physicsCollisionDatas;
        if ((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar2,i,
                                MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                               ), wo != (MVWorldObjectClient *)0x0)) {
          woId = (wo->fields)._.id;
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCollisionFunctions);
          }
          SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                    (voxelHit,(PhysicsCollisionData *)RVar3,woId,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
    goto code_?;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff70,
                       TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,rotation,radius,
                       (MethodInfo *)0x0);
  fVar5 = pMVar4->m00;
  fVar6 = pMVar4->m10;
  fVar7 = pMVar4->m20;
  fVar8 = pMVar4->m30;
  fVar9 = pMVar4->m01;
  fVar10 = pMVar4->m11;
  fVar11 = pMVar4->m21;
  fVar12 = pMVar4->m31;
  fVar13 = pMVar4->m02;
  fVar14 = pMVar4->m12;
  fVar15 = pMVar4->m22;
  fVar16 = pMVar4->m32;
  fVar17 = pMVar4->m03;
  fVar18 = pMVar4->m13;
  fVar19 = pMVar4->m23;
  fVar20 = pMVar4->m33;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar21 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar21->elipsoidSpaceToWorld).m00 = fVar5;
  (pMVar21->elipsoidSpaceToWorld).m10 = fVar6;
  (pMVar21->elipsoidSpaceToWorld).m20 = fVar7;
  (pMVar21->elipsoidSpaceToWorld).m30 = fVar8;
  (pMVar21->elipsoidSpaceToWorld).m01 = fVar9;
  (pMVar21->elipsoidSpaceToWorld).m11 = fVar10;
  (pMVar21->elipsoidSpaceToWorld).m21 = fVar11;
  (pMVar21->elipsoidSpaceToWorld).m31 = fVar12;
  (pMVar21->elipsoidSpaceToWorld).m02 = fVar13;
  (pMVar21->elipsoidSpaceToWorld).m12 = fVar14;
  (pMVar21->elipsoidSpaceToWorld).m22 = fVar15;
  (pMVar21->elipsoidSpaceToWorld).m32 = fVar16;
  (pMVar21->elipsoidSpaceToWorld).m03 = fVar17;
  (pMVar21->elipsoidSpaceToWorld).m13 = fVar18;
  (pMVar21->elipsoidSpaceToWorld).m23 = fVar19;
  (pMVar21->elipsoidSpaceToWorld).m33 = fVar20;
  pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                      ((Matrix4x4 *)&stack0xffffff70,
                       &TypeInfo__MVSweptElipsoidCheck->static_fields->elipsoidSpaceToWorld,
                       (MethodInfo *)0x0);
  fVar9 = pMVar4->m10;
  fVar10 = pMVar4->m20;
  fVar11 = pMVar4->m30;
  fVar12 = pMVar4->m01;
  fVar13 = pMVar4->m11;
  fVar14 = pMVar4->m21;
  fVar15 = pMVar4->m31;
  fVar16 = pMVar4->m02;
  fVar17 = pMVar4->m12;
  fVar18 = pMVar4->m22;
  fVar19 = pMVar4->m32;
  fVar20 = pMVar4->m03;
  fVar5 = pMVar4->m13;
  fVar6 = pMVar4->m23;
  fVar7 = pMVar4->m33;
  pMVar21 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar21->worldToElipsoidSpace).m00 = pMVar4->m00;
  (pMVar21->worldToElipsoidSpace).m10 = fVar9;
  (pMVar21->worldToElipsoidSpace).m20 = fVar10;
  (pMVar21->worldToElipsoidSpace).m30 = fVar11;
  (pMVar21->worldToElipsoidSpace).m01 = fVar12;
  (pMVar21->worldToElipsoidSpace).m11 = fVar13;
  (pMVar21->worldToElipsoidSpace).m21 = fVar14;
  (pMVar21->worldToElipsoidSpace).m31 = fVar15;
  (pMVar21->worldToElipsoidSpace).m02 = fVar16;
  (pMVar21->worldToElipsoidSpace).m12 = fVar17;
  (pMVar21->worldToElipsoidSpace).m22 = fVar18;
  (pMVar21->worldToElipsoidSpace).m32 = fVar19;
  (pMVar21->worldToElipsoidSpace).m03 = fVar20;
  (pMVar21->worldToElipsoidSpace).m13 = fVar5;
  (pMVar21->worldToElipsoidSpace).m23 = fVar6;
  (pMVar21->worldToElipsoidSpace).m33 = fVar7;
  chunk = TypeInfo__ICubeModelCollider;
  if (wo == (MVWorldObjectClient *)0x0) {
    cmb = (ICubeModelCollider *)0x0;
code_?:
    MVSweptElipsoidCheck_GetBoundRays(ray,cmb,(MethodInfo *)0x0);
    if (collisionData == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (collisionData->fields).physicsCollisionDatas;
    if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar2,i,
                            MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                           ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    chunk = *(ICubeModelCollider__Class **)((int)RVar3 + 0x2c);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (collisionData->fields).physicsCollisionDatas;
    if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar2,i,
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                       );
    boundRays = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
    pIStack_22 = TypeInfo__ICubeModelCollider;
    wo_00 = wo;
    if ((wo == (MVWorldObjectClient *)0x0) ||
       (wo_00 = (MVWorldObjectClient *)func_?(wo,TypeInfo__ICubeModelCollider),
       wo_00 != (MVWorldObjectClient *)0x0)) {
      if ((chunk == (ICubeModelCollider__Class *)0x0) ||
         ((pBVar23 = TypeInfo__UnityEngine__BoxCollider, wo = wo_00,
          (TypeInfo__UnityEngine__BoxCollider->_1).typeHierarchyDepth <=
          (((BoxCollider__Class *)(chunk->_0).image)->_1).typeHierarchyDepth &&
          ((((BoxCollider__Class *)(chunk->_0).image)->_1).typeHierarchy
           [(TypeInfo__UnityEngine__BoxCollider->_1).typeHierarchyDepth - 1] ==
           (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)))) {
        bVar24 = MVSweptElipsoidCheck_LayerScan
                           (voxelHit,radius,maxRadius,(BoxCollider *)chunk,distance,
                            (ICubeModelCollider *)wo_00,(PhysicsCollisionData *)RVar3,ray,boundRays
                            ,(MethodInfo *)0x0);
        if (bVar24 == 0) {
          return 0;
        }
        if (handleObjectsInsideBoxCollider == 0) {
          return 1;
        }
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MVSweptElipsoidCheck_HandleObjectsInsideBoxCollider
                  (ray,radius,rotation,maxRadius,distance,i,collisionData,voxelHit,
                   TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays,ignoreWoIds,
                   (MethodInfo *)0x0);
        return 1;
      }
      goto code_?;
    }
  }
  else {
    cmb = (ICubeModelCollider *)func_?(wo,TypeInfo__ICubeModelCollider);
    if (cmb != (ICubeModelCollider *)0x0) goto code_?;
    func_?(wo,chunk);
    pBVar23 = extraout_EDX;
code_?:
    func_?(chunk,pBVar23);
  }
  func_?(wo,pIStack_22);
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  bVar24 = (*pcVar25)();
  return bVar24;
}


/* MVSweptElipsoidCheck() */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellTraverser);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<VoxelHit>);
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    func_?(&TypeInfo__UnityEngine__Ray);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                          );
  if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
              );
    TypeInfo__MVSweptElipsoidCheck->static_fields->debugTestedIntVector =
         (HashSet_1_MV_WorldObject_IntVector_ *)pHVar1;
    func_?(TypeInfo__MVSweptElipsoidCheck->static_fields,pHVar1);
    this = (CellTraverser *)func_?(TypeInfo__CellTraverser);
    if (this != (CellTraverser *)0x0) {
      CellTraverser::CellTraverser__ctor(this,(MethodInfo *)0x0);
      TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser = this;
      func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser,this);
      pMVar2 = TypeInfo__MVSweptElipsoidCheck->static_fields;
      (pMVar2->collisionPlane).m_Normal.x = 0.0;
      (pMVar2->collisionPlane).m_Normal.y = 0.0;
      (pMVar2->collisionPlane).m_Normal.z = 0.0;
      (pMVar2->collisionPlane).m_Distance = 0.0;
      pMVar2 = TypeInfo__MVSweptElipsoidCheck->static_fields;
      (pMVar2->collisionPlane0).m_Normal.x = 0.0;
      (pMVar2->collisionPlane0).m_Normal.y = 0.0;
      (pMVar2->collisionPlane0).m_Normal.z = 0.0;
      (pMVar2->collisionPlane0).m_Distance = 0.0;
      pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
               func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3___ctor
                  (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos = (HashSet_1_System_Int32_ *)pHVar1;
        func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos,pHVar1);
        this_00 = (List_1_VoxelHit_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<VoxelHit>);
        if (this_00 != (List_1_VoxelHit_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)this_00,
                     MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
          TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits = this_00;
          func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits,this_00);
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
          TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace = pVVar3;
          func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace
                          ,pVVar3);
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
          TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace = pVVar3;
          func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace,
                          pVVar3);
          func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached,0,0x48);
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
          TypeInfo__MVSweptElipsoidCheck->static_fields->
          cornerPointsLocalSpaceCalculateAxisAlignedRect = pVVar3;
          func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->
                           cornerPointsLocalSpaceCalculateAxisAlignedRect);
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,2);
          TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect = pVVar3;
          func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->
                           minMaxCalculateAxisAlignedRect,pVVar3);
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (pVVar3 != (Vector3__Array *)0x0) {
            fVar5 = (pVVar4->upVector).y;
            fVar6 = (pVVar4->upVector).z;
            if (pVVar3->max_length != 0) {
              pVVar3->vector[0].x = (pVVar4->upVector).x;
              pVVar3->vector[0].y = fVar5;
              pVVar3->vector[0].z = fVar6;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
              fVar5 = (pVVar4->forwardVector).y;
              fVar6 = (pVVar4->forwardVector).z;
              if (1 < pVVar3->max_length) {
                pVVar3->vector[1].x = (pVVar4->forwardVector).x;
                pVVar3->vector[1].y = fVar5;
                pVVar3->vector[1].z = fVar6;
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Vector3);
                  cRam_? = '\x01';
                }
                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                fVar5 = (pVVar4->rightVector).y;
                fVar6 = (pVVar4->rightVector).z;
                if (2 < pVVar3->max_length) {
                  pVVar3->vector[2].x = (pVVar4->rightVector).x;
                  pVVar3->vector[2].y = fVar5;
                  pVVar3->vector[2].z = fVar6;
                  TypeInfo__MVSweptElipsoidCheck->static_fields->
                  testVectorGetMaxAngleLocalAxisVector = pVVar3;
                  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->
                                   testVectorGetMaxAngleLocalAxisVector,pVVar3);
                  pRVar7 = (Ray__Array *)func_?(TypeInfo__UnityEngine__Ray,4);
                  TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays = pRVar7;
                  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays,
                                  pRVar7);
                  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
                  TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays = pVVar3;
                  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->
                                   circleCornersGetBoundRays,pVVar3);
                  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
                  TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane = pVVar3;
                  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,
                                  pVVar3);
                  return;
                }
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

