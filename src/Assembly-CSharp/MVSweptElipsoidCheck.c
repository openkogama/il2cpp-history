
/* Void CalculateAxisAlignedRect(Vector3[], Transform) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CalculateAxisAlignedRect
               (Vector3__Array *hitsClockwise,Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (hitsClockwise == (Vector3__Array *)0x0) goto code_?;
    if (hitsClockwise->max_length <= uVar1) goto code_?;
    if (t == (Transform *)0x0) goto code_?;
    pMVar3 = (MethodInfo *)&UNK_?;
    position.z = *(float *)((int)&hitsClockwise->vector[0].z + iVar2);
    position._0_8_ = *(undefined8 *)((int)&hitsClockwise->vector[0].x + iVar2);
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
    if (pVVar7->max_length <= uVar1) goto code_?;
    uVar1 = uVar1 + 1;
    *(undefined8 *)((int)&pVVar7->vector[0].x + iVar2) = _ppIStack_10;
    *(_union_155 *)((int)&pVVar7->vector[0].z + iVar2) = _Stack_8;
    iVar2 = iVar2 + 0xc;
  } while (iVar2 < 0x30);
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->
           cornerPointsLocalSpaceCalculateAxisAlignedRect;
  if (pVVar7 != (Vector3__Array *)0x0) {
    if (pVVar7->max_length == 0) goto code_?;
    VStack_5.x = pVVar7->vector[0].x;
    VStack_5.y = pVVar7->vector[0].y;
    iVar2 = 1;
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
        pVVar4 = (Vector3 *)func_?(iVar2,index,0);
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
          pVVar10 = (Vector3 *)func_?(iVar2,index,0);
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
        pVVar4 = (Vector3 *)func_?(iVar2,index,0);
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
          pVVar10 = (Vector3 *)func_?(iVar2,index,0);
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
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
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
    fVar3 = collisionState->scaledMaxRadius * moveDistance;
    fVar4 = collisionState->scaledMaxRadius + _UNK_?;
    uVar5 = (collisionState->localDirection).x;
    uVar6 = (collisionState->localDirection).y;
    fVar7 = (float)(int)pos.x - ((float)uVar1 + (float)uVar5 * fVar3);
    fVar8 = (float)(int)pos.y - ((float)uVar2 + (float)uVar6 * fVar3);
    fVar3 = (float)(int)pos.z -
            ((collisionState->localOrigin).z + (collisionState->localDirection).z * fVar3);
    if (fVar4 * fVar4 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3) {
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    func_?();
    fStack_4 = VStack_2.x;
    pVStack_5 = (VisualTreeAsset *)VStack_1.y;
    func_?(this);
    func_?(this,VStack_1.x,VStack_1.y,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    fStack_4 = VStack_1.x;
    pVStack_5 = (VisualTreeAsset *)VStack_2.y;
    func_?(this,VStack_1.x,VStack_2.y,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    index_00 = 0;
    while( true ) {
      VStack_6.z = 0.0;
      VStack_6.x = 0.0;
      VStack_6.y = 0.0;
      VStack_7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (this,index_00,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
      MathFunctions::MathFunctions_Vector2ToVector3
                (&VStack_7,&VStack_6,ignoreAxis,localIgnoreAxisValue,(MethodInfo *)0x0);
      if (t == (Transform *)0x0) break;
      position.z = VStack_6.z;
      position.x = VStack_6.x;
      position.y = VStack_6.y;
      pAVar8 = (AnimatedTextureOffset_TextureOffsetAnimationData *)
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                          (&VStack_9,t,position,(MethodInfo *)0x0);
      pMVar10 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      fVar11 = pAVar8->textureOffset;
      fVar12 = pAVar8->frameToChangeTextureAt;
      pVVar13 = *(VisualTreeAsset **)&pAVar8->hasAlreadyTransitioned;
      item = *pAVar8;
      if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
      piVar14 = &(this_00->fields)._version;
      *piVar14 = *piVar14 + 1;
      pVVar15 = (this_00->fields)._items;
      if (pVVar15 == (VisualTreeAsset_UsingEntry__Array *)0x0) break;
      uVar16 = (this_00->fields)._size;
      if (uVar16 < pVVar15->max_length) {
        (this_00->fields)._size = uVar16 + 1;
        if (pVVar15->max_length <= uVar16) goto code_?;
        pVVar15->vector[uVar16].alias = (String *)fVar11;
        pVVar15->vector[uVar16].path = (String *)fVar12;
        pVVar15->vector[uVar16].asset = pVVar13;
      }
      else {
        mscorlib.dll::System::Collections::Generic::
        List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
        List_1_AnimatedTextureOffset_TextureOffsetAnimationData__AddWithResize
                  ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,item,
                   pMVar10->klass->rgctx_data[0xe].method);
      }
      index_00 = index_00 + 1;
      this = pLStack_3;
      if (3 < index_00) {
        uVar16 = 0;
        do {
          index_01 = uVar16 & 3;
          pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              (&VStack_18,this_00,index_01,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uStack_19._0_4_ = pVVar17->alias;
          uStack_19._4_4_ = pVVar17->path;
          pVStack_5 = pVVar17->asset;
          pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffff78,this_00,index_01,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar16 = uVar16 + 1;
          fVar11 = (float)pVVar17->alias;
          fVar12 = (float)pVVar17->path;
          pVVar13 = pVVar17->asset;
          index = uVar16 & 0x80000003;
          if ((int)index < 0) {
            index = (index - 1 | 0xfffffffc) + 1;
          }
          pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffff6c,this_00,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar20 = pVVar17->alias;
          uVar21 = pVVar17->path;
          pLStack_3 = (List_1_UnityEngine_Vector2_ *)((float)uVar21 + fVar12);
          fStack_22 = (float)pVVar17->asset + (float)pVVar13;
          pVVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                    VisualTreeAsset+UsingEntry]::
                    List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                              ((VisualTreeAsset_UsingEntry *)&stack0xffffff60,this_00,index_01,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                              );
          uVar23 = pVVar17->alias;
          uVar24 = pVVar17->path;
          VStack_9.x = ((float)uVar20 + fVar11) - (float)uVar23;
          VStack_9.y = (float)pLStack_3 - (float)uVar24;
          VStack_9.z = fStack_22 - (float)pVVar17->asset;
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          VStack_7.y = (float)&UNK_?;
          start.z = (float)pVStack_5;
          start.x = (float)(undefined4)uStack_19;
          start.y = (float)uStack_19._4_4_;
          end.y = VStack_9.y;
          end.x = VStack_9.x;
          end.z = VStack_9.z;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_2
                    (start,end,(MethodInfo *)0x0);
        } while ((int)uVar16 < 4);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pVVar1 = MVSweptElipsoidCheck_GetMaxAngleLocalAxisVector
                      ((Vector3 *)&stack0xffffffc8,ray,cmb,(MethodInfo *)0x0);
  fVar2 = pVVar1->x;
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
            ((Vector3 *)&stack0xffffffc8,
             &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace,ray.m_Direction,
             (MethodInfo *)0x0);
  vector_00.y = fVar3;
  vector_00.x = fVar2;
  vector_00.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                      ((Vector3 *)&stack0xffffffc8,
                       &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace,
                       vector_00,(MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  value_01.y = fVar4 * (float)uVar5 - fVar2 * pVVar1->z;
  value_01.x = fVar3 * pVVar1->z - fVar4 * (float)uVar6;
  value_01.z = fVar2 * (float)uVar6 - fVar3 * (float)uVar5;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffc8,value_01,(MethodInfo *)0x0);
  uVar7._0_4_ = pVVar1->x;
  uVar7._4_4_ = pVVar1->y;
  fVar8 = pVVar1->z;
  fVar9 = fVar3 * fVar8 - fVar4 * (float)uVar7._4_4_;
  fVar4 = fVar4 * (float)(undefined4)uVar7 - fVar2 * fVar8;
  value.y = fVar4;
  value.x = fVar9;
  value.z = fVar2 * (float)uVar7._4_4_ - fVar3 * (float)(undefined4)uVar7;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffec,value,(MethodInfo *)0x0);
  uVar10 = pVVar1->x;
  uVar11 = pVVar1->y;
  fVar12 = (float)uVar7;
  fVar2 = pVVar1->z;
  fVar3 = pVVar1->z;
  fVar13 = (float)((ulonglong)uVar7 >> 0x20);
  pVVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
  if (pVVar14 != (Vector3__Array *)0x0) {
    if (pVVar14->max_length != 0) {
      pVVar14->vector[0].x = fVar12 + (float)uVar10;
      pVVar14->vector[0].y = fVar13 + (float)uVar11;
      pVVar14->vector[0].z = fVar8 + fVar3;
      pVVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
      if (1 < pVVar14->max_length) {
        pVVar14->vector[1].x = fVar12 - (float)uVar10;
        uVar15 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
        pVVar14->vector[1].y = fVar13 - (float)uVar11;
        pVVar14->vector[1].z = fVar8 - fVar2;
        pVVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
        if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
        if (2 < pVVar14->max_length) {
          pVVar14->vector[2].x = (float)uVar10 + (float)((uint)fVar12 ^ uVar15);
          pVVar14->vector[2].y = (float)uVar11 + (float)((uint)fVar13 ^ uVar15);
          pVVar14->vector[2].z = fVar2 + (float)((uint)fVar8 ^ uVar15);
          pVVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
          if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
          if (3 < pVVar14->max_length) {
            uVar16 = 0;
            iVar17 = 0;
            pVVar14->vector[3].x = (float)((uint)fVar12 ^ uVar15) - (float)uVar10;
            pVVar14->vector[3].y = (float)((uint)fVar13 ^ uVar15) - (float)uVar11;
            pVVar14->vector[3].z = (float)((uint)fVar8 ^ uVar15) - fVar2;
            cmb = (ICubeModelCollider *)0x0;
            while( true ) {
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
              if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
              if ((int)pVVar14->max_length <= (int)uVar16) {
                return;
              }
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pMVar18 = TypeInfo__MVSweptElipsoidCheck->static_fields;
              pRVar19 = pMVar18->raysGetBoundRays;
              if ((pRVar19 == (Ray__Array *)0x0) ||
                 (pVVar14 = pMVar18->circleCornersGetBoundRays, pVVar14 == (Vector3__Array *)0x0))
              goto code_?;
              if (pVVar14->max_length <= uVar16) break;
              vector.z = *(float *)((int)&pVVar14->vector[0].x + (int)(cmb + 3 + -2));
              vector._0_8_ = *(undefined8 *)((int)&pVVar14->vector[0].x + (int)(cmb + 2 + -2));
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                  ((Vector3 *)&stack0xffffffe0,&pMVar18->elipsoidSpaceToWorld,vector
                                   ,(MethodInfo *)0x0);
              uVar20 = pVVar1->x;
              uVar21 = pVVar1->y;
              fVar2 = pVVar1->z;
              if (pRVar19->max_length <= uVar16) break;
              *(ulonglong *)((int)&pRVar19->vector[0].m_Origin.x + iVar17) =
                   CONCAT44((float)&stack0xffffffec + (float)uVar21,(float)uVar20 + 3.268322e-29);
              *(float *)((int)&pRVar19->vector[0].m_Origin.z + iVar17) = fVar9 + fVar2;
              pRVar19 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
              if (pRVar19 == (Ray__Array *)0x0) goto code_?;
              if (pRVar19->max_length <= uVar16) break;
              value_00.y = (float)&UNK_?;
              value_00.x = fVar4;
              value_00.z = (float)&stack0xffffffe0;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&puStack_22,value_00,(MethodInfo *)0x0);
              uVar16 = uVar16 + 1;
              fVar2 = pVVar1->z;
              cmb = (ICubeModelCollider *)&(pMVar18->elipsoidSpaceToWorld).m30;
              *(undefined8 *)((int)&pRVar19->vector[0].m_Direction.x + iVar17) =
                   *(undefined8 *)pVVar1;
              *(float *)((int)&pRVar19->vector[0].m_Direction.z + iVar17) = fVar2;
              iVar17 = iVar17 + 0x18;
            }
          }
        }
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  fStack_1 = _UNK_?;
  uStack_2 = (ulonglong)(uint)uStack_2;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  fStack_3 = 0.0;
  while (cmb != (ICubeModelCollider *)0x0) {
    pIVar4 = cmb->klass;
    uVar5 = 0;
    uVar6._0_1_ = (pIVar4->_1).rank;
    uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar6 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppMVar7 = &(&(cmb->klass->vtable).get_WorldRotation)
                     [pIVar4->interfaceOffsets[uVar5].offset].method;
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    ppMVar7 = (MethodInfo **)func_?(cmb,TypeInfo__ICubeModelCollider,6);
code_?:
    puVar8 = (undefined4 *)(*(code *)*ppMVar7)(auStack_9,cmb,ppMVar7[1]);
    uVar10 = *puVar8;
    uVar11 = puVar8[1];
    uVar12 = puVar8[2];
    fVar13 = (float)puVar8[3];
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVSweptElipsoidCheck);
    }
    fVar14 = fStack_3;
    pVVar15 = TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector;
    if (pVVar15 == (Vector3__Array *)0x0) break;
    uVar16 = uStack_2._4_4_;
    if (pVVar15->max_length <= uStack_2._4_4_) goto code_?;
    rotation.y = (float)uVar11;
    rotation.x = (float)uVar10;
    rotation.z = (float)uVar12;
    rotation.w = fVar13;
    point.z = *(float *)((int)&pVVar15->vector[0].z + (int)fStack_3);
    point._0_8_ = *(undefined8 *)((int)&pVVar15->vector[0].x + (int)fStack_3);
    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       (&VStack_18,rotation,point,(MethodInfo *)0x0);
    uStack_2._0_4_ = (uint)pVVar17->x;
    uStack_2._4_4_ = (uint)pVVar17->y;
    fStack_3 = pVVar17->z;
    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_19,*pVVar17,(MethodInfo *)0x0);
    uStack_20._0_4_ = pVVar17->x;
    uStack_20._4_4_ = pVVar17->y;
    fStack_21 = pVVar17->z;
    fVar13 = (float)((uint)(ray.m_Direction.x * (float)(undefined4)uStack_20 +
                            ray.m_Direction.y * (float)uStack_20._4_4_ +
                           ray.m_Direction.z * fStack_21) & _UNK_?);
    if (fVar13 < fStack_1) {
      __return_storage_ptr__->x = (float)(uint)uStack_2;
      __return_storage_ptr__->y = (float)uStack_2._4_4_;
      __return_storage_ptr__->z = fStack_3;
      fStack_1 = fVar13;
    }
    fStack_3 = (float)((int)fVar14 + 0xc);
    uStack_2 = CONCAT44(uVar16 + 1,(uint)uStack_2);
    if (0x23 < (int)fStack_3) {
      return __return_storage_ptr__;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  pVVar17 = (Vector3 *)(*pcVar22)();
  return pVVar17;
}


/* Vector3 GetPlaneNormal(Vector3) */

Vector3 * Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetPlaneNormal
                    (Vector3 *__return_storage_ptr__,Vector3 localDir,MethodInfo *method)

{
  fVar1 = (float)((uint)localDir.x & _UNK_?);
  fVar2 = (float)((uint)localDir.y & _UNK_?);
  if ((fVar1 < fVar2) || (fVar1 < (float)((uint)localDir.z & _UNK_?))) {
    if ((fVar1 <= fVar2) && ((float)((uint)localDir.z & _UNK_?) <= fVar2)) {
      fStack_3 = 0.0;
      fStack_4 = 0.0;
      if (0.0 <= localDir.y) {
        fVar5 = (float10)func_?((double)localDir.y);
        fVar2 = (float)fVar5;
      }
      else {
        fVar5 = (float10)func_?((double)localDir.y);
        fVar2 = (float)fVar5;
      }
      goto code_?;
    }
    fStack_4 = 0.0;
    if (0.0 <= localDir.z) {
      fVar5 = (float10)func_?((double)localDir.z);
    }
    else {
      fVar5 = (float10)func_?((double)localDir.z);
    }
    fStack_3 = (float)fVar5;
  }
  else {
    fStack_3 = 0.0;
    if (0.0 <= localDir.x) {
      fVar5 = (float10)func_?((double)localDir.x);
      fStack_4 = (float)fVar5;
    }
    else {
      fVar5 = (float10)func_?((double)localDir.x);
      fStack_4 = (float)fVar5;
    }
  }
  fVar2 = 0.0;
code_?:
  fVar2 = fVar2 * _UNK_?;
  fStack_3 = fStack_3 * _UNK_?;
  __return_storage_ptr__->x = fStack_4 * _UNK_?;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fStack_3;
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
  if (boundRays != (Ray__Array *)0x0) {
    if (boundRays->max_length == 0) goto code_?;
    pRStack_2 = boundRays->vector;
    if (pVVar1 != (Vector3__Array *)0x0) {
      fVar3 = (pRStack_2->m_Origin).y;
      fVar4 = boundRays->vector[0].m_Origin.z;
      if (pVVar1->max_length == 0) goto code_?;
      pVVar1->vector[0].x = (pRStack_2->m_Origin).x;
      pVVar1->vector[0].y = fVar3;
      pVVar1->vector[0].z = fVar4;
      pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
      if (boundRays->max_length < 2) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar3 = boundRays->vector[1].m_Origin.y;
        fVar4 = boundRays->vector[1].m_Origin.z;
        if (pVVar1->max_length < 2) goto code_?;
        pVVar1->vector[1].x = boundRays->vector[1].m_Origin.x;
        pVVar1->vector[1].y = fVar3;
        pVVar1->vector[1].z = fVar4;
        pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
        if (boundRays->max_length < 3) goto code_?;
        if (pVVar1 != (Vector3__Array *)0x0) {
          fVar3 = boundRays->vector[2].m_Origin.y;
          fVar4 = boundRays->vector[2].m_Origin.z;
          if (pVVar1->max_length < 3) goto code_?;
          pVVar1->vector[2].x = boundRays->vector[2].m_Origin.x;
          pVVar1->vector[2].y = fVar3;
          pVVar1->vector[2].z = fVar4;
          pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
          if (boundRays->max_length < 4) goto code_?;
          if (pVVar1 != (Vector3__Array *)0x0) {
            fVar3 = boundRays->vector[3].m_Origin.y;
            fVar4 = boundRays->vector[3].m_Origin.z;
            if (3 < pVVar1->max_length) {
              pVVar1->vector[3].x = boundRays->vector[3].m_Origin.x;
              pVVar1->vector[3].y = fVar3;
              uVar5 = 0;
              pVVar1->vector[3].z = fVar4;
              iStack_6 = 0;
              while (uVar5 < boundRays->max_length) {
                fStack_7 = (pRStack_2->m_Origin).x;
                fStack_8 = (pRStack_2->m_Origin).y;
                fStack_9 = (pRStack_2->m_Origin).z;
                fStack_10 = (pRStack_2->m_Direction).x;
                uStack_11._0_4_ = (pRStack_2->m_Direction).y;
                uStack_11._4_4_ = (pRStack_2->m_Direction).z;
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MVSweptElipsoidCheck);
                }
                pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
                if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                if (pVVar1->max_length <= uVar5) break;
                ray.m_Origin.y = fStack_8;
                ray.m_Origin.x = fStack_7;
                ray.m_Origin.z = fStack_9;
                ray.m_Direction.x = fStack_10;
                ray.m_Direction.y = (float)(undefined4)uStack_11;
                ray.m_Direction.z = (float)uStack_11._4_4_;
                bVar12 = MVSweptElipsoidCheck_RayCast
                                  (ray,(Vector3 *)((int)&pVVar1->vector[0].x + iStack_6),
                                   *projectPlane,(MethodInfo *)0x0);
                if (bVar12 == 0) {
                  uStack_13 = uVar5;
                  puVar14 = (undefined8 *)func_?();
                  uStack_11 = *puVar14;
                  uVar15 = *(undefined4 *)(puVar14 + 1);
                  uStack_16 = CONCAT44(&UNK_?,(undefined4)uStack_16);
                  puStack_17 = (undefined *)uVar5;
                  iVar18 = func_?();
                  uVar19 = *(undefined8 *)(iVar18 + 0xc);
                  uStack_20 = *(uint *)(iVar18 + 0x14);
                  uStack_21._0_4_ = (uint)uVar19;
                  uStack_21._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
                  uStack_22 = uStack_20 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                  ;
                  uStack_23 = CONCAT44(uStack_21._4_4_ ^
                                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                       ,(uint)uStack_21 ^
                                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                  uStack_16 = (ulonglong)uStack_22;
                  uStack_24 = uStack_11;
                  uStack_25 = uVar15;
                  uStack_21 = uVar19;
                  func_?((int)&uStack_24 + 4);
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MVSweptElipsoidCheck);
                  }
                  if (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane ==
                      (Vector3__Array *)0x0) goto code_?;
                  fStack_7 = (projectPlane->m_Normal).x;
                  fStack_8 = (projectPlane->m_Normal).y;
                  fStack_9 = (projectPlane->m_Normal).z;
                  fStack_10 = projectPlane->m_Distance;
                  hit = (Vector3 *)func_?(uVar5);
                  ray_00.m_Origin.y = (float)uStack_25;
                  ray_00.m_Origin.x = (float)uStack_24._4_4_;
                  ray_00.m_Origin.z = (float)(undefined4)uStack_23;
                  ray_00.m_Direction.x = (float)uStack_23._4_4_;
                  ray_00.m_Direction.y = (float)(undefined4)uStack_16;
                  ray_00.m_Direction.z = (float)uStack_16._4_4_;
                  collPlane.m_Normal.y = fStack_8;
                  collPlane.m_Normal.x = fStack_7;
                  collPlane.m_Normal.z = fStack_9;
                  collPlane.m_Distance = fStack_10;
                  MVSweptElipsoidCheck_RayCast(ray_00,hit,collPlane,(MethodInfo *)0x0);
                }
                uVar5 = uVar5 + 1;
                iStack_6 = iStack_6 + 0xc;
                pRStack_2 = pRStack_2 + 1;
                if (0x2f < iStack_6) {
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
  puStack_1 = (undefined *)0x0;
  uStack_2 = 0;
  index = 0;
  do {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                      (&scanRectNormal,index,(MethodInfo *)0x0);
    if (_UNK_? < (float)((uint)fVar3 & _UNK_?)) {
      return index;
    }
    index = index + 1;
  } while (index < 3);
  puStack_1 = (undefined *)scanRectNormal.z;
  uStack_2 = 0;
  pSVar4 = (String *)func_?(&uStack_2,0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_No_scan_axis_found_,pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar4,(MethodInfo *)0x0);
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
  pIStack_8 = (ICubeModelCollider *)0x0;
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
  fStack_17 = (collisionState->localOrigin).z;
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
  lineEnd.z = fStack_17 + fStack_19 * _UNK_?;
  MathFunctions::MathFunctions_DistancePointLine
            (point,lineStart,lineEnd,(float *)&pIStack_8,(MethodInfo *)0x0);
  if ((float)uStack_5 + _UNK_? < (float)pIStack_8) {
    return;
  }
  pFStack_20 = (FaceFlags__Enum__Array *)CONCAT22(pos.y,pos.x);
  pIStack_8 = collisionState->cmb;
  uStack_4 = CONCAT22(pos.z,(undefined2)uStack_4);
  if (pIStack_8 != (ICubeModelCollider *)0x0) {
    pVStack_21 = (Vector3__Array *)pIStack_8->klass;
    uVar22 = 0;
    uStack_5 = (Cube *)0x0;
    uVar23 = *(ushort *)((int)&pVStack_21->vector[0xd].z + 2);
    if (uVar23 != 0) {
      fVar24 = pVStack_21->vector[6].x;
      do {
        if (*(ICubeModelCollider__Class **)((int)fVar24 + (uint)uVar22 * 8) ==
            TypeInfo__ICubeModelCollider) {
          pfVar25 = &pVStack_21->vector[0x13].y + *(int *)((int)fVar24 + 4 + (uint)uVar22 * 8) * 2;
          goto code_?;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar23);
    }
    pfVar25 = (float *)func_?();
code_?:
    pCVar26 = (Cube *)(*(code *)*pfVar25)();
    uStack_5 = pCVar26;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar24 = 0.0;
    this = (Matrix4x4 *)0x0;
    __return_storage_ptr__ = pCVar26;
    bVar27 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      ((CubeBase *)pCVar26,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar27 == 0) {
      return;
    }
    if (pCVar26 != (Cube *)0x0) {
      if ((pCVar26->fields).hiddenSides == 0x3f) {
        return;
      }
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                ((CubeBase *)pCVar26,
                 &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace,
                 (MethodInfo *)0x0);
      pFStack_20 = (FaceFlags__Enum__Array *)(int)pos.z;
      iVar6 = (int)pos.x;
      uStack_4 = 0;
      iVar28 = (int)pos.y;
      pIStack_8 = (ICubeModelCollider *)0x0;
      while( true ) {
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar29 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar29->max_length <= (int)uStack_4) {
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
          pFVar30 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
          uStack_4 = 0;
          pCVar26 = uStack_5;
          pFStack_20 = pFVar30;
          if (pFVar30 == (FaceFlags__Enum__Array *)0x0) goto code_?;
          goto code_?;
        }
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar29 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar29->max_length <= uStack_4) break;
        fStack_19 = *(float *)((int)&pVVar29->vector[0].x + (int)(pIStack_8 + 3 + -2));
        uVar31 = *(undefined8 *)((int)&pVVar29->vector[0].x + (int)(pIStack_8 + 2 + -2));
        uStack_18._0_4_ = (float)uVar31;
        uStack_18._4_4_ = (float)((ulonglong)uVar31 >> 0x20);
        *(ulonglong *)((int)&pVVar29->vector[0].x + (int)(pIStack_8 + 2 + -2)) =
             CONCAT44(uStack_18._4_4_ + (float)iVar28,(float)uStack_18 + (float)iVar6);
        *(float *)((int)&pVVar29->vector[0].x + (int)(pIStack_8 + 3 + -2)) =
             fStack_19 + (float)(int)pFStack_20;
        pVStack_21 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        uStack_18 = uVar31;
        if (pVStack_21 == (Vector3__Array *)0x0) goto code_?;
        if (pVStack_21->max_length <= uStack_4) break;
        uVar31 = *(undefined8 *)((int)&pVStack_21->vector[0].x + (int)(pIStack_8 + 2 + -2));
        uVar1 = *(undefined4 *)((int)&pVStack_21->vector[0].x + (int)(pIStack_8 + 3 + -2));
        fVar24 = (float)uVar31;
        this = &collisionState->localToElipsoidSpace;
        __return_storage_ptr__ = (Cube *)&stack0xffffff80;
        point_00.z._0_2_ = (short)uVar1;
        point_00.x = (float)(int)uVar31;
        point_00.y = (float)(int)((ulonglong)uVar31 >> 0x20);
        point_00.z._2_2_ = (short)((uint)uVar1 >> 0x10);
        pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)__return_storage_ptr__,this,point_00,(MethodInfo *)0x0);
        fStack_17 = pVVar32->z;
        if (pVStack_21->max_length <= uStack_4) break;
        *(undefined8 *)((int)&pVStack_21->vector[0].x + (int)(pIStack_8 + 2 + -2)) =
             *(undefined8 *)pVVar32;
        *(float *)((int)&pVStack_21->vector[0].x + (int)(pIStack_8 + 3 + -2)) = fStack_17;
        uStack_4 = uStack_4 + 1;
        pIStack_8 = (ICubeModelCollider *)&pIStack_8[1].monitor;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
code_?:
  if ((int)pFVar30->max_length <= (int)uStack_4) {
    if ((bStack_2 != 0) && (collisionState->firstHitDetected == 0)) {
      key = collisionState->scanAxis;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar34 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&pos,key,(MethodInfo *)0x0);
      collisionState->firstHitScanAxis = (int)iVar34;
      collisionState->firstHitDetected = 1;
    }
    return;
  }
  if (pFVar30->max_length <= uStack_4) goto code_?;
  bVar35 = *(byte *)((int)pFVar30->vector + uStack_4);
  fStack_17 = (float)CONCAT31(fStack_17._1_3_,bVar35);
  if (((pCVar26->fields).hiddenSides & bVar35) == 0) {
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar36 = fStack_17;
    pIStack_8 = (ICubeModelCollider *)
                 MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                           ((FaceFlags__Enum)fStack_17,(MethodInfo *)0x0);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                     ((FaceFlags__Enum)fVar36,(MethodInfo *)0x0);
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
    pCVar37 = collisionState;
    pfVar25 = (float *)&stack0xfffffdb4;
    for (iVar6 = 0x31; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar25 = (pCVar37->localOrigin).x;
      pCVar37 = (CollisionState *)&(pCVar37->localOrigin).y;
      pfVar25 = pfVar25 + 1;
    }
    p1_00.y = (float)uStack_10;
    p1_00.x = (float)uStack_9;
    p1_00.z = fStack_11;
    p2_00.z = fStack_38;
    p2_00.x = (float)(undefined4)uStack_39;
    p2_00.y = (float)uStack_39._4_4_;
    p3_00.z = fStack_19;
    p3_00.x = (float)uStack_18;
    p3_00.y = uStack_18._4_4_;
    pos_01.z = pos.z;
    pos_01.x = pos.x;
    pos_01.y = pos.y;
    collisionState_01.scaledMaxRadius = (float)in_stack_40;
    auVar41 = in_stack_42._0_12_;
    auVar43 = in_stack_42._12_12_;
    auVar44 = in_stack_42._24_12_;
    auVar45 = in_stack_42._36_12_;
    auVar46 = in_stack_42._48_12_;
    auVar47 = in_stack_42._60_12_;
    auVar48 = in_stack_42._76_64_;
    uVar49 = in_stack_42._144_6_;
    uVar50 = in_stack_42._150_6_;
    collisionState_01.localOrigin.x = (float)auVar41._0_4_;
    collisionState_01.localOrigin.y = (float)auVar41._4_4_;
    collisionState_01.localOrigin.z = (float)auVar41._8_4_;
    collisionState_01.localHitPoint.x = (float)auVar43._0_4_;
    collisionState_01.localHitPoint.y = (float)auVar43._4_4_;
    collisionState_01.localHitPoint.z = (float)auVar43._8_4_;
    collisionState_01.localNormal.x = (float)auVar44._0_4_;
    collisionState_01.localNormal.y = (float)auVar44._4_4_;
    collisionState_01.localNormal.z = (float)auVar44._8_4_;
    collisionState_01.localDirection.x = (float)auVar45._0_4_;
    collisionState_01.localDirection.y = (float)auVar45._4_4_;
    collisionState_01.localDirection.z = (float)auVar45._8_4_;
    collisionState_01.origin.x = (float)auVar46._0_4_;
    collisionState_01.origin.y = (float)auVar46._4_4_;
    collisionState_01.origin.z = (float)auVar46._8_4_;
    collisionState_01.direction.x = (float)auVar47._0_4_;
    collisionState_01.direction.y = (float)auVar47._4_4_;
    collisionState_01.direction.z = (float)auVar47._8_4_;
    collisionState_01.cmb = (ICubeModelCollider *)in_stack_42._72_4_;
    collisionState_01.localToElipsoidSpace.m00 = (float)auVar48._0_4_;
    collisionState_01.localToElipsoidSpace.m10 = (float)auVar48._4_4_;
    collisionState_01.localToElipsoidSpace.m20 = (float)auVar48._8_4_;
    collisionState_01.localToElipsoidSpace.m30 = (float)auVar48._12_4_;
    collisionState_01.localToElipsoidSpace.m01 = (float)auVar48._16_4_;
    collisionState_01.localToElipsoidSpace.m11 = (float)auVar48._20_4_;
    collisionState_01.localToElipsoidSpace.m21 = (float)auVar48._24_4_;
    collisionState_01.localToElipsoidSpace.m31 = (float)auVar48._28_4_;
    collisionState_01.localToElipsoidSpace.m02 = (float)auVar48._32_4_;
    collisionState_01.localToElipsoidSpace.m12 = (float)auVar48._36_4_;
    collisionState_01.localToElipsoidSpace.m22 = (float)auVar48._40_4_;
    collisionState_01.localToElipsoidSpace.m32 = (float)auVar48._44_4_;
    collisionState_01.localToElipsoidSpace.m03 = (float)auVar48._48_4_;
    collisionState_01.localToElipsoidSpace.m13 = (float)auVar48._52_4_;
    collisionState_01.localToElipsoidSpace.m23 = (float)auVar48._56_4_;
    collisionState_01.localToElipsoidSpace.m33 = (float)auVar48._60_4_;
    collisionState_01.scanAxis = in_stack_42._140_4_;
    collisionState_01.minBounds.x = (short)uVar49;
    collisionState_01.minBounds.y = (short)((uint6)uVar49 >> 0x10);
    collisionState_01.minBounds.z = (short)((uint6)uVar49 >> 0x20);
    collisionState_01.maxBounds.x = (short)uVar50;
    collisionState_01.maxBounds.y = (short)((uint6)uVar50 >> 0x10);
    collisionState_01.maxBounds.z = (short)((uint6)uVar50 >> 0x20);
    collisionState_01.firstHitScanAxis = in_stack_42._156_4_;
    collisionState_01.firstHitDetected = in_stack_42[0xa0];
    collisionState_01._161_3_ = in_stack_42._161_3_;
    auVar41 = in_stack_51._0_12_;
    auVar43 = in_stack_51._12_12_;
    collisionState_01.elipsoidSpaceOrigin.x = (float)auVar41._0_4_;
    collisionState_01.elipsoidSpaceOrigin.y = (float)auVar41._4_4_;
    collisionState_01.elipsoidSpaceOrigin.z = (float)auVar41._8_4_;
    collisionState_01.elipsoidSpaceDirection.x = (float)auVar43._0_4_;
    collisionState_01.elipsoidSpaceDirection.y = (float)auVar43._4_4_;
    collisionState_01.elipsoidSpaceDirection.z = (float)auVar43._8_4_;
    collisionState_01.elipsoidSpaceDistance = (float)in_stack_51._24_4_;
    fVar36 = distance;
    pIVar52 = pIStack_8;
    pCVar26 = uStack_5;
    uVar31 = radius._0_8_;
    fVar53 = radius.z;
    iVar34 = pos.z;
    bVar27 = MVSweptElipsoidCheck_HandleTriangleTest
                      (p1_00,p2_00,p3_00,vh,distance,(Face__Enum)pIStack_8,uStack_5,radius,pos_01,
                       collisionState_01,method_00);
    bStack_2 = bVar27 != 0 || bStack_2 != 0;
    if (((TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
          (Vector3__Array *)0x0) ||
        (func_?(),
        TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0)) ||
       (func_?(),
       TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
       (Vector3__Array *)0x0)) goto code_?;
    fVar54 = 0.0;
    pMVar55 = (MonitorData *)&uStack_56;
    pCVar57 = (Cube__Class *)&UNK_?;
    func_?();
    iVar6 = 0x31;
    pos_00.y = pos.y;
    pos_00.x = pos.x;
    in_stack_40 = (MethodInfo *)0x0;
    pCVar37 = collisionState;
    pfVar25 = (float *)&stack0xfffffd94;
    while( true ) {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      *pfVar25 = (pCVar37->localOrigin).x;
      pCVar37 = (CollisionState *)&(pCVar37->localOrigin).y;
      pfVar25 = pfVar25 + 1;
    }
    p2.y._0_2_ = (short)pMVar55;
    p2.x = (float)pCVar57;
    p2.y._2_2_ = (short)((uint)pMVar55 >> 0x10);
    p1.y = (float)this;
    p1.x = (float)__return_storage_ptr__;
    p1.z = fVar24;
    p2.z = fVar54;
    p3.z = fStack_12;
    p3.x = (float)(undefined4)uStack_56;
    p3.y = (float)uStack_56._4_4_;
    pos_00.z = pos.z;
    collisionState_00.localOrigin.y = (float)pIVar52;
    collisionState_00.localOrigin.x = fVar36;
    collisionState_00.localOrigin.z = (float)pCVar26;
    collisionState_00.localHitPoint.x = (float)uVar31;
    collisionState_00.localHitPoint.y = SUB84(uVar31,4);
    collisionState_00.localHitPoint.z = fVar53;
    collisionState_00.localNormal.x = (float)uVar1;
    collisionState_00.localNormal.y._0_2_ = iVar34;
    collisionState_00.localNormal.y._2_2_ = in_stack_58;
    auVar41 = in_stack_42._4_12_;
    auVar43 = in_stack_42._16_12_;
    auVar44 = in_stack_42._28_12_;
    auVar48 = in_stack_42._44_64_;
    uVar49 = in_stack_42._112_6_;
    uVar50 = in_stack_42._118_6_;
    auVar45 = in_stack_42._136_12_;
    auVar46 = in_stack_42._148_12_;
    collisionState_00.localNormal.z = (float)in_stack_42._0_4_;
    collisionState_00.localDirection.x = (float)auVar41._0_4_;
    collisionState_00.localDirection.y = (float)auVar41._4_4_;
    collisionState_00.localDirection.z = (float)auVar41._8_4_;
    collisionState_00.origin.x = (float)auVar43._0_4_;
    collisionState_00.origin.y = (float)auVar43._4_4_;
    collisionState_00.origin.z = (float)auVar43._8_4_;
    collisionState_00.direction.x = (float)auVar44._0_4_;
    collisionState_00.direction.y = (float)auVar44._4_4_;
    collisionState_00.direction.z = (float)auVar44._8_4_;
    collisionState_00.cmb = (ICubeModelCollider *)in_stack_42._40_4_;
    collisionState_00.localToElipsoidSpace.m00 = (float)auVar48._0_4_;
    collisionState_00.localToElipsoidSpace.m10 = (float)auVar48._4_4_;
    collisionState_00.localToElipsoidSpace.m20 = (float)auVar48._8_4_;
    collisionState_00.localToElipsoidSpace.m30 = (float)auVar48._12_4_;
    collisionState_00.localToElipsoidSpace.m01 = (float)auVar48._16_4_;
    collisionState_00.localToElipsoidSpace.m11 = (float)auVar48._20_4_;
    collisionState_00.localToElipsoidSpace.m21 = (float)auVar48._24_4_;
    collisionState_00.localToElipsoidSpace.m31 = (float)auVar48._28_4_;
    collisionState_00.localToElipsoidSpace.m02 = (float)auVar48._32_4_;
    collisionState_00.localToElipsoidSpace.m12 = (float)auVar48._36_4_;
    collisionState_00.localToElipsoidSpace.m22 = (float)auVar48._40_4_;
    collisionState_00.localToElipsoidSpace.m32 = (float)auVar48._44_4_;
    collisionState_00.localToElipsoidSpace.m03 = (float)auVar48._48_4_;
    collisionState_00.localToElipsoidSpace.m13 = (float)auVar48._52_4_;
    collisionState_00.localToElipsoidSpace.m23 = (float)auVar48._56_4_;
    collisionState_00.localToElipsoidSpace.m33 = (float)auVar48._60_4_;
    collisionState_00.scanAxis = in_stack_42._108_4_;
    collisionState_00.minBounds.x = (short)uVar49;
    collisionState_00.minBounds.y = (short)((uint6)uVar49 >> 0x10);
    collisionState_00.minBounds.z = (short)((uint6)uVar49 >> 0x20);
    collisionState_00.maxBounds.x = (short)uVar50;
    collisionState_00.maxBounds.y = (short)((uint6)uVar50 >> 0x10);
    collisionState_00.maxBounds.z = (short)((uint6)uVar50 >> 0x20);
    collisionState_00.firstHitScanAxis = in_stack_42._124_4_;
    collisionState_00.firstHitDetected = in_stack_42[0x80];
    collisionState_00._161_3_ = in_stack_42._129_3_;
    collisionState_00.scaledMaxRadius = (float)in_stack_42._132_4_;
    collisionState_00.elipsoidSpaceOrigin.x = (float)auVar45._0_4_;
    collisionState_00.elipsoidSpaceOrigin.y = (float)auVar45._4_4_;
    collisionState_00.elipsoidSpaceOrigin.z = (float)auVar45._8_4_;
    collisionState_00.elipsoidSpaceDirection.x = (float)auVar46._0_4_;
    collisionState_00.elipsoidSpaceDirection.y = (float)auVar46._4_4_;
    collisionState_00.elipsoidSpaceDirection.z = (float)auVar46._8_4_;
    collisionState_00.elipsoidSpaceDistance = (float)in_stack_42._160_4_;
    bVar27 = MVSweptElipsoidCheck_HandleTriangleTest
                      (p1,p2,p3,vh,distance,(Face__Enum)pIStack_8,uStack_5,radius,pos_00,
                       collisionState_00,in_stack_40);
    bStack_2 = bStack_2 | bVar27;
    pFVar30 = pFStack_20;
    pCVar26 = uStack_5;
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
  pBVar1 = unaff_EBX;
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
          pBVar1 = unaff_EBX;
          if ((this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
             (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this,indexOfFirstHit,
                                 MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                                ), RVar2 == (RegexCharClass_SingleRange)0x0)) goto code_?;
          pBVar1 = (BoxCollider__Class *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                             (*(Transform **)((int)RVar2 + 0x14),(MethodInfo *)0x0);
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            cRam_? = '\x01';
          }
          unaff_EBX = pBVar1;
        } while ((pBVar1 == (BoxCollider__Class *)0x0) ||
                ((ignoreWoIds != (HashSet_1_System_Int32_ *)0x0 &&
                 (bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                          Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                    ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,
                                     (Int32Enum__Enum)(pBVar1->_0).name,
                                     MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                    ), bVar3 != 0))));
        iVar4 = func_?(pBVar1,TypeInfo__ICubeModelCollider);
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
            woId = (pBVar1->_0).name;
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                      (voxelHit,pPVar5,(int32_t)woId,(MethodInfo *)0x0);
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
      chunk = (BoxCollider *)(pPVar5->fields).collider;
      pPVar5 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVSweptElipsoidCheck);
      }
      pIStack_8 = TypeInfo__ICubeModelCollider;
      wo = (ICubeModelCollider *)func_?(pBVar1,TypeInfo__ICubeModelCollider);
      unaff_EBX = TypeInfo__UnityEngine__BoxCollider;
      if (wo == (ICubeModelCollider *)0x0) goto code_?;
      if (chunk != (BoxCollider *)0x0) {
        bVar9 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
        pBVar1 = TypeInfo__UnityEngine__BoxCollider;
        if (((chunk->klass->_1).naturalAligment < bVar9) ||
           ((chunk->klass->_1).typeHierarchy[bVar9 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) goto code_?;
      }
      bVar3 = MVSweptElipsoidCheck_LayerScan
                        ((VoxelHit *)&stack0xffffffac,radius,maxRadius,chunk,distance,wo,pPVar5,ray,
                         boundRays,(MethodInfo *)0x0);
      if ((bVar3 != 0) &&
         (unaff_EBX = (BoxCollider__Class *)voxelHit, fStack_10 < voxelHit->distance)) {
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
  chunk = extraout_EDX;
code_?:
  func_?(chunk,pBVar1);
code_?:
  func_?(pBVar1,pIStack_8);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
        p3.z = (float)&currentVoxelHit->cube;
        fVar3 = pVVar9->y;
        fVar5 = pVVar9->z;
        (currentVoxelHit->normal).x = pVVar9->x;
        (currentVoxelHit->normal).y = fVar3;
        (currentVoxelHit->normal).z = fVar5;
        *(Cube **)p3.z = cube;
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
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
     (((pos.x <= (collisionState->maxBounds).x && (pos.y <= (collisionState->maxBounds).y)) &&
      (pos.z <= (collisionState->maxBounds).z)))) {
    return 1;
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
  func_?(&stack0xfffffef0,0,0xc4);
  if (chunk != (BoxCollider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
              ((Vector3 *)&stack0xfffffea8,chunk,(MethodInfo *)0x0);
    pVVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                        ((Vector3 *)&stack0xfffffea4,chunk,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z * _UNK_?;
    fVar5 = (float)uVar2 * _UNK_?;
    fVar6 = (float)uVar3 * _UNK_?;
    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCollisionFunctions);
    }
    localSpaceBounds.m_Center.y = in_stack_7;
    localSpaceBounds.m_Center.x = in_stack_8;
    localSpaceBounds.m_Center.z = in_stack_9;
    localSpaceBounds.m_Extents.x = fVar5;
    localSpaceBounds.m_Extents.y = fVar6;
    localSpaceBounds.m_Extents.z = fVar4;
    SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
              ((IntVector *)&stack0xffffff98,(IntVector *)&stack0xffffff9e,localSpaceBounds,
               (MethodInfo *)0x0);
    if ((collisionData != (PhysicsCollisionData *)0x0) &&
       (pTVar10 = (collisionData->fields).transform, pTVar10 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                ((Vector3 *)&stack0xfffffee4,pTVar10,(collisionData->fields).point,(MethodInfo *)0x0
                );
      pTVar10 = (collisionData->fields).transform;
      if (pTVar10 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_InverseTransformDirection
                            ((Vector3 *)&stack0xfffffefc,pTVar10,(collisionData->fields).normal,
                             (MethodInfo *)0x0);
        pTVar10 = (collisionData->fields).transform;
        fVar4 = pVVar1->x;
        fVar6 = pVVar1->y;
        fVar5 = pVVar1->z;
        if (pTVar10 != (Transform *)0x0) {
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformDirection
                              ((Vector3 *)&stack0xffffff14,pTVar10,ray.m_Direction,(MethodInfo *)0x0
                              );
          fVar11 = pVVar1->z;
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pMVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields;
          fVar13 = (pMVar12->worldToElipsoidSpace).m10;
          fVar14 = (pMVar12->worldToElipsoidSpace).m20;
          fVar15 = (pMVar12->worldToElipsoidSpace).m30;
          fVar16 = (pMVar12->worldToElipsoidSpace).m02;
          fVar17 = (pMVar12->worldToElipsoidSpace).m12;
          fVar18 = (pMVar12->worldToElipsoidSpace).m22;
          fVar19 = (pMVar12->worldToElipsoidSpace).m32;
          fVar20 = (pMVar12->worldToElipsoidSpace).m03;
          fVar21 = (pMVar12->worldToElipsoidSpace).m13;
          fVar22 = (pMVar12->worldToElipsoidSpace).m23;
          fVar23 = (pMVar12->worldToElipsoidSpace).m33;
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)chunk,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localToWorldMatrix
                                ((Matrix4x4 *)&method,pTVar10,(MethodInfo *)0x0);
            fVar25 = pMVar24->m10;
            lhs.m10 = fVar22;
            lhs.m00 = fVar21;
            lhs.m20 = fVar23;
            lhs.m30 = fVar16;
            lhs.m01 = fVar13;
            lhs.m11 = fVar14;
            lhs.m21 = fVar15;
            lhs.m31 = fVar20;
            lhs.m02 = in_stack_26;
            lhs.m12 = in_stack_27;
            lhs.m22 = in_stack_28;
            lhs.m32 = (float)in_stack_29;
            lhs.m03 = fVar17;
            lhs.m13 = fVar18;
            lhs.m23 = fVar19;
            lhs.m33 = in_stack_30;
            pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                                ((Matrix4x4 *)&stack0x00000050,lhs,*pMVar24,(MethodInfo *)0x0);
            in_stack_31 = pMVar24->m00;
            in_stack_32 = pMVar24->m10;
            in_stack_33 = pMVar24->m20;
            in_stack_34 = pMVar24->m30;
            in_stack_35 = pMVar24->m01;
            in_stack_36 = pMVar24->m11;
            in_stack_37 = pMVar24->m21;
            in_stack_38 = pMVar24->m31;
            in_stack_39 = pMVar24->m02;
            in_stack_40 = pMVar24->m12;
            in_stack_41 = pMVar24->m22;
            in_stack_42 = pMVar24->m32;
            in_stack_43 = pMVar24->m03;
            in_stack_44 = pMVar24->m13;
            in_stack_45 = pMVar24->m23;
            in_stack_46 = pMVar24->m33;
            in_stack_47 = wo;
            func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            fVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&stack0xffffff10,
                                 TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                                 (MethodInfo *)0x0);
            fVar14 = pVVar1->z * maxRadius;
            if (((fStack_48 != 0.0) && (func_?(), fStack_48 != 0.0)) &&
               (func_?(), fStack_48 != 0.0)) {
              iVar49 = func_?();
              fVar25 = fVar25 / *(float *)(iVar49 + 8);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              dVar50 = (double)(in_stack_28 * in_stack_28 + fVar13 * fVar13 +
                               fVar25 * fVar25);
              if (dVar50 < 0.0) {
                func_?();
              }
              else {
                dVar50 = SQRT(dVar50);
              }
              fStack_48 = (float)dVar50;
              fStack_51 = ray.m_Origin.z;
              fVar15 = ray.m_Origin.x;
              fVar16 = ray.m_Origin.y;
              fVar13 = ray.m_Direction.y;
              if ((collisionData->fields).isInsideCollider == 0) {
                fVar16 = (collisionData->fields).distance - _UNK_?;
                fStack_51 = ray.m_Direction.z * fVar16 + ray.m_Origin.z;
                fVar15 = ray.m_Direction.x * fVar16 + ray.m_Origin.x;
                fVar16 = ray.m_Direction.y * fVar16 + ray.m_Origin.y;
                fVar52 = (float10)func_?();
                distance = distance - (float)fVar52;
              }
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              point.y = fVar16;
              point.x = fVar15;
              point.z = fStack_51;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                                  ((Vector3 *)&stack0xfffffec8,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                    worldToElipsoidSpace,point,(MethodInfo *)0x0);
              uStack_53._0_4_ = pVVar1->x;
              uStack_53._4_4_ = pVVar1->y;
              fStack_54 = pVVar1->z;
              vector.y = fVar6;
              vector.x = fVar4;
              vector.z = fVar5;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                  ((Vector3 *)&stack0xfffffee0,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                    worldToElipsoidSpace,vector,(MethodInfo *)0x0);
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&stack0xfffffef8,*pVVar1,(MethodInfo *)0x0);
              uVar55 = pVVar1->x;
              distance_00 = pVVar1->y;
              piVar56 = (int *)pVVar1->z;
              vector_00.y = in_stack_57 * distance;
              vector_00.x = fVar11 * distance;
              vector_00.z = fStack_58 * distance;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                  ((Vector3 *)&stack0xffffff0c,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                    worldToElipsoidSpace,vector_00,(MethodInfo *)0x0);
              fVar5 = pVVar1->x;
              fVar11 = pVVar1->y;
              fVar16 = pVVar1->z;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              dVar50 = (double)(fVar11 * fVar11 + fVar5 * fVar5 + fVar16 * fVar16);
              if (dVar50 < 0.0) {
                func_?();
              }
              else {
                dVar50 = SQRT(dVar50);
              }
              pTVar10 = (collisionData->fields).transform;
              if (pTVar10 != (Transform *)0x0) {
                position.z = fStack_59;
                position._0_8_ = uStack_60;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_InverseTransformPoint
                                    ((Vector3 *)&stack0xffffff24,pTVar10,position,(MethodInfo *)0x0)
                ;
                fVar16 = (float)((uint)VStack_61.x & _UNK_?);
                uVar62 = pVVar1->y;
                fVar17 = (float)((uint)VStack_61.y & _UNK_?);
                fVar5 = pVVar1->z;
                if ((fVar16 < fVar17) || (fVar16 < (float)((uint)VStack_61.z & _UNK_?))) {
                  if ((fVar17 < fVar16) || (fVar17 < (float)((uint)VStack_61.z & _UNK_?))) {
                    dVar63 = (double)VStack_61.z;
                    if (0.0 <= VStack_61.z) {
                      dVar64 = dVar63;
                      fVar52 = (float10)func_?();
                    }
                    else {
                      dVar65 = dVar63;
                      fVar52 = (float10)func_?();
                      dVar64 = (double)CONCAT44((float)((ulonglong)dVar63 >> 0x20),SUB84(dVar65,0));
                      dVar63 = (double)((ulonglong)dVar65 & 0xffffffff00000000);
                    }
                    fVar13 = (float)((ulonglong)dVar64 >> 0x20);
                    dVar64 = (double)CONCAT44(in_stack_66,SUB84(dVar64,0));
                    dVar63 = (double)((ulonglong)dVar63 & 0xffffffff00000000);
                    fVar11 = (float)fVar52;
                  }
                  else {
                    dVar63 = (double)VStack_61.y;
                    if (0.0 <= VStack_61.y) {
                      dVar64 = dVar63;
                      fVar52 = (float10)func_?();
                      fVar23 = (float)fVar52;
                    }
                    else {
                      dVar65 = dVar63;
                      fVar52 = (float10)func_?();
                      dVar64 = (double)CONCAT44((int)((ulonglong)dVar63 >> 0x20),SUB84(dVar65,0));
                      dVar63 = (double)((ulonglong)dVar65 & 0xffffffff00000000);
                      fVar23 = (float)fVar52;
                    }
                  }
                }
                else {
                  dVar63 = (double)VStack_61.x;
                  if (0.0 <= VStack_61.x) {
                    fVar52 = (float10)func_?();
                    dVar64 = (double)CONCAT44(in_stack_66,SUB84(dVar63,0));
                    dVar63 = (double)((ulonglong)dVar63 & 0xffffffff00000000);
                    fVar13 = (float)fVar52;
                  }
                  else {
                    fVar52 = (float10)func_?();
                    dVar64 = (double)CONCAT44(in_stack_66,SUB84(dVar63,0));
                    dVar63 = (double)((ulonglong)dVar63 & 0xffffffff00000000);
                    fVar13 = (float)fVar52;
                  }
                }
                fVar23 = fVar23 * _UNK_?;
                fVar13 = fVar13 * _UNK_?;
                fVar11 = fVar11 * _UNK_?;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pVVar67 = TypeInfo__UnityEngine__Vector3->static_fields;
                uVar68 = (pVVar67->zeroVector).x;
                uVar69 = (pVVar67->zeroVector).y;
                fVar11 = fVar11 - (pVVar67->zeroVector).z;
                if ((fVar13 - (float)uVar68) * (fVar13 - (float)uVar68) +
                    (fVar23 - (float)uVar69) * (fVar23 - (float)uVar69) + fVar11 * fVar11 <
                    _UNK_?) {
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)StringLiteral_scanRect_cant_be_zero,(MethodInfo *)0x0);
                }
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  cRam_? = '\x01';
                }
                iVar49 = 0;
                do {
                  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                    ((Vector3 *)&stack0xffffff60,iVar49,(MethodInfo *)0x0);
                  if (_UNK_? < (float)((uint)fVar11 & _UNK_?)) goto code_?;
                  iVar49 = iVar49 + 1;
                } while (iVar49 < 3);
                pSVar70 = (String *)func_?();
                pSVar70 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_No_scan_axis_found_,pSVar70,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)pSVar70,(MethodInfo *)0x0);
                iVar49 = -1;
code_?:
                pTVar10 = (collisionData->fields).transform;
                if (pTVar10 != (Transform *)0x0) {
                  direction.y = (float)((ulonglong)dVar63 >> 0x20);
                  direction.x = SUB84(dVar64,0);
                  direction.z = fVar14;
                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_TransformDirection
                                      ((Vector3 *)&stack0xffffff54,pTVar10,direction,
                                       (MethodInfo *)0x0);
                  fVar23 = pVVar1->y;
                  pMVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields;
                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                      ((Vector3 *)&stack0xffffff84,*pVVar1,(MethodInfo *)0x0);
                  uVar71 = pVVar1->x;
                  uVar72 = pVVar1->y;
                  fVar13 = pVVar1->z;
                  (pMVar12->collisionPlane).m_Normal.x = (float)uVar71;
                  (pMVar12->collisionPlane).m_Normal.y = (float)uVar72;
                  (pMVar12->collisionPlane).m_Normal.z = fVar13;
                  (pMVar12->collisionPlane).m_Distance =
                       (float)((uint)((float)uVar71 * (float)((ulonglong)dVar64 >> 0x20) +
                                      (float)uVar72 * fVar4 + fVar13 * fVar6) ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
                  pTVar10 = (collisionData->fields).transform;
                  fVar4 = (collisionData->fields).point.z;
                  if (pTVar10 != (Transform *)0x0) {
                    direction_00.y = fVar11;
                    direction_00.x = fVar15;
                    direction_00.z = fStack_51;
                    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_TransformDirection
                                        ((Vector3 *)&stack0xffffff50,pTVar10,direction_00,
                                         (MethodInfo *)0x0);
                    planeOrigin.y = fVar5;
                    planeOrigin.x = (float)uVar62;
                    planeOrigin.z = fVar4;
                    MVSweptElipsoidCheck_GetRaysProjectedOnPlane
                              (boundRays,
                               &TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane,
                               planeOrigin,*pVVar1,(MethodInfo *)0x0);
                    if ((collisionData->fields).isInsideCollider != 0) {
                      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      dir.z = (float)dVar50;
                      dir.x = (float)(int)ray.m_Direction._0_8_;
                      dir.y = (float)(int)((ulonglong)ray.m_Direction._0_8_ >> 0x20);
                      MVSweptElipsoidCheck_MoveAxisAlignedRectBackward
                                (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,
                                 ray.m_Origin,dir,(MethodInfo *)0x0);
                    }
                    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    MVSweptElipsoidCheck_CalculateAxisAlignedRect
                              (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,
                               (collisionData->fields).transform,(MethodInfo *)0x0);
                    if ((collisionData->fields).isInsideCollider == 0) {
                      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      localNormal.y = radius.y;
                      localNormal.x = (float)iVar49;
                      localNormal.z = radius.z;
                      localHit.y = (float)unaff_retaddr;
                      localHit.x = (float)unaff_EBP;
                      localHit.z = (float)vh;
                      localDir.y = (float)uVar55;
                      localDir.x = maxRadius;
                      localDir.z = (float)distance_00;
                      MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
                                (TypeInfo__MVSweptElipsoidCheck->static_fields->
                                 minMaxCalculateAxisAlignedRect,localNormal,localHit,localDir,
                                 (MethodInfo *)0x0);
                    }
                    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    radius_00.y = radius.y;
                    radius_00.x = (float)iVar49;
                    radius_00.z = radius.z;
                    bVar73 = MVSweptElipsoidCheck_LayerScan_1
                                       (radius_00,
                                        TypeInfo__MVSweptElipsoidCheck->static_fields->
                                        minMaxCalculateAxisAlignedRect,vh,(float)distance_00,
                                        (CollisionState *)&stack0xfffffff0,(MethodInfo *)0x0);
                    if (bVar73 == 0) {
                      return 0;
                    }
                    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    fVar4 = vh->distance;
                    VStack_61.z = in_stack_74 * fVar4;
                    vector_01.y = in_stack_75 * fVar4;
                    vector_01.x = in_stack_76 * fVar4;
                    vector_01.z = VStack_61.z;
                    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                              Matrix4x4_MultiplyVector
                                        (&VStack_61,
                                         &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                          elipsoidSpaceToWorld,vector_01,(MethodInfo *)0x0);
                    uStack_53._0_4_ = pVVar1->x;
                    uStack_53._4_4_ = pVVar1->y;
                    fStack_54 = pVVar1->z;
                    fVar52 = (float10)func_?();
                    vh->distance = (float)(fVar52 + (float10)fVar23);
                    if (piVar56 != (int *)0x0) {
                      iVar49 = *piVar56;
                      uVar77 = 0;
                      if (*(ushort *)(iVar49 + 0xb6) != 0) {
                        do {
                          if (*(ICubeModelCollider__Class **)
                               (*(int *)(iVar49 + 0x58) + (uint)uVar77 * 8) ==
                              TypeInfo__ICubeModelCollider) {
                            puVar78 = (undefined4 *)
                                      (iVar49 + (*(int *)(*(int *)(iVar49 + 0x58) + 4 +
                                                         (uint)uVar77 * 8) + 0x18) * 8);
                            goto code_?;
                          }
                          uVar77 = uVar77 + 1;
                        } while (uVar77 < *(ushort *)(iVar49 + 0xb6));
                      }
                      puVar78 = (undefined4 *)func_?();
code_?:
                      iVar79 = (*(code *)*puVar78)();
                      uVar77 = 0;
                      iVar49 = *piVar56;
                      if (*(short *)(iVar49 + 0xb6) != 0) {
                        do {
                          if (*(ICubeModelCollider__Class **)
                               (*(int *)(iVar49 + 0x58) + (uint)uVar77 * 8) ==
                              TypeInfo__ICubeModelCollider) {
                            puVar78 = (undefined4 *)
                                      (iVar49 + 0xd8 +
                                      *(int *)(*(int *)(iVar49 + 0x58) + 4 + (uint)uVar77 * 8) * 8);
                            goto code_?;
                          }
                          uVar77 = uVar77 + 1;
                        } while (uVar77 < *(ushort *)(iVar49 + 0xb6));
                      }
                      puVar78 = (undefined4 *)func_?();
code_?:
                      uVar80 = (*(code *)*puVar78)();
                      uVar62 = (undefined4)((ulonglong)uVar80 >> 0x20);
                      vh->isCubeHit = 1;
                      vh->woId = iVar79;
                      vh->collider = (collisionData->fields).collider;
                      func_?();
                      vh->transform = (collisionData->fields).transform;
                      func_?();
                      *(int *)&vh->interactionFlags = (int)uVar80;
                      *(undefined4 *)((int)&vh->interactionFlags + 4) = uVar62;
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
  func_?();
  pcVar81 = (code *)swi(3);
  bVar73 = (*pcVar81)();
  return bVar73;
}


/* Boolean LayerScan(Vector3, Vector3[], VoxelHit ByRef, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan_1
               (Vector3 radius,Vector3__Array *alignedRect,VoxelHit *vh,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  pCVar1 = collisionState;
  if (cRam_? == '\0') {
    func_?();
    in_stack_2 = 0xfa98;
    in_stack_3 = 0x119b;
    in_stack_4 = 0xe5e9;
    in_stack_5 = 0x1025;
    func_?();
    cRam_? = '\x01';
  }
  uStack_6 = (Il2CppMethodPointer)0x0;
  iStack_7 = 0;
  IStack_8.x = 0;
  IStack_8.y = 0;
  IStack_8.z = 0;
  vh->distance = INFINITY;
  if (alignedRect != (Vector3__Array *)0x0) {
    if (alignedRect->max_length == 0) goto code_?;
    uVar9._0_4_ = (_union_154)alignedRect->vector[0].x;
    uVar9._4_4_ = (_union_155)alignedRect->vector[0].y;
    bVar10 = false;
    pMVar11 = (MethodInfo *)alignedRect->vector[0].z;
    iVar12 = 0;
    fVar13 = alignedRect->vector[0].x;
    method_01 = (Il2CppClass *)alignedRect->vector[0].y;
    x._2_2_ = SUB42(pMVar11,0);
    uVar14 = (undefined2)((uint)pMVar11 >> 0x10);
    uVar15 = SUB42(fVar13,0);
    uStack_16 = (undefined2)((uint)fVar13 >> 0x10);
    bVar17 = false;
    uVar18 = uVar9;
    _Stack_50 = uVar9._0_4_;
    _Stack_4c = uVar9._4_4_;
    pMStack_19 = pMVar11;
    pMStack_20 = pMVar11;
    do {
      uVar21 = (undefined2)iVar12;
      uVar22 = (undefined2)((uint)iVar12 >> 0x10);
      if ((iVar12 == collisionState->scanAxis) || (bVar10)) {
        if ((bool)(bVar10 & iVar12 != collisionState->scanAxis)) {
          in_stack_4 = 1;
          in_stack_5 = 0;
          in_stack_23 = 0xe6bb;
          in_stack_24 = 0x1025;
          in_stack_25 = (Vector3 *)func_?();
          in_stack_26 = &UNK_?;
          pMStack_27 = (MethodInfo *)
                       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 (in_stack_25,(int32_t)in_stack_28,in_stack_29);
          in_stack_29 = (MethodInfo *)&stack0xffffff94;
          in_stack_28 = &UNK_?;
          in_stack_30 = iVar12;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    ((Vector3 *)in_stack_29,iVar12,(float)pMStack_27,(MethodInfo *)0x0);
          in_stack_2 = uVar21;
          in_stack_3 = uVar22;
          bVar10 = bVar17;
        }
      }
      else {
        in_stack_4 = 1;
        in_stack_5 = 0;
        in_stack_23 = 0xe67a;
        in_stack_24 = 0x1025;
        in_stack_25 = (Vector3 *)func_?();
        in_stack_26 = &UNK_?;
        fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (in_stack_25,(int32_t)in_stack_28,in_stack_29);
        in_stack_29 = (MethodInfo *)&stack0xffffff88;
        in_stack_28 = &UNK_?;
        in_stack_30 = iVar12;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                  ((Vector3 *)in_stack_29,iVar12,fVar13,(MethodInfo *)0x0);
        bVar17 = true;
        in_stack_2 = uVar21;
        in_stack_3 = uVar22;
        bVar10 = bVar17;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 3);
    fVar13 = (float)CONCAT22(uVar14,x._2_2_) - (float)pMStack_19;
    fVar31 = (float)(Il2CppMethodPointer)uVar18 - (float)_Stack_50;
    fVar32 = (float)SUB84(uVar18,4) - (float)_Stack_4c;
    __return_storage_ptr__ = (Vector3 *)&stack0xffffff58;
    puVar33 = &UNK_?;
    value.y = fVar32;
    value.x = fVar31;
    value.z = fVar13;
    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (__return_storage_ptr__,value,(MethodInfo *)0x0);
    uVar35 = pVVar34->x;
    uVar36 = pVVar34->y;
    pMVar37 = (MethodInfo *)pVVar34->z;
    fVar38 = (float)CONCAT22(uStack_16,uVar15) - (float)_Stack_50;
    fVar39 = (float)pMVar11 - (float)pMStack_19;
    uVar40 = CONCAT44((float)method_01 - (float)_Stack_4c,fVar38);
    pVVar34 = (Vector3 *)&stack0xffffff58;
    uVar22 = 0xe786;
    uVar41 = 0x1025;
    value_00.z = fVar39;
    value_00.x = fVar38;
    value_00.y = (float)method_01 - (float)_Stack_4c;
    pMStack_19 = (MethodInfo *)fVar39;
    pVVar42 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (pVVar34,value_00,(MethodInfo *)0x0);
    uVar43 = pVVar42->x;
    uVar44 = pVVar42->y;
    method_00 = (MethodInfo *)pVVar42->z;
    uVar45 = (undefined2)uVar35;
    uVar46 = (undefined2)((uint)uVar35 >> 0x10);
    uVar47 = (undefined2)uVar36;
    uVar48 = (undefined2)((uint)uVar36 >> 0x10);
    puVar49 = auStack_50;
    puVar51 = &UNK_?;
    localPos_01.y._0_2_ = uVar45;
    localPos_01.x = (float)puVar49;
    localPos_01.y._2_2_ = uVar46;
    localPos_01.z._0_2_ = uVar47;
    localPos_01.z._2_2_ = uVar48;
    uVar21 = uVar48;
    _Stack_4c = (_union_155)uVar43;
    pMStack_19 = (MethodInfo *)uVar44;
    IVar52 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_01,pMVar37);
    IStack_53._0_4_ = *IVar52._0_4_;
    IStack_53.z = *(int16_t *)(IVar52._0_4_ + 1);
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = SUB42(method_00,0);
    uVar57 = (undefined2)((uint)method_00 >> 0x10);
    puVar58 = auStack_50;
    uVar59 = 0xe7e2;
    uVar60 = 0x1025;
    localPos_02.y = (float)_Stack_4c.genericMethod;
    localPos_02.x = (float)puVar58;
    localPos_02.z = (float)pMStack_19;
    _Var53 = _Stack_4c;
    pMVar37 = pMStack_19;
    IVar52 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_02,method_00);
    IStack_61._0_4_ = *IVar52._0_4_;
    IStack_61.z = *(int16_t *)(IVar52._0_4_ + 1);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      in_stack_2 = 0xe805;
      in_stack_3 = 0x1025;
      func_?();
    }
    pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
    if (pCVar62 != (CellTraverser *)0x0) {
      localOrigin.y = (float)uVar9._4_4_;
      localOrigin.x = (float)uVar9._0_4_;
      iVar12 = 0x31;
      uVar63 = 0;
      uVar64 = 0;
      pfVar65 = (float *)&stack0xfffffe84;
      while( true ) {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        *pfVar65 = (collisionState->localOrigin).x;
        collisionState = (CollisionState *)&(collisionState->localOrigin).y;
        pfVar65 = pfVar65 + 1;
      }
      localOrigin.z = (float)pMStack_20;
      collisionState_00.localToElipsoidSpace.m10 = (float)in_stack_66;
      auVar67 = in_stack_68._0_12_;
      auVar69 = in_stack_68._12_12_;
      auVar70 = in_stack_68._24_12_;
      auVar71 = in_stack_68._36_12_;
      auVar72 = in_stack_68._48_12_;
      auVar73 = in_stack_68._60_12_;
      collisionState_00.localOrigin.x = (float)auVar67._0_4_;
      collisionState_00.localOrigin.y = (float)auVar67._4_4_;
      collisionState_00.localOrigin.z = (float)auVar67._8_4_;
      collisionState_00.localHitPoint.x = (float)auVar69._0_4_;
      collisionState_00.localHitPoint.y = (float)auVar69._4_4_;
      collisionState_00.localHitPoint.z = (float)auVar69._8_4_;
      collisionState_00.localNormal.x = (float)auVar70._0_4_;
      collisionState_00.localNormal.y = (float)auVar70._4_4_;
      collisionState_00.localNormal.z = (float)auVar70._8_4_;
      collisionState_00.localDirection.x = (float)auVar71._0_4_;
      collisionState_00.localDirection.y = (float)auVar71._4_4_;
      collisionState_00.localDirection.z = (float)auVar71._8_4_;
      collisionState_00.origin.x = (float)auVar72._0_4_;
      collisionState_00.origin.y = (float)auVar72._4_4_;
      collisionState_00.origin.z = (float)auVar72._8_4_;
      collisionState_00.direction.x = (float)auVar73._0_4_;
      collisionState_00.direction.y = (float)auVar73._4_4_;
      collisionState_00.direction.z = (float)auVar73._8_4_;
      collisionState_00.cmb = (ICubeModelCollider *)in_stack_68._72_4_;
      collisionState_00.localToElipsoidSpace.m00 = (float)in_stack_68._76_4_;
      collisionState_00.localToElipsoidSpace.m20 = (float)in_stack_26;
      collisionState_00.localToElipsoidSpace.m30 = (float)in_stack_25;
      collisionState_00.localToElipsoidSpace.m01 = (float)in_stack_28;
      collisionState_00.localToElipsoidSpace.m11 = (float)in_stack_29;
      collisionState_00.localToElipsoidSpace.m21 = (float)in_stack_30;
      collisionState_00.localToElipsoidSpace.m31 = (float)puVar33;
      collisionState_00.localToElipsoidSpace.m02 = (float)__return_storage_ptr__;
      collisionState_00.localToElipsoidSpace.m12 = fVar31;
      collisionState_00.localToElipsoidSpace.m22 = fVar32;
      collisionState_00.localToElipsoidSpace.m32 = fVar13;
      collisionState_00.localToElipsoidSpace.m03._0_2_ = uVar22;
      collisionState_00.localToElipsoidSpace.m03._2_2_ = uVar41;
      collisionState_00.localToElipsoidSpace.m13 = (float)pVVar34;
      collisionState_00.localToElipsoidSpace.m23 = (float)(int)uVar40;
      collisionState_00.localToElipsoidSpace.m33 = (float)(int)((ulonglong)uVar40 >> 0x20);
      collisionState_00.scanAxis = (int32_t)fVar39;
      collisionState_00.minBounds._0_4_ = puVar51;
      collisionState_00._148_4_ = puVar49;
      collisionState_00.maxBounds.y = uVar45;
      collisionState_00.maxBounds.z = uVar46;
      collisionState_00.firstHitScanAxis._0_2_ = uVar47;
      collisionState_00.firstHitScanAxis._2_2_ = uVar21;
      collisionState_00._160_2_ = uVar59;
      collisionState_00._162_2_ = uVar60;
      collisionState_00.scaledMaxRadius._0_2_ = (short)puVar58;
      collisionState_00.scaledMaxRadius._2_2_ = (short)((uint)puVar58 >> 0x10);
      collisionState_00.elipsoidSpaceOrigin.x = (float)_Var53.genericMethod;
      collisionState_00.elipsoidSpaceOrigin.y = (float)pMVar37;
      collisionState_00.elipsoidSpaceOrigin.z._0_2_ = uVar56;
      collisionState_00.elipsoidSpaceOrigin.z._2_2_ = uVar57;
      collisionState_00.elipsoidSpaceDirection.x._0_2_ = uVar54;
      collisionState_00.elipsoidSpaceDirection.x._2_2_ = uVar55;
      collisionState_00.elipsoidSpaceDirection.y._0_2_ = in_stack_23;
      collisionState_00.elipsoidSpaceDirection.y._2_2_ = in_stack_24;
      collisionState_00.elipsoidSpaceDirection.z._0_2_ = in_stack_4;
      collisionState_00.elipsoidSpaceDirection.z._2_2_ = in_stack_5;
      collisionState_00.elipsoidSpaceDistance._0_2_ = in_stack_2;
      collisionState_00.elipsoidSpaceDistance._2_2_ = in_stack_3;
      CellTraverser::CellTraverser_Init
                (pCVar62,localOrigin,collisionState_00,(MethodInfo *)CONCAT22(uVar64,uVar63));
      vh = (VoxelHit *)uVar18;
      distance = SUB84(uVar18,4);
      localPos.y = (float)vh;
      localPos.x = (float)auStack_50;
      localPos.z = distance;
      IVar52 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector
                         (localPos,(MethodInfo *)CONCAT22(uVar14,x._2_2_));
      localPos_00.y._2_2_ = uStack_16;
      localPos_00.y._0_2_ = uVar15;
      _Stack_58 = *IVar52._0_4_;
      uStack_74 = *(undefined2 *)(IVar52._0_4_ + 1);
      collisionState = (CollisionState *)&UNK_?;
      localPos_00.x = (float)auStack_50;
      localPos_00.z = (float)method_01;
      IVar52 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos_00,pMVar11);
      iVar75 = pCVar1->scanAxis;
      uStack_76._0_4_ = *IVar52._0_4_;
      uStack_76._4_4_ = (undefined *)CONCAT22(uStack_76._6_2_,*(undefined2 *)(IVar52._0_4_ + 1));
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar77 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         ((IntVector *)&_Stack_58,iVar75,(MethodInfo *)0x0);
      iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&pCVar1->minBounds,pCVar1->scanAxis,(MethodInfo *)0x0);
      iVar79 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&pCVar1->maxBounds,pCVar1->scanAxis,(MethodInfo *)0x0);
      if ((iVar78 <= iVar77) && (iVar78 = iVar77, iVar79 < iVar77)) {
        iVar78 = iVar79;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                ((IntVector *)&_Stack_58,iVar75,iVar78,(MethodInfo *)0x0);
      iVar75 = pCVar1->scanAxis;
      iVar77 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         ((IntVector *)&_Stack_58,iVar75,(MethodInfo *)0x0);
      iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&pCVar1->minBounds,pCVar1->scanAxis,(MethodInfo *)0x0);
      iVar79 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&pCVar1->maxBounds,pCVar1->scanAxis,(MethodInfo *)0x0);
      if ((iVar78 <= iVar77) && (iVar78 = iVar77, iVar79 < iVar77)) {
        iVar78 = iVar79;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                ((IntVector *)&uStack_76,iVar75,iVar78,(MethodInfo *)0x0);
      iStack_80 = 0;
      iStack_81 = 0;
      pMStack_27 = (MethodInfo *)0x0;
      pMVar11 = (MethodInfo *)0x0;
      pMStack_20 = (MethodInfo *)0x0;
      do {
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                           (&IStack_53,(int32_t)pMVar11,(MethodInfo *)0x0);
        if (iVar78 != 0) {
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    ((IntVector *)&_Stack_58,(int32_t)pMVar11,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar62 == (CellTraverser *)0x0) goto code_?;
          IStack_8.x = (pCVar62->fields).voxelPos.x;
          IStack_8.y = (pCVar62->fields).voxelPos.y;
          IStack_8.z = (pCVar62->fields).voxelPos.z;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_8,(int32_t)pMVar11,(MethodInfo *)0x0);
          iStack_80 = func_?();
          pMStack_27 = pMVar11;
        }
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this = &IStack_61;
        iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                           (this,(int32_t)pMVar11,(MethodInfo *)0x0);
        if (iVar78 != 0) {
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    ((IntVector *)&uStack_76,(int32_t)pMVar11,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar62 == (CellTraverser *)0x0) goto code_?;
          IStack_8.x = (pCVar62->fields).voxelPos.x;
          IStack_8.y = (pCVar62->fields).voxelPos.y;
          IStack_8.z = (pCVar62->fields).voxelPos.z;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_8,(int32_t)pMVar11,(MethodInfo *)0x0);
          iStack_81 = func_?();
          pMStack_20 = pMVar11;
        }
        pMVar11 = (MethodInfo *)((int)&pMVar11->methodPointer + 1);
      } while ((int)pMVar11 < 3);
      iStack_81 = iStack_81 + 1;
      iStack_80 = iStack_80 + 1;
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
      if (pCVar62 != (CellTraverser *)0x0) {
        pIVar82 = &(pCVar62->fields).voxelPos;
        x._0_2_ = pIVar82->x;
        x._2_2_ = pIVar82->y;
        uStack_83 = CONCAT26(uVar48,*pIVar82);
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  ((IntVector *)&uStack_6,x,x >> 0x10,uStack_84,(MethodInfo *)0x0);
        do {
          do {
            iVar75 = pCVar1->scanAxis;
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                               ((IntVector *)&uStack_6,iVar75,(MethodInfo *)0x0);
            uVar21 = (undefined2)((uint)pCVar1->scanAxis >> 0x10);
            uVar15 = 0x1025;
            iVar77 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                               (&pCVar1->maxBounds,pCVar1->scanAxis,(MethodInfo *)0x0);
            if (iVar77 < iVar78) goto code_?;
            iVar75 = pCVar1->scanAxis;
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                               ((IntVector *)&uStack_6,iVar75,(MethodInfo *)0x0);
            uVar22 = 0;
            pIVar82 = &pCVar1->minBounds;
            iVar77 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                               (pIVar82,pCVar1->scanAxis,(MethodInfo *)0x0);
            if (iVar78 < iVar77) goto code_?;
            uVar9 = radius._0_8_;
            if (-1 < iStack_80) {
              _Stack_5c.rgctx_data = (Il2CppRGCTXData *)(iStack_80 + 1);
              iVar12 = iStack_81 + 1;
              do {
                uVar41 = (undefined2)((uint)this >> 0x10);
                iVar85 = iVar12;
                if (-1 < iStack_81) {
                  do {
                    iVar78 = iStack_7;
                    pIVar86 = uStack_6;
                    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    uVar15 = 0x1025;
                    IVar52.z = iVar78;
                    IVar52._0_4_ = pIVar86;
                    radius_00.z._0_2_ = 0xe870;
                    radius_00.x = (float)(int)uVar9;
                    radius_00.y = (float)(int)((ulonglong)uVar9 >> 0x20);
                    radius_00.z._2_2_ = 0x1025;
                    uVar41 = SUB82(uVar18,2);
                    MVSweptElipsoidCheck_HandleCube
                              (vh,IVar52,radius_00,distance,(CollisionState *)&UNK_?,
                               (MethodInfo *)0x0);
                    iVar77 = iStack_7;
                    pIVar86 = uStack_6;
                    iVar78 = IStack_61.z;
                    IStack_87.x = IStack_61.x;
                    IStack_87.y = IStack_61.y;
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      uVar22 = 0x1025;
                      func_?();
                    }
                    i1.z = (int16_t)pIVar86;
                    i1._0_4_ = &stack0xffffff5c;
                    i2.y = uVar41;
                    i2.x = iVar77;
                    i2.z = IStack_87.x;
                    IVar52 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                       (i1,i2,(MethodInfo *)CONCAT22(x._2_2_,iVar78));
                    uVar41 = (undefined2)((uint)this >> 0x10);
                    uStack_6 = (Il2CppMethodPointer)*IVar52._0_4_;
                    iStack_7 = *(int16_t *)(IVar52._0_4_ + 1);
                    iVar85 = iVar85 + -1;
                  } while (iVar85 != 0);
                }
                iVar77 = iStack_7;
                pIVar86 = uStack_6;
                iVar78 = IStack_61.z;
                uVar88 = IStack_61._0_4_;
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  uVar15 = 0x1025;
                  func_?();
                }
                uVar89 = (ushort)((uint)pIVar82 >> 0x10);
                iV.z = (int16_t)uVar88;
                iV._0_4_ = iVar12;
                IVar52 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                                   ((int32_t)&stack0xffffff98,iV,
                                    (MethodInfo *)CONCAT22(uVar15,iVar78));
                puVar90 = &stack0xffffff8c;
                i1_00.z = (int16_t)pIVar86;
                i1_00._0_4_ = puVar90;
                i2_00.y = uVar21;
                i2_00.x = iVar77;
                i2_00.z = (int16_t)*IVar52._0_4_;
                IVar52 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                                   (i1_00,i2_00,
                                    (MethodInfo *)CONCAT22(uVar41,*(undefined2 *)(IVar52._0_4_ + 1))
                                   );
                puVar49 = IVar52._0_4_;
                uStack_6 = (Il2CppMethodPointer)*puVar49;
                iStack_7 = *(int16_t *)(puVar49 + 1);
                this = (IntVector *)&UNK_?;
                i1_01.z = (int16_t)*puVar49;
                i1_01._0_4_ = &stack0xffffff64;
                i2_01.y = uVar89;
                i2_01.x = *(undefined2 *)(puVar49 + 1);
                i2_01.z = IStack_53.x;
                IVar52 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                   (i1_01,i2_01,(MethodInfo *)CONCAT22(uVar22,IStack_53.z));
                pIVar82 = (IntVector *)((uint)uVar89 << 0x10);
                uVar15 = (undefined2)((uint)puVar90 >> 0x10);
                _Stack_5c.methodMetadataHandle = _Stack_5c.methodMetadataHandle + -1;
                uStack_6 = (Il2CppMethodPointer)*IVar52._0_4_;
                iStack_7 = *(int16_t *)(IVar52._0_4_ + 1);
                pCVar1 = collisionState;
              } while (_Stack_5c.rgctx_data != (Il2CppRGCTXData *)0x0);
            }
code_?:
            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar62 == (CellTraverser *)0x0) goto code_?;
            CellTraverser::CellTraverser_Step(pCVar62,(MethodInfo *)0x0);
            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
              this = (IntVector *)&UNK_?;
              func_?();
            }
            pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar62 == (CellTraverser *)0x0) goto code_?;
            IStack_8.x = (pCVar62->fields).stepDir.x;
            IStack_8.y = (pCVar62->fields).stepDir.y;
            iVar75 = pCVar1->scanAxis;
            IStack_8.z = (pCVar62->fields).stepDir.z;
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                               (&IStack_8,iVar75,(MethodInfo *)0x0);
            if (iVar78 == 0) {
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
              if (pCVar62 == (CellTraverser *)0x0) goto code_?;
              uVar91 = (pCVar62->fields).voxelPos.x;
              uStack_6 = (Il2CppMethodPointer)CONCAT22(uStack_6._2_2_,uVar91);
              pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
              if (pCVar62 == (CellTraverser *)0x0) goto code_?;
              uVar92 = (pCVar62->fields).voxelPos.y;
              uStack_6 = (Il2CppMethodPointer)CONCAT22(uVar92,uVar91);
              pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
              if (pCVar62 == (CellTraverser *)0x0) goto code_?;
              IStack_87.x = (pCVar62->fields).voxelPos.x;
              IStack_87.y = (pCVar62->fields).voxelPos.y;
              iVar12 = 0;
              iStack_7 = (pCVar62->fields).voxelPos.z;
              do {
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (&IStack_53,iVar12,(MethodInfo *)0x0);
                if (iVar78 != 0) {
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar62 == (CellTraverser *)0x0) goto code_?;
                  IStack_8.x = (pCVar62->fields).stepDir.x;
                  IStack_8.y = (pCVar62->fields).stepDir.y;
                  IStack_8.z = (pCVar62->fields).stepDir.z;
                  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                     (&IStack_8,iVar12,(MethodInfo *)0x0);
                  if (iVar78 == 0) {
                    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                    if (pCVar62 == (CellTraverser *)0x0) goto code_?;
                    IStack_8.x = (pCVar62->fields).stepDir.x;
                    IStack_8.y = (pCVar62->fields).stepDir.y;
                    IStack_8.z = (pCVar62->fields).stepDir.z;
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?();
                    }
                    pMVar11 = pMStack_20;
                    iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                       (&IStack_8,(int32_t)pMStack_20,(MethodInfo *)0x0);
                    iVar77 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                       (&IStack_61,(int32_t)pMVar11,(MethodInfo *)0x0);
                    if (iVar78 == iVar77) {
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        func_?();
                      }
                      uVar89 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                         ((IntVector *)&uStack_6,(int32_t)pMVar11,(MethodInfo *)0x0)
                      ;
                      this = (IntVector *)&UNK_?;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                                ((IntVector *)&uStack_6,(int32_t)pMVar11,
                                 (int16_t)((uint)uVar89 + iStack_81),(MethodInfo *)0x0);
                    }
                    if (-1 < iStack_80) {
                      iVar12 = iStack_80 + 1;
                      do {
                        iVar78 = iStack_7;
                        pIVar86 = uStack_6;
                        uVar15 = (undefined2)((uint)method_01 >> 0x10);
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        pos_00.z = iVar78;
                        pos_00._0_4_ = pIVar86;
                        radius_02.z._0_2_ = 0xe870;
                        radius_02.x = (float)(int)uVar9;
                        radius_02.y = (float)(int)((ulonglong)uVar9 >> 0x20);
                        radius_02.z._2_2_ = 0x1025;
                        MVSweptElipsoidCheck_HandleCube
                                  (vh,pos_00,radius_02,distance,(CollisionState *)&UNK_?,
                                   (MethodInfo *)0x0);
                        iVar77 = iStack_7;
                        pIVar86 = uStack_6;
                        iVar78 = IStack_53.z;
                        IStack_87.x = IStack_53.x;
                        IStack_87.y = IStack_53.y;
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          uVar15 = 0x1025;
                          func_?();
                        }
                        method_01 = (Il2CppClass *)CONCAT22(uVar15,iVar78);
                        uVar93._4_4_ = pIVar86;
                        uVar93._0_4_ = (Il2CppMethodPointer)&_Stack_4c;
                        uStack_76._4_4_ = &UNK_?;
                        i2_03.y = uVar14;
                        i2_03.x = iVar77;
                        i2_03.z = IStack_87.x;
                        IVar52 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                 IntVector_op_Addition
                                           (SUB86(uVar93,0),i2_03,(MethodInfo *)method_01);
                        uStack_6 = (Il2CppMethodPointer)*IVar52._0_4_;
                        iStack_7 = *(int16_t *)(IVar52._0_4_ + 1);
                        iVar12 = iVar12 + -1;
                        pCVar1 = collisionState;
                      } while (iVar12 != 0);
                    }
                    goto code_?;
                  }
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < 3);
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
              if (pCVar62 == (CellTraverser *)0x0) goto code_?;
              IStack_8.x = (pCVar62->fields).stepDir.x;
              IStack_8.y = (pCVar62->fields).stepDir.y;
              IStack_8.z = (pCVar62->fields).stepDir.z;
              if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pMVar11 = pMStack_27;
              iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                 (&IStack_8,(int32_t)pMStack_27,(MethodInfo *)0x0);
              iVar77 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                 (&IStack_53,(int32_t)pMVar11,(MethodInfo *)0x0);
              if (iVar78 == iVar77) {
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                uVar89 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   ((IntVector *)&uStack_6,(int32_t)pMVar11,(MethodInfo *)0x0);
                this = (IntVector *)&UNK_?;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                          ((IntVector *)&uStack_6,(int32_t)pMVar11,
                           (int16_t)((uint)uVar89 + iStack_80),(MethodInfo *)0x0);
              }
              if (-1 < iStack_81) {
                iVar12 = iStack_81 + 1;
                do {
                  iVar78 = iStack_7;
                  pIVar86 = uStack_6;
                  uVar15 = (undefined2)((uint)method_01 >> 0x10);
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pos.z = iVar78;
                  pos._0_4_ = pIVar86;
                  radius_01.z._0_2_ = 0xe870;
                  radius_01.x = (float)(int)uVar9;
                  radius_01.y = (float)(int)((ulonglong)uVar9 >> 0x20);
                  radius_01.z._2_2_ = 0x1025;
                  MVSweptElipsoidCheck_HandleCube
                            (vh,pos,radius_01,distance,(CollisionState *)&UNK_?,
                             (MethodInfo *)0x0);
                  iVar77 = iStack_7;
                  pIVar86 = uStack_6;
                  iVar78 = IStack_61.z;
                  IStack_87.x = IStack_61.x;
                  IStack_87.y = IStack_61.y;
                  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                    uVar15 = 0x1025;
                    func_?();
                  }
                  method_01 = (Il2CppClass *)CONCAT22(uVar15,iVar78);
                  uVar40._4_4_ = pIVar86;
                  uVar40._0_4_ = (Il2CppMethodPointer)&stack0xffffff78;
                  uStack_76._4_4_ = &UNK_?;
                  i2_02.y = uVar14;
                  i2_02.x = iVar77;
                  i2_02.z = IStack_87.x;
                  IVar52 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                     (SUB86(uVar40,0),i2_02,(MethodInfo *)method_01);
                  uStack_6 = (Il2CppMethodPointer)*IVar52._0_4_;
                  iStack_7 = *(int16_t *)(IVar52._0_4_ + 1);
                  iVar12 = iVar12 + -1;
                  pCVar1 = collisionState;
                } while (iVar12 != 0);
              }
              goto code_?;
            }
            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar62 == (CellTraverser *)0x0) goto code_?;
            auStack_50[0]._0_2_ = (pCVar62->fields).voxelPos.x;
            auStack_50[0]._2_2_ = (pCVar62->fields).voxelPos.y;
            uStack_6 = (Il2CppMethodPointer)CONCAT22(uStack_6._2_2_,(undefined2)auStack_50[0]);
            pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar62 == (CellTraverser *)0x0) goto code_?;
            uVar94 = (pCVar62->fields).voxelPos.y;
            uStack_6 = (Il2CppMethodPointer)CONCAT22(uVar94,(undefined2)auStack_50[0]);
            pCVar62 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
            if (pCVar62 == (CellTraverser *)0x0) goto code_?;
            IStack_87.x = (pCVar62->fields).voxelPos.x;
            IStack_87.y = (pCVar62->fields).voxelPos.y;
            iStack_7 = (pCVar62->fields).voxelPos.z;
          } while (pCVar1->firstHitDetected == 0);
          iVar75 = pCVar1->scanAxis;
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    ((IntVector *)&uStack_6,iVar75,(MethodInfo *)0x0);
          iVar12 = func_?();
          this = (IntVector *)&UNK_?;
          iVar85 = func_?();
        } while (iVar12 <= iVar85);
code_?:
        return pCVar1->firstHitDetected;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar95 = (code *)swi(3);
  bVar96 = (*pcVar95)();
  return bVar96;
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
    iVar1 = (this->fields)._size;
    if (iVar1 != 0) {
      if (iVar1 < 2) {
        pGVar2 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)&stack0xffffffb4,this,0,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        pTVar3 = pGVar2->progressText;
        pGVar4 = pGVar2->progressDivider;
        pGVar5 = pGVar2->progressBarTextBubble;
        pGVar6 = pGVar2->avatarHead;
        pRVar7 = pGVar2->avatarHeadImage;
        pGVar8 = pGVar2->avatarHeadUI;
        pPVar9 = pGVar2->disabledProgressBar;
        pGVar10 = pGVar2->disabledProgressDivider;
        pGVar11 = pGVar2->disabledBarTextBubble;
        pGVar12 = pGVar2->tierIconTempUnlock;
        pCVar13 = (Cube *)pGVar2->tierIconNumber;
        pPVar14 = pGVar2->endResultProgressBar;
        pCVar15 = (Collider *)pGVar2->tempProgress;
        pTVar16 = (Transform *)pGVar2->disabledTempProgress;
        pGVar17 = pGVar2->freeTryTextBubble;
        iVar18 = *(int64_t *)&pGVar2->hoverInputHandler;
        (voxelHit->point).x = (float)pGVar2->progressBar;
        (voxelHit->point).y = (float)pTVar3;
        (voxelHit->point).z = (float)pGVar4;
        (voxelHit->normal).x = (float)pGVar5;
        (voxelHit->normal).y = (float)pGVar6;
        (voxelHit->normal).z = (float)pRVar7;
        *(GameObject **)&voxelHit->cubePos = pGVar8;
        *(ProgressBar **)&(voxelHit->cubePos).z = pPVar9;
        voxelHit->face = (int32_t)pGVar10;
        *(GamePassesTextBubble **)&voxelHit->isCubeHit = pGVar11;
        voxelHit->woId = (int32_t)pGVar12;
        voxelHit->cube = pCVar13;
        voxelHit->distance = (float)pPVar14;
        voxelHit->collider = pCVar15;
        voxelHit->transform = pTVar16;
        *(GamePassesTextBubble **)&voxelHit->field_0x3c = pGVar17;
        voxelHit->interactionFlags = iVar18;
        func_?();
        return 1;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
  func_?();
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
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
    iVar4 = (pLStack_1->fields)._size;
    if (iVar4 != 0) {
      if (iVar4 < 2) {
        puStack_5 = auStack_6;
        pfVar7 = (float *)func_?();
        puStack_8 = (undefined *)0x0;
        fVar9 = pfVar7[1];
        fVar10 = pfVar7[2];
        fVar11 = pfVar7[3];
        fVar12 = pfVar7[4];
        fVar13 = pfVar7[5];
        fVar14 = pfVar7[6];
        fVar15 = pfVar7[7];
        fVar16 = pfVar7[8];
        fVar17 = pfVar7[9];
        fVar18 = pfVar7[10];
        pCVar19 = (Cube *)pfVar7[0xb];
        fVar20 = pfVar7[0xc];
        pCVar21 = (Collider *)pfVar7[0xd];
        pTVar22 = (Transform *)pfVar7[0xe];
        fVar23 = pfVar7[0xf];
        iVar24 = *(int64_t *)(pfVar7 + 0x10);
        ppCStack_25 = &voxelHit->cube;
        (voxelHit->point).x = *pfVar7;
        (voxelHit->point).y = fVar9;
        (voxelHit->point).z = fVar10;
        (voxelHit->normal).x = fVar11;
        (voxelHit->normal).y = fVar12;
        (voxelHit->normal).z = fVar13;
        *(float *)&voxelHit->cubePos = fVar14;
        *(float *)&(voxelHit->cubePos).z = fVar15;
        voxelHit->face = (int32_t)fVar16;
        *(float *)&voxelHit->isCubeHit = fVar17;
        voxelHit->woId = (int32_t)fVar18;
        voxelHit->cube = pCVar19;
        voxelHit->distance = fVar20;
        voxelHit->collider = pCVar21;
        voxelHit->transform = pTVar22;
        *(float *)&voxelHit->field_0x3c = fVar23;
        voxelHit->interactionFlags = iVar24;
        func_?();
        return 1;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
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
          (Ray ray,Transform *transform,Bounds localBounds,bool all,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if (transform != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
              ((Vector3 *)&stack0xffffffe4,transform,(MethodInfo *)0x0);
    position.z = localBounds.m_Center.z;
    position.x = localBounds.m_Center.x;
    position.y = localBounds.m_Center.y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       (&localBounds.m_Extents,transform,position,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar1->x;
    uVar2._4_4_ = pVVar1->y;
    fVar3 = pVVar1->z;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                       ((Vector3 *)&stack0xffffffe4,(Vector3 *)&stack0xffffffd8,
                        (Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
    uVar4 = pVVar1->x;
    uVar5 = pVVar1->y;
    fVar6 = pVVar1->z;
    localBounds.m_Extents.y = (float)uVar4;
    localBounds.m_Extents.z = (float)uVar5;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffc0,transform,(MethodInfo *)0x0);
    uVar7 = pVVar1->x;
    uVar8 = pVVar1->y;
    fVar9 = pVVar1->z;
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffbc,transform,(MethodInfo *)0x0);
    fVar11 = pQVar10->x;
    fVar12 = pQVar10->y;
    fVar13 = pQVar10->z;
    fVar14 = pQVar10->w;
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray_00.m_Origin.y = ray.m_Origin.y + ((float)((ulonglong)uVar2 >> 0x20) - (float)uVar8);
    ray_00.m_Origin.x = ray.m_Origin.x + ((float)uVar2 - (float)uVar7);
    ray_00.m_Origin.z = ray.m_Origin.z + (fVar3 - fVar9);
    ray_00.m_Direction.x = ray.m_Direction.x;
    ray_00.m_Direction.y = ray.m_Direction.y;
    ray_00.m_Direction.z = ray.m_Direction.z;
    radius.y = localBounds.m_Extents.z;
    radius.x = localBounds.m_Extents.y;
    radius.z = fVar6;
    rotation.y = fVar12;
    rotation.x = fVar11;
    rotation.z = fVar13;
    rotation.w = fVar14;
    pLVar15 = MVSweptElipsoidCheck_MVElipsoidCast_3
                        (ray_00,radius,rotation,distance,all,ignoreWoIds,layerMask,(MethodInfo *)0x0
                        );
    return pLVar15;
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pLVar15 = (List_1_VoxelHit_ *)(*pcVar16)();
  return pLVar15;
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
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff9c,0,0x48);
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
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this_03,message,method_00);
    func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
    func_?();
    pcVar3 = (code *)swi(3);
    pLVar1 = (List_1_VoxelHit_ *)(*pcVar3)();
    return pLVar1;
  }
  iVar4 = (pLVar1->fields)._size;
  piVar5 = &(pLVar1->fields)._version;
  *piVar5 = *piVar5 + 1;
  (pLVar1->fields)._size = 0;
  if (0 < iVar4) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pLVar1->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar6->zeroVector).x;
  uVar8 = (pVVar6->zeroVector).y;
  fVar9 = ray.m_Direction.z - (pVVar6->zeroVector).z;
  if (_UNK_? <=
      (ray.m_Direction.y - (float)uVar8) * (ray.m_Direction.y - (float)uVar8) +
      (ray.m_Direction.x - (float)uVar7) * (ray.m_Direction.x - (float)uVar7) + fVar9 * fVar9) {
    if (all != 0) {
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVSweptElipsoidCheck);
      }
      this = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
      if (this == (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                (this,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    }
    fVar9 = 0.0;
    iVar4 = 0;
    fStack_10 = 0.0;
    do {
      fVar11 = radius.x;
      if (((iVar4 != 0) && (fVar11 = radius.y, iVar4 != 1)) && (fVar11 = radius.z, iVar4 != 2))
      goto code_?;
      if (fVar9 < fVar11) {
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&radius,iVar4,(MethodInfo *)0x0);
        fStack_10 = fVar9;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CollisionDetectionGlobalBuffers);
    }
    pCVar12 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Physics);
    }
    overlapAmount =
         UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                   (ray.m_Origin,fStack_10,pCVar12,layerMask,(MethodInfo *)0x0);
    uVar2._0_2_ = 0;
    uVar2._2_2_ = 0;
    results = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
    puVar13 = (undefined *)ray.m_Direction.y;
    pSVar14 = (SharedCollisionFunctions__Class *)ray.m_Direction.z;
    fVar9 = fStack_10;
    fVar11 = distance;
    hitAmount = (float)UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                       Physics_SphereCastNonAlloc_2
                                 (ray,fStack_10,results,distance,layerMask,(MethodInfo *)0x0);
    pCVar12 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    hits = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uVar15 = 0;
    pTVar16 = (Transform *)ray.m_Origin.x;
    fVar17 = ray.m_Origin.y;
    fVar18 = ray.m_Origin.z;
    collisionData =
         SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                   (overlapAmount,pCVar12,(int32_t)hitAmount,hits,ray.m_Origin,(MethodInfo *)0x0);
    iVar4 = 0;
    if (collisionData == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
    for (; iVar4 < (collisionData->fields).length; iVar4 = iVar4 + 1) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (collisionData->fields).physicsCollisionDatas;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,iVar4,
                             MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                            ), RVar19 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                     (*(Transform **)((int)RVar19 + 0x14),(MethodInfo *)0x0);
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        puVar13 = &UNK_?;
        pSVar14 = TypeInfo__SharedCollisionFunctions;
        func_?();
      }
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        cRam_? = '\x01';
      }
      if ((wo != (MVWorldObjectClient *)0x0) &&
         ((ignoreWoIds == (HashSet_1_System_Int32_ *)0x0 ||
          (bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                   HashSet_1_System_Int32Enum__Contains
                             ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,(wo->fields)._.id,
                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_)
          , bVar20 == 0)))) {
        if (all != 0) {
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          this_01 = (HashSet_1_System_Int32Enum_ *)
                    TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
          if (this_01 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
          bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                  HashSet_1_System_Int32Enum__Contains
                            (this_01,(wo->fields)._.id,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          if (bVar20 != 0) goto code_?;
        }
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVSweptElipsoidCheck);
        }
        radius_00.y = radius.y;
        radius_00.x = radius.x;
        radius_00.z = radius.z;
        bVar20 = MVSweptElipsoidCheck_SphereHitDetectOnWo
                          (ray,radius_00,rotation,fStack_10,distance,iVar4,wo,collisionData,all ^ 1,
                           (VoxelHit *)&stack0xffffff9c,ignoreWoIds,(MethodInfo *)0x0);
        if (bVar20 != 0) {
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          pLVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
          if (pLVar1 == (List_1_VoxelHit_ *)0x0) goto code_?;
          func_?(pLVar1,puVar13,pSVar14,fVar9,results,fVar11,layerMask,uVar2,uStack_21,
                          iStack_22,&UNK_?,overlapAmount,pCVar12,hitAmount,hits,pTVar16,
                          fVar17,fVar18,uVar15,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
          this_02 = TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
          if (this_02 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (this_02,(wo->fields)._.id,
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
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_2,dir,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  fStack_5 = (float)((uint)(startOrigin.y * (float)uVar3._4_4_ +
                             startOrigin.x * (float)(undefined4)uVar3 + startOrigin.z * fVar4) ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  startOrigin.z = 0.0;
  uStack_6 = uVar3;
  fStack_7 = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fStack_8 = (float)((uint)dir.x ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fStack_9 = (float)((uint)dir.y ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  VStack_2.z = (float)((uint)dir.z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.y = fStack_9;
  value.x = fStack_8;
  value.z = VStack_2.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&dir,value,
                       (MethodInfo *)(TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z);
  uVar10 = pVVar1->x;
  uVar11 = pVVar1->y;
  fVar12 = pVVar1->z;
  uStack_13 = 0;
  if (pointsOnProjectPlane != (Vector3__Array *)0x0) {
    pVVar1 = pointsOnProjectPlane->vector;
    pVVar14 = pVVar1;
    for (; (int)uStack_13 < (int)pointsOnProjectPlane->max_length; uStack_13 = uStack_13 + 1) {
      if (pointsOnProjectPlane->max_length <= uStack_13) goto code_?;
      uStack_6._0_4_ = pVVar14->x;
      uStack_6._4_4_ = pVVar14->y;
      fStack_7 = pVVar14->z;
      if (_UNK_? <
          (float)(uVar3 >> 0x20) * (float)uStack_6._4_4_ +
          (float)uVar3 * (float)(undefined4)uStack_6 + fVar4 * fStack_7 + fStack_5) {
        uVar15 = pVVar14->x;
        uVar16 = pVVar14->y;
        ray.m_Origin.y = (float)uVar16;
        ray.m_Origin.x = (float)uVar15;
        uVar3 = ZEXT48(&dir.z);
        dir.z = 0.0;
        ray.m_Origin.z = fStack_7;
        ray.m_Direction.x = (float)uVar10;
        ray.m_Direction.y = (float)uVar11;
        ray.m_Direction.z = fVar12;
        bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                          ((Plane *)&stack0xffffffc4,ray,&dir.z,(MethodInfo *)0x0);
        if ((bVar17 != 0) && (startOrigin.z < dir.z)) {
          startOrigin.z = dir.z;
        }
      }
      pVVar14 = pVVar14 + 1;
    }
    if (0.0 < startOrigin.z) {
      fStack_8 = fStack_8 * startOrigin.z;
      for (uVar18 = 0; (int)uVar18 < (int)pointsOnProjectPlane->max_length; uVar18 = uVar18 + 1) {
        if (pointsOnProjectPlane->max_length <= uVar18) goto code_?;
        uVar19 = pVVar1->x;
        uVar20 = pVVar1->y;
        dir.z = pVVar1->z;
        pVVar1->x = (float)uVar19 + fStack_8;
        pVVar1->y = (float)uVar20 + fStack_9 * startOrigin.z;
        pVVar1->z = dir.z + VStack_2.z * startOrigin.z;
        pVVar1 = pVVar1 + 1;
        dir.x = (float)uVar19;
        dir.y = (float)uVar20;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pMVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  value.y = (float)((uint)localNormal.y ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.x = (float)((uint)localNormal.x ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.z = (float)((uint)localNormal.z ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_3,value,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  (pMVar1->collisionPlane0).m_Normal.x = (float)uVar4;
  (pMVar1->collisionPlane0).m_Normal.y = (float)uVar5;
  (pMVar1->collisionPlane0).m_Normal.z = fVar6;
  uVar7 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  (pMVar1->collisionPlane0).m_Distance =
       (float)((uint)((float)uVar4 * localHit.x + (float)uVar5 * localHit.y + fVar6 * localHit.z) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  localNormal.z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
    uVar7 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  }
  localHit.z = (float)((uint)localDir.z ^ uVar7);
  value_00.y = (float)((uint)localDir.y ^ uVar7);
  value_00.x = (float)((uint)localDir.x ^ uVar7);
  value_00.z = localHit.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&localHit,value_00,(MethodInfo *)0x0);
  uVar8 = pVVar2->x;
  uVar9 = pVVar2->y;
  uVar7 = 0;
  fVar6 = pVVar2->z;
  if (axisAlignedRect != (Vector3__Array *)0x0) {
    pVVar2 = axisAlignedRect->vector;
    localHit.z = (float)pVVar2;
    uVar10 = _UNK_?;
    while( true ) {
      if ((int)axisAlignedRect->max_length <= (int)uVar7) break;
      if (axisAlignedRect->max_length <= uVar7) goto code_?;
      fVar11 = ((Vector3 *)localHit.z)->z;
      fVar12 = ((Vector3 *)localHit.z)->x;
      fVar13 = ((Vector3 *)localHit.z)->y;
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        VStack_3.y = (float)TypeInfo__MVSweptElipsoidCheck;
        VStack_3.x = (float)&UNK_?;
        func_?();
        uVar10 = _UNK_?;
      }
      pMVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields;
      uStack_14._0_4_ = (pMVar1->collisionPlane0).m_Normal.x;
      uStack_14._4_4_ = (pMVar1->collisionPlane0).m_Normal.y;
      VStack_3.z = (pMVar1->collisionPlane0).m_Normal.z;
      fStack_15 = (float)uVar9 * (float)uStack_14._4_4_ + (float)uVar8 * (float)(undefined4)uStack_14
                 + fVar6 * VStack_3.z;
      VStack_3.x = (pMVar1->collisionPlane0).m_Normal.x;
      VStack_3.y = (pMVar1->collisionPlane0).m_Normal.y;
      fStack_16 = (float)((uint)(fVar13 * VStack_3.y + fVar12 * VStack_3.x + fVar11 * VStack_3.z) ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) -
                 (pMVar1->collisionPlane0).m_Distance;
      fStack_17 = VStack_3.z;
      if (cRam_? == '\0') {
        VStack_3.x = 3.2740544e-29;
        VStack_3.y = 2.4615908e-28;
        func_?();
        cRam_? = '\x01';
        uVar10 = _UNK_?;
      }
      fVar12 = (float)((uint)fStack_15 & uVar10);
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar11 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
      fVar13 = fVar12 * _UNK_?;
      if (fVar12 * _UNK_? <= fVar11) {
        fVar13 = fVar11;
      }
      if (((fVar13 <= (float)((uint)(0.0 - fStack_15) & uVar10)) &&
          (fVar12 = fStack_16 / fStack_15, 0.0 < fVar12)) && (localNormal.z < fVar12)) {
        localNormal.z = fVar12;
      }
      uVar7 = uVar7 + 1;
      localHit.z = (float)((int)localHit.z + 0xc);
    }
    if (localNormal.z != 0.0) {
      fVar6 = (float)((uint)localNormal.z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      for (uVar7 = 0; (int)uVar7 < (int)axisAlignedRect->max_length; uVar7 = uVar7 + 1) {
        if (axisAlignedRect->max_length <= uVar7) goto code_?;
        uVar18 = pVVar2->x;
        uVar19 = pVVar2->y;
        localHit.z = pVVar2->z + localDir.z * fVar6;
        pVVar2->x = (float)uVar18 + localDir.x * fVar6;
        pVVar2->y = (float)uVar19 + localDir.y * fVar6;
        pVVar2->z = localHit.z;
        pVVar2 = pVVar2 + 1;
      }
    }
    return;
  }
code_?:
  VStack_3.y = (float)&UNK_?;
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  VStack_3.y = (float)&UNK_?;
  func_?();
  goto code_?;
}


/* Boolean RayCast(Ray, Vector3 ByRef, Plane) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_RayCast
               (Ray ray,Vector3 *hit,Plane collPlane,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    (&collPlane,ray,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  fVar2 = ray.m_Direction.y;
  _puStack_14 = CONCAT44(&VStack_3,&UNK_?);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_3,ray.m_Direction,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  fVar7 = pVVar4->z;
  hit->x = ray.m_Origin.x + (float)uVar5 * fVar2;
  hit->y = ray.m_Origin.y + (float)uVar6 * fVar2;
  hit->z = ray.m_Origin.z + fVar7 * fVar2;
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
      if (chunk == (ICubeModelCollider__Class *)0x0) {
code_?:
        bVar23 = MVSweptElipsoidCheck_LayerScan
                           (voxelHit,radius,maxRadius,(BoxCollider *)chunk,distance,
                            (ICubeModelCollider *)wo_00,(PhysicsCollisionData *)RVar3,ray,boundRays
                            ,(MethodInfo *)0x0);
        if (bVar23 == 0) {
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
      pBVar24 = (BoxCollider__Class *)(chunk->_0).image;
      bVar25 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
      pBVar26 = TypeInfo__UnityEngine__BoxCollider;
      wo = wo_00;
      if ((bVar25 <= (pBVar24->_1).naturalAligment) &&
         ((pBVar24->_1).typeHierarchy[bVar25 - 1] == (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider
         )) goto code_?;
      goto code_?;
    }
  }
  else {
    cmb = (ICubeModelCollider *)func_?(wo,TypeInfo__ICubeModelCollider);
    if (cmb != (ICubeModelCollider *)0x0) goto code_?;
    func_?(wo,chunk);
    pBVar26 = extraout_EDX;
code_?:
    func_?(chunk,pBVar26);
  }
  func_?(wo,pIStack_22);
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  bVar23 = (*pcVar27)();
  return bVar23;
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
  this = (HashSet_1_MV_WorldObject_IntVector_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
  HashSet_1_MV_WorldObject_IntVector___ctor
            (this,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  TypeInfo__MVSweptElipsoidCheck->static_fields->debugTestedIntVector = this;
  func_?(TypeInfo__MVSweptElipsoidCheck->static_fields,this);
  this_00 = (CellTraverser *)func_?(TypeInfo__CellTraverser);
  CellTraverser::CellTraverser__ctor(this_00,(MethodInfo *)0x0);
  TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser = this_00;
  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser,this_00);
  pMVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar1->collisionPlane).m_Normal.x = 0.0;
  (pMVar1->collisionPlane).m_Normal.y = 0.0;
  (pMVar1->collisionPlane).m_Normal.z = 0.0;
  (pMVar1->collisionPlane).m_Distance = 0.0;
  pMVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar1->collisionPlane0).m_Normal.x = 0.0;
  (pMVar1->collisionPlane0).m_Normal.y = 0.0;
  (pMVar1->collisionPlane0).m_Normal.z = 0.0;
  (pMVar1->collisionPlane0).m_Distance = 0.0;
  this_01 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos = this_01;
  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos,this_01);
  this_02 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<VoxelHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
  TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits = this_02;
  func_?();
  pRStack2 = (Ray__Array *)0x8;
  pVVar3 = (Vector3__Array *)func_?();
  TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace = pVVar3;
  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace);
  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace = pVVar3;
  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace,pVVar3);
  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached,0,0x48);
  ppVStack4 = (Vector3__Class **)func_?(TypeInfo__UnityEngine__Vector3,4);
  TypeInfo__MVSweptElipsoidCheck->static_fields->cornerPointsLocalSpaceCalculateAxisAlignedRect =
       (Vector3__Array *)ppVStack4;
  ppVStack5 =
       &TypeInfo__MVSweptElipsoidCheck->static_fields->
        cornerPointsLocalSpaceCalculateAxisAlignedRect;
  func_?();
  pRStack2 = (Ray__Array *)func_?();
  TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect =
       (Vector3__Array *)pRStack2;
  func_?();
  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3);
  if (cRam_? == '\0') {
    ppVStack4 = &TypeInfo__UnityEngine__Vector3;
    func_?();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (pVVar3 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    fVar7 = (pVVar6->upVector).y;
    fVar8 = (pVVar6->upVector).z;
    if (pVVar3->max_length != 0) {
      pVVar3->vector[0].x = (pVVar6->upVector).x;
      pVVar3->vector[0].y = fVar7;
      pVVar3->vector[0].z = fVar8;
      if (cRam_? == '\0') {
        ppVStack4 = &TypeInfo__UnityEngine__Vector3;
        func_?();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar7 = (pVVar6->forwardVector).y;
      fVar8 = (pVVar6->forwardVector).z;
      if (1 < pVVar3->max_length) {
        pVVar3->vector[1].x = (pVVar6->forwardVector).x;
        pVVar3->vector[1].y = fVar7;
        pVVar3->vector[1].z = fVar8;
        if (cRam_? == '\0') {
          ppVStack4 = &TypeInfo__UnityEngine__Vector3;
          func_?();
          cRam_? = '\x01';
        }
        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar7 = (pVVar6->rightVector).y;
        fVar8 = (pVVar6->rightVector).z;
        if (2 < pVVar3->max_length) {
          pVVar3->vector[2].x = (pVVar6->rightVector).x;
          pVVar3->vector[2].y = fVar7;
          pVVar3->vector[2].z = fVar8;
          TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector =
               pVVar3;
          ppVStack5 =
               &TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector;
          ppVStack4 = (Vector3__Class **)pVVar3;
          func_?();
          pRStack2 = (Ray__Array *)func_?();
          TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays = pRStack2;
          func_?();
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3);
          TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays = pVVar3;
          func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays,
                          pVVar3);
          pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
          TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane = pVVar3;
          func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,pVVar3);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

