
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
  fStack_1 = collisionState->scaledMaxRadius;
  fStack_2 = 0.0;
  uVar3 = (collisionState->localOrigin).x;
  uVar4 = (collisionState->localOrigin).y;
  uVar5 = (collisionState->localDirection).x;
  uVar6 = (collisionState->localDirection).y;
  uStack_7._0_4_ = (collisionState->localOrigin).x;
  uStack_7._4_4_ = (collisionState->localOrigin).y;
  uVar8 = (collisionState->localDirection).x;
  uVar9 = (collisionState->localDirection).y;
  fStack_10 = (collisionState->localOrigin).z + (collisionState->localDirection).z * _UNK_?;
  VStack_11.z = 0.0;
  VStack_11.x = 0.0;
  VStack_11.y = 0.0;
  lineEnd.y = (float)uStack_7._4_4_ + (float)uVar9 * _UNK_?;
  lineEnd.x = (float)(undefined4)uStack_7 + (float)uVar8 * _UNK_?;
  point.y = (float)(int)pos.y;
  point.x = (float)(int)pos.x;
  lineStart.y = (float)uVar4 - (float)uVar6 * _UNK_?;
  lineStart.x = (float)uVar3 - (float)uVar5 * _UNK_?;
  point.z = (float)(int)pos.z;
  lineStart.z = (collisionState->localOrigin).z - (collisionState->localDirection).z * _UNK_?
  ;
  lineEnd.z = fStack_10;
  MathFunctions::MathFunctions_DistancePointLine_1
            (point,lineStart,lineEnd,&fStack_2,&VStack_11,(MethodInfo *)0x0);
  return fStack_2 <= fStack_1 + _UNK_?;
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
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = fVar1;
  fVar4 = fVar2;
  MathFunctions::MathFunctions_Vector3ToVector2
            (&min,(Vector2 *)&stack0xffffffe8,ignoreAxis,(MethodInfo *)0x0);
  MathFunctions::MathFunctions_Vector3ToVector2
            (&max,(Vector2 *)&stack0xffffffe0,ignoreAxis,(MethodInfo *)0x0);
  this = (List_1_UnityEngine_Vector2_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar5 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar6 = &(this->fields)._version;
    *piVar6 = *piVar6 + 1;
    pVVar7 = (this->fields)._items;
    if (pVVar7 != (Vector2__Array *)0x0) {
      uVar8 = (this->fields)._size;
      if (uVar8 < pVVar7->max_length) {
        (this->fields)._size = uVar8 + 1;
        if (pVVar7->max_length <= uVar8) goto code_?;
        pVVar7->vector[uVar8].x = fVar3;
        pVVar7->vector[uVar8].y = fVar4;
      }
      else {
        item.y = fVar4;
        item.x = fVar3;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(this,item,pMVar5->klass->rgctx_data[0xe].method);
      }
      pMVar5 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      piVar6 = &(this->fields)._version;
      *piVar6 = *piVar6 + 1;
      pVVar7 = (this->fields)._items;
      if (pVVar7 != (Vector2__Array *)0x0) {
        uVar8 = (this->fields)._size;
        if (uVar8 < pVVar7->max_length) {
          (this->fields)._size = uVar8 + 1;
          if (pVVar7->max_length <= uVar8) goto code_?;
          pVVar7->vector[uVar8].x = fVar3;
          pVVar7->vector[uVar8].y = fVar2;
        }
        else {
          item_00.y = fVar2;
          item_00.x = fVar3;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (this,item_00,pMVar5->klass->rgctx_data[0xe].method);
        }
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar6 = &(this->fields)._version;
        *piVar6 = *piVar6 + 1;
        pVVar7 = (this->fields)._items;
        if (pVVar7 != (Vector2__Array *)0x0) {
          uVar8 = (this->fields)._size;
          if (uVar8 < pVVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pVVar7->max_length <= uVar8) goto code_?;
            pVVar7->vector[uVar8].x = fVar1;
            pVVar7->vector[uVar8].y = fVar2;
          }
          else {
            item_01.y = fVar2;
            item_01.x = fVar1;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (this,item_01,pMVar5->klass->rgctx_data[0xe].method);
          }
          pMVar5 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pVVar7 = (this->fields)._items;
          if (pVVar7 != (Vector2__Array *)0x0) {
            uVar8 = (this->fields)._size;
            if (uVar8 < pVVar7->max_length) {
              (this->fields)._size = uVar8 + 1;
              if (pVVar7->max_length <= uVar8) goto code_?;
              pVVar7->vector[uVar8].x = fVar1;
              pVVar7->vector[uVar8].y = fVar4;
            }
            else {
              item_02.y = fVar4;
              item_02.x = fVar1;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        (this,item_02,pMVar5->klass->rgctx_data[0xe].method);
            }
            pLVar9 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)func_?()
            ;
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9
                       ,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
                      );
            iStack_10 = 0;
            while( true ) {
              fVar1 = 0.0;
              uStack_11._0_4_ = 0.0;
              uStack_11._4_4_ = 0.0;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,iStack_10,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
              index_01 = 0;
              index_00 = 0;
              this_00 = pLVar9;
              do {
                fVar3 = localIgnoreAxisValue;
                if (index_00 != ignoreAxis) {
                  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_Item
                                    ((Vector2 *)&stack0xffffffd8,index_01,(MethodInfo *)0x0);
                  index_01 = index_01 + 1;
                }
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                          ((Vector3 *)&uStack_11,index_00,fVar3,(MethodInfo *)0x0);
                index_00 = index_00 + 1;
              } while (index_00 < 3);
              if (ignoreAxis == 2) {
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                          ((Vector3 *)&uStack_11,2,localIgnoreAxisValue,(MethodInfo *)0x0);
              }
              if (t == (Transform *)0x0) break;
              position.z = fVar1;
              position.x = (float)uStack_11;
              position.y = uStack_11._4_4_;
              pAVar12 = (AnimatedTextureOffset_TextureOffsetAnimationData *)
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                                  ((Vector3 *)&stack0xffffffb4,t,position,(MethodInfo *)0x0);
              pMVar5 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              ;
              fVar1 = pAVar12->textureOffset;
              fVar3 = pAVar12->frameToChangeTextureAt;
              pVVar13 = *(VisualTreeAsset **)&pAVar12->hasAlreadyTransitioned;
              item_03 = *pAVar12;
              if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
              break;
              piVar6 = &(this_00->fields)._version;
              *piVar6 = *piVar6 + 1;
              pVVar14 = (this_00->fields)._items;
              if (pVVar14 == (VisualTreeAsset_UsingEntry__Array *)0x0) break;
              uVar8 = (this_00->fields)._size;
              pLVar9 = this_00;
              if (uVar8 < pVVar14->max_length) {
                (this_00->fields)._size = uVar8 + 1;
                if (pVVar14->max_length <= uVar8) goto code_?;
                pVVar14->vector[uVar8].alias = (String *)fVar1;
                pVVar14->vector[uVar8].path = (String *)fVar3;
                pVVar14->vector[uVar8].asset = pVVar13;
              }
              else {
                mscorlib.dll::System::Collections::Generic::
                List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
                List_1_AnimatedTextureOffset_TextureOffsetAnimationData__AddWithResize
                          ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)this_00,
                           item_03,pMVar5->klass->rgctx_data[0xe].method);
              }
              iStack_10 = iStack_10 + 1;
              if (3 < iStack_10) {
                uVar8 = 0;
                do {
                  pVVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffa8,this_00,
                                       uVar8 & 3,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  fVar1 = (float)pVVar15->alias;
                  fVar3 = (float)pVVar15->path;
                  pVVar13 = pVVar15->asset;
                  pVVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffff9c,this_00,
                                       uVar8 & 3,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  uVar16 = pVVar15->alias;
                  uVar17 = pVVar15->path;
                  pVVar18 = pVVar15->asset;
                  index = uVar8 + 1 & 0x80000003;
                  if ((int)index < 0) {
                    index = (index - 1 | 0xfffffffc) + 1;
                  }
                  pVVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffff90,this_00,index,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  uStack_11._0_4_ = (float)pVVar15->alias;
                  uStack_11._4_4_ = (float)pVVar15->path;
                  fVar4 = (float)uStack_11 + (float)uVar16;
                  fVar2 = uStack_11._4_4_ + (float)uVar17;
                  fVar19 = (float)pVVar15->asset + (float)pVVar18;
                  pVVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffff84,this_00,
                                       uVar8 & 3,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  uVar20 = pVVar15->alias;
                  uVar21 = pVVar15->path;
                  fVar4 = fVar4 - (float)uVar20;
                  fVar2 = fVar2 - (float)uVar21;
                  fVar19 = fVar19 - (float)pVVar15->asset;
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  uStack_11._4_4_ = (float)&UNK_?;
                  start.y = fVar3;
                  start.x = fVar1;
                  start.z = (float)pVVar13;
                  end.y = fVar2;
                  end.x = fVar4;
                  end.z = fVar19;
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_2
                            (start,end,(MethodInfo *)0x0);
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < 4);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
                      ((Vector3 *)&stack0xffffffc8,value,(MethodInfo *)0x0);
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
      uVar15 = __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
      pVVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
      if (pVVar14 == (Vector3__Array *)0x0) goto code_?;
      if (1 < pVVar14->max_length) {
        pVVar14->vector[1].x = fVar12 - (float)uVar10;
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
              pRVar18 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
              if ((pRVar18 == (Ray__Array *)0x0) ||
                 (pVVar14 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays,
                 pVVar14 == (Vector3__Array *)0x0)) goto code_?;
              if (pVVar14->max_length <= uVar16) break;
              pMVar19 = TypeInfo__MVSweptElipsoidCheck->static_fields;
              vector.z = *(float *)((int)&pVVar14->vector[0].x + (int)(cmb + 3 + -2));
              vector._0_8_ = *(undefined8 *)((int)&pVVar14->vector[0].x + (int)(cmb + 2 + -2));
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                  ((Vector3 *)&stack0xffffffe0,&pMVar19->elipsoidSpaceToWorld,vector
                                   ,(MethodInfo *)0x0);
              uVar20 = pVVar1->x;
              uVar21 = pVVar1->y;
              fVar2 = pVVar1->z;
              if (pRVar18->max_length <= uVar16) break;
              *(ulonglong *)((int)&pRVar18->vector[0].m_Origin.x + iVar17) =
                   CONCAT44((float)&stack0xffffffc8 + (float)uVar21,(float)uVar20 + 3.2515665e-29);
              *(float *)((int)&pRVar18->vector[0].m_Origin.z + iVar17) = fVar9 + fVar2;
              pRVar18 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
              if (pRVar18 == (Ray__Array *)0x0) goto code_?;
              if (pRVar18->max_length <= uVar16) break;
              value_00.y = (float)&UNK_?;
              value_00.x = fVar4;
              value_00.z = (float)&stack0xffffffe0;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&puStack_22,value_00,(MethodInfo *)0x0);
              uVar16 = uVar16 + 1;
              fVar2 = pVVar1->z;
              cmb = (ICubeModelCollider *)&(pMVar19->elipsoidSpaceToWorld).m30;
              *(undefined8 *)((int)&pRVar18->vector[0].m_Direction.x + iVar17) =
                   *(undefined8 *)pVVar1;
              *(float *)((int)&pRVar18->vector[0].m_Direction.z + iVar17) = fVar2;
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  fStack_2 = 0.0;
  uStack_3 = (ulonglong)(uint)uStack_3;
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
            ppMVar7 = &(&(cmb->klass->vtable).get_WorldRotation)
                       [cmb->klass->interfaceOffsets[uVar5].offset].method;
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
      fVar14 = fStack_2;
      pVVar15 = TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector;
      if (pVVar15 == (Vector3__Array *)0x0) break;
      uVar16 = uStack_3._4_4_;
      if (pVVar15->max_length <= uStack_3._4_4_) goto code_?;
      rotation.y = (float)uVar11;
      rotation.x = (float)uVar10;
      rotation.z = (float)uVar12;
      rotation.w = fVar13;
      point.z = *(float *)((int)&pVVar15->vector[0].z + (int)fStack_2);
      point._0_8_ = *(undefined8 *)((int)&pVVar15->vector[0].x + (int)fStack_2);
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         (&VStack_18,rotation,point,(MethodInfo *)0x0);
      uStack_3._0_4_ = (uint)pVVar17->x;
      uStack_3._4_4_ = (uint)pVVar17->y;
      fStack_2 = pVVar17->z;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         (&VStack_19,*pVVar17,(MethodInfo *)0x0);
      uStack_20._0_4_ = pVVar17->x;
      uStack_20._4_4_ = pVVar17->y;
      fStack_21 = pVVar17->z;
      fVar13 = (float)((uint)(ray.m_Direction.x * (float)(undefined4)uStack_20 +
                              ray.m_Direction.y * (float)uStack_20._4_4_ +
                             ray.m_Direction.z * fStack_21) & _UNK_?);
      if (fVar13 < fStack_1) {
        __return_storage_ptr__->x = (float)(uint)uStack_3;
        __return_storage_ptr__->y = (float)uStack_3._4_4_;
        __return_storage_ptr__->z = fStack_2;
        fStack_1 = fVar13;
      }
      fStack_2 = (float)((int)fVar14 + 0xc);
      uStack_3 = CONCAT44(uVar16 + 1,(uint)uStack_3);
      if (0x23 < (int)fStack_2) {
        return __return_storage_ptr__;
      }
    } while( true );
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
  if (boundRays != (Ray__Array *)0x0) {
    if (boundRays->max_length == 0) goto code_?;
    if (pVVar1 != (Vector3__Array *)0x0) {
      fVar2 = boundRays->vector[0].m_Origin.y;
      fVar3 = boundRays->vector[0].m_Origin.z;
      if (pVVar1->max_length == 0) goto code_?;
      pVVar1->vector[0].x = boundRays->vector[0].m_Origin.x;
      pVVar1->vector[0].y = fVar2;
      pVVar1->vector[0].z = fVar3;
      pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
      if (boundRays->max_length < 2) goto code_?;
      if (pVVar1 != (Vector3__Array *)0x0) {
        fVar2 = boundRays->vector[1].m_Origin.y;
        fVar3 = boundRays->vector[1].m_Origin.z;
        if (pVVar1->max_length < 2) goto code_?;
        pVVar1->vector[1].x = boundRays->vector[1].m_Origin.x;
        pVVar1->vector[1].y = fVar2;
        pVVar1->vector[1].z = fVar3;
        pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
        if (boundRays->max_length < 3) goto code_?;
        if (pVVar1 != (Vector3__Array *)0x0) {
          fVar2 = boundRays->vector[2].m_Origin.y;
          fVar3 = boundRays->vector[2].m_Origin.z;
          if (pVVar1->max_length < 3) goto code_?;
          pVVar1->vector[2].x = boundRays->vector[2].m_Origin.x;
          pVVar1->vector[2].y = fVar2;
          pVVar1->vector[2].z = fVar3;
          pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
          if (boundRays->max_length < 4) goto code_?;
          if (pVVar1 != (Vector3__Array *)0x0) {
            fVar2 = boundRays->vector[3].m_Origin.y;
            fVar3 = boundRays->vector[3].m_Origin.z;
            if (3 < pVVar1->max_length) {
              pVVar1->vector[3].x = boundRays->vector[3].m_Origin.x;
              pVVar1->vector[3].y = fVar2;
              uVar4 = 0;
              pVVar1->vector[3].z = fVar3;
              pRStack_5 = boundRays->vector;
              iStack_6 = 0;
              while (uVar4 < boundRays->max_length) {
                fStack_7 = (pRStack_5->m_Origin).x;
                fStack_8 = (pRStack_5->m_Origin).y;
                fStack_9 = (pRStack_5->m_Origin).z;
                fStack_10 = (pRStack_5->m_Direction).x;
                uStack_11._0_4_ = (pRStack_5->m_Direction).y;
                uStack_11._4_4_ = (pRStack_5->m_Direction).z;
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MVSweptElipsoidCheck);
                }
                pVVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
                if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
                if (pVVar1->max_length <= uVar4) break;
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
                  uStack_13 = uVar4;
                  puVar14 = (undefined8 *)func_?();
                  uStack_11 = *puVar14;
                  uVar15 = *(undefined4 *)(puVar14 + 1);
                  uStack_16 = CONCAT44(&UNK_?,(undefined4)uStack_16);
                  puStack_17 = (undefined *)uVar4;
                  iVar18 = func_?();
                  uVar19 = *(undefined8 *)(iVar18 + 0xc);
                  uStack_20 = *(uint *)(iVar18 + 0x14);
                  uStack_21._0_4_ = (uint)uVar19;
                  uStack_21._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
                  uStack_22 = uStack_20 ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                  ;
                  uStack_23 = CONCAT44(uStack_21._4_4_ ^
                                       __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                       ,(uint)uStack_21 ^
                                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
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
                  hit = (Vector3 *)func_?(uVar4);
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
                uVar4 = uVar4 + 1;
                iStack_6 = iStack_6 + 0xc;
                pRStack_5 = pRStack_5 + 1;
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
  uVar18 = (collisionState->localDirection).x;
  uVar19 = (collisionState->localDirection).y;
  VStack_20.z = 0.0;
  VStack_20.x = 0.0;
  VStack_20.y = 0.0;
  point.y = (float)iVar6;
  point.x = fStack_7;
  lineStart.y = (float)uVar14 - (float)uVar16 * _UNK_?;
  lineStart.x = (float)uVar13 - (float)uVar15 * _UNK_?;
  point.z = fStack_12;
  lineStart.z = (collisionState->localOrigin).z - (collisionState->localDirection).z * _UNK_?
  ;
  lineEnd.y = (float)uStack_3._4_4_ + (float)uVar19 * _UNK_?;
  lineEnd.x = (float)(undefined4)uStack_3 + (float)uVar18 * _UNK_?;
  lineEnd.z = (float)pVStack_17 + (collisionState->localDirection).z * _UNK_?;
  MathFunctions::MathFunctions_DistancePointLine_1
            (point,lineStart,lineEnd,&fStack_8,&VStack_20,(MethodInfo *)0x0);
  if ((float)uStack_5 + _UNK_? < fStack_8) {
    return;
  }
  if (collisionState->cmb != (ICubeModelCollider *)0x0) {
    pCVar21 = (Cube *)func_?();
    uStack_5 = pCVar21;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar22 = (Cube__Class *)0x0;
    this = (Matrix4x4 *)0x0;
    __return_storage_ptr__ = pCVar21;
    bVar23 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      ((CubeBase *)pCVar21,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar23 == 0) {
      return;
    }
    if (pCVar21 != (Cube *)0x0) {
      if ((pCVar21->fields).hiddenSides == 0x3f) {
        return;
      }
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                ((CubeBase *)pCVar21,
                 &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace,
                 (MethodInfo *)0x0);
      iStack_24 = (int)pos.z;
      iVar6 = (int)pos.x;
      uStack_4 = 0;
      iVar25 = (int)pos.y;
      fStack_8 = 0.0;
      while( true ) {
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar26 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar26 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar26->max_length <= (int)uStack_4) {
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
          pVVar26 = (Vector3__Array *)
                    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
          uStack_4 = 0;
          pCVar21 = uStack_5;
          pVStack_27 = pVVar26;
          if (pVVar26 == (Vector3__Array *)0x0) goto code_?;
          goto code_?;
        }
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar26 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar26 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar26->max_length <= uStack_4) break;
        VStack_20.z = *(float *)((int)&pVVar26->vector[0].z + (int)fStack_8);
        VStack_20._0_8_ = *(undefined8 *)((int)&pVVar26->vector[0].x + (int)fStack_8);
        *(ulonglong *)((int)&pVVar26->vector[0].x + (int)fStack_8) =
             CONCAT44(VStack_20.y + (float)iVar25,VStack_20.x + (float)iVar6);
        *(float *)((int)&pVVar26->vector[0].z + (int)fStack_8) = VStack_20.z + (float)iStack_24;
        pVStack_17 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        pVStack_27 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVStack_27 == (Vector3__Array *)0x0) goto code_?;
        if (pVStack_27->max_length <= uStack_4) break;
        uVar28 = *(undefined8 *)((int)&pVStack_27->vector[0].x + (int)fStack_8);
        pCVar22 = (Cube__Class *)uVar28;
        this = &collisionState->localToElipsoidSpace;
        __return_storage_ptr__ = (Cube *)&stack0xffffff80;
        point_00.z = *(float *)((int)&pVStack_27->vector[0].z + (int)fStack_8);
        point_00.x = (float)(int)uVar28;
        point_00.y = (float)(int)((ulonglong)uVar28 >> 0x20);
        pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)__return_storage_ptr__,this,point_00,(MethodInfo *)0x0);
        pVStack_27 = (Vector3__Array *)pVVar29->z;
        if (pVStack_17->max_length <= uStack_4) break;
        *(undefined8 *)((int)&pVStack_17->vector[0].x + (int)fStack_8) = *(undefined8 *)pVVar29;
        *(Vector3__Array **)((int)&pVStack_17->vector[0].z + (int)fStack_8) = pVStack_27;
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
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
code_?:
  if ((int)pVVar26->max_length <= (int)uStack_4) {
    if ((bStack_2 != 0) && (collisionState->firstHitDetected == 0)) {
      key = collisionState->scanAxis;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar31 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&pos,key,(MethodInfo *)0x0);
      collisionState->firstHitScanAxis = (int)iVar31;
      collisionState->firstHitDetected = 1;
    }
    return;
  }
  if (pVVar26->max_length <= uStack_4) goto code_?;
  bVar32 = *(byte *)((int)&pVVar26->vector[0].x + uStack_4);
  pVStack_17 = (Vector3__Array *)CONCAT31(pVStack_17._1_3_,bVar32);
  if (((pCVar21->fields).hiddenSides & bVar32) == 0) {
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar26 = pVStack_17;
    fStack_8 = (float)MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                                 ((FaceFlags__Enum)pVStack_17,(MethodInfo *)0x0);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                     ((FaceFlags__Enum)pVVar26,(MethodInfo *)0x0);
    uVar1 = 0;
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
    uVar33 = CONCAT22(pos.y,pos.x);
    method_00 = (MethodInfo *)0x0;
    pCVar34 = collisionState;
    pfVar35 = (float *)&stack0xfffffdb8;
    for (iVar6 = 0x31; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar35 = (pCVar34->localOrigin).x;
      pCVar34 = (CollisionState *)&(pCVar34->localOrigin).y;
      pfVar35 = pfVar35 + 1;
    }
    p1_00.y = (float)uStack_10;
    p1_00.x = (float)uStack_9;
    p1_00.z = fStack_11;
    p2_00.z = fStack_36;
    p2_00.x = (float)(undefined4)uStack_37;
    p2_00.y = (float)uStack_37._4_4_;
    p3_00.z = VStack_20.z;
    p3_00.x = VStack_20.x;
    p3_00.y = VStack_20.y;
    pos_01.z = pos.z;
    pos_01.x = pos.x;
    pos_01.y = pos.y;
    collisionState_01.scaledMaxRadius = (float)in_stack_38;
    auVar39 = in_stack_40._0_12_;
    auVar41 = in_stack_40._12_12_;
    auVar42 = in_stack_40._24_12_;
    auVar43 = in_stack_40._36_12_;
    auVar44 = in_stack_40._48_12_;
    auVar45 = in_stack_40._60_12_;
    auVar46 = in_stack_40._76_64_;
    uVar47 = in_stack_40._144_6_;
    uVar48 = in_stack_40._150_6_;
    collisionState_01.localOrigin.x = (float)auVar39._0_4_;
    collisionState_01.localOrigin.y = (float)auVar39._4_4_;
    collisionState_01.localOrigin.z = (float)auVar39._8_4_;
    collisionState_01.localHitPoint.x = (float)auVar41._0_4_;
    collisionState_01.localHitPoint.y = (float)auVar41._4_4_;
    collisionState_01.localHitPoint.z = (float)auVar41._8_4_;
    collisionState_01.localNormal.x = (float)auVar42._0_4_;
    collisionState_01.localNormal.y = (float)auVar42._4_4_;
    collisionState_01.localNormal.z = (float)auVar42._8_4_;
    collisionState_01.localDirection.x = (float)auVar43._0_4_;
    collisionState_01.localDirection.y = (float)auVar43._4_4_;
    collisionState_01.localDirection.z = (float)auVar43._8_4_;
    collisionState_01.origin.x = (float)auVar44._0_4_;
    collisionState_01.origin.y = (float)auVar44._4_4_;
    collisionState_01.origin.z = (float)auVar44._8_4_;
    collisionState_01.direction.x = (float)auVar45._0_4_;
    collisionState_01.direction.y = (float)auVar45._4_4_;
    collisionState_01.direction.z = (float)auVar45._8_4_;
    collisionState_01.cmb = (ICubeModelCollider *)in_stack_40._72_4_;
    collisionState_01.localToElipsoidSpace.m00 = (float)auVar46._0_4_;
    collisionState_01.localToElipsoidSpace.m10 = (float)auVar46._4_4_;
    collisionState_01.localToElipsoidSpace.m20 = (float)auVar46._8_4_;
    collisionState_01.localToElipsoidSpace.m30 = (float)auVar46._12_4_;
    collisionState_01.localToElipsoidSpace.m01 = (float)auVar46._16_4_;
    collisionState_01.localToElipsoidSpace.m11 = (float)auVar46._20_4_;
    collisionState_01.localToElipsoidSpace.m21 = (float)auVar46._24_4_;
    collisionState_01.localToElipsoidSpace.m31 = (float)auVar46._28_4_;
    collisionState_01.localToElipsoidSpace.m02 = (float)auVar46._32_4_;
    collisionState_01.localToElipsoidSpace.m12 = (float)auVar46._36_4_;
    collisionState_01.localToElipsoidSpace.m22 = (float)auVar46._40_4_;
    collisionState_01.localToElipsoidSpace.m32 = (float)auVar46._44_4_;
    collisionState_01.localToElipsoidSpace.m03 = (float)auVar46._48_4_;
    collisionState_01.localToElipsoidSpace.m13 = (float)auVar46._52_4_;
    collisionState_01.localToElipsoidSpace.m23 = (float)auVar46._56_4_;
    collisionState_01.localToElipsoidSpace.m33 = (float)auVar46._60_4_;
    collisionState_01.scanAxis = in_stack_40._140_4_;
    collisionState_01.minBounds.x = (short)uVar47;
    collisionState_01.minBounds.y = (short)((uint6)uVar47 >> 0x10);
    collisionState_01.minBounds.z = (short)((uint6)uVar47 >> 0x20);
    collisionState_01.maxBounds.x = (short)uVar48;
    collisionState_01.maxBounds.y = (short)((uint6)uVar48 >> 0x10);
    collisionState_01.maxBounds.z = (short)((uint6)uVar48 >> 0x20);
    collisionState_01.firstHitScanAxis = in_stack_40._156_4_;
    collisionState_01.firstHitDetected = in_stack_40[0xa0];
    collisionState_01._161_3_ = in_stack_40._161_3_;
    auVar39 = in_stack_49._0_12_;
    auVar41 = in_stack_49._12_12_;
    collisionState_01.elipsoidSpaceOrigin.x = (float)auVar39._0_4_;
    collisionState_01.elipsoidSpaceOrigin.y = (float)auVar39._4_4_;
    collisionState_01.elipsoidSpaceOrigin.z = (float)auVar39._8_4_;
    collisionState_01.elipsoidSpaceDirection.x = (float)auVar41._0_4_;
    collisionState_01.elipsoidSpaceDirection.y = (float)auVar41._4_4_;
    collisionState_01.elipsoidSpaceDirection.z = (float)auVar41._8_4_;
    collisionState_01.elipsoidSpaceDistance = (float)in_stack_49._24_4_;
    fVar50 = distance;
    fVar51 = fStack_8;
    pCVar21 = uStack_5;
    uVar28 = radius._0_8_;
    fVar52 = radius.z;
    iVar31 = pos.z;
    bVar23 = MVSweptElipsoidCheck_HandleTriangleTest
                      (p1_00,p2_00,p3_00,vh,distance,(Face__Enum)fStack_8,uStack_5,radius,pos_01,
                       collisionState_01,method_00);
    bStack_2 = bVar23 != 0 || bStack_2 != 0;
    if (((TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
          (Vector3__Array *)0x0) ||
        (func_?(),
        TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0)) ||
       (func_?(),
       TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
       (Vector3__Array *)0x0)) goto code_?;
    puVar53 = &uStack_54;
    pMVar55 = (MonitorData *)&UNK_?;
    func_?();
    pos_00.y = pos.y;
    pos_00.x = pos.x;
    in_stack_38 = (MethodInfo *)0x0;
    pCVar34 = collisionState;
    pfVar35 = (float *)&stack0xfffffd98;
    for (iVar6 = 0x31; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar35 = (pCVar34->localOrigin).x;
      pCVar34 = (CollisionState *)&(pCVar34->localOrigin).y;
      pfVar35 = pfVar35 + 1;
    }
    p2.y = (float)pMVar55;
    p2.x = (float)pCVar22;
    p1.y = (float)__return_storage_ptr__;
    p1.x = (float)uVar1;
    p1.z = (float)this;
    p2.z = (float)puVar53;
    p3.z = fStack_12;
    p3.x = (float)(undefined4)uStack_54;
    p3.y = (float)uStack_54._4_4_;
    pos_00.z = pos.z;
    collisionState_00.localOrigin.y = fVar51;
    collisionState_00.localOrigin.x = fVar50;
    collisionState_00.localOrigin.z = (float)pCVar21;
    collisionState_00.localHitPoint.x = (float)uVar28;
    collisionState_00.localHitPoint.y = SUB84(uVar28,4);
    collisionState_00.localHitPoint.z = fVar52;
    collisionState_00.localNormal.x = (float)uVar33;
    collisionState_00.localNormal.y._0_2_ = iVar31;
    collisionState_00.localNormal.y._2_2_ = in_stack_56;
    auVar39 = in_stack_40._4_12_;
    auVar41 = in_stack_40._16_12_;
    auVar42 = in_stack_40._28_12_;
    auVar46 = in_stack_40._44_64_;
    uVar47 = in_stack_40._112_6_;
    uVar48 = in_stack_40._118_6_;
    auVar43 = in_stack_40._136_12_;
    auVar44 = in_stack_40._148_12_;
    collisionState_00.localNormal.z = (float)in_stack_40._0_4_;
    collisionState_00.localDirection.x = (float)auVar39._0_4_;
    collisionState_00.localDirection.y = (float)auVar39._4_4_;
    collisionState_00.localDirection.z = (float)auVar39._8_4_;
    collisionState_00.origin.x = (float)auVar41._0_4_;
    collisionState_00.origin.y = (float)auVar41._4_4_;
    collisionState_00.origin.z = (float)auVar41._8_4_;
    collisionState_00.direction.x = (float)auVar42._0_4_;
    collisionState_00.direction.y = (float)auVar42._4_4_;
    collisionState_00.direction.z = (float)auVar42._8_4_;
    collisionState_00.cmb = (ICubeModelCollider *)in_stack_40._40_4_;
    collisionState_00.localToElipsoidSpace.m00 = (float)auVar46._0_4_;
    collisionState_00.localToElipsoidSpace.m10 = (float)auVar46._4_4_;
    collisionState_00.localToElipsoidSpace.m20 = (float)auVar46._8_4_;
    collisionState_00.localToElipsoidSpace.m30 = (float)auVar46._12_4_;
    collisionState_00.localToElipsoidSpace.m01 = (float)auVar46._16_4_;
    collisionState_00.localToElipsoidSpace.m11 = (float)auVar46._20_4_;
    collisionState_00.localToElipsoidSpace.m21 = (float)auVar46._24_4_;
    collisionState_00.localToElipsoidSpace.m31 = (float)auVar46._28_4_;
    collisionState_00.localToElipsoidSpace.m02 = (float)auVar46._32_4_;
    collisionState_00.localToElipsoidSpace.m12 = (float)auVar46._36_4_;
    collisionState_00.localToElipsoidSpace.m22 = (float)auVar46._40_4_;
    collisionState_00.localToElipsoidSpace.m32 = (float)auVar46._44_4_;
    collisionState_00.localToElipsoidSpace.m03 = (float)auVar46._48_4_;
    collisionState_00.localToElipsoidSpace.m13 = (float)auVar46._52_4_;
    collisionState_00.localToElipsoidSpace.m23 = (float)auVar46._56_4_;
    collisionState_00.localToElipsoidSpace.m33 = (float)auVar46._60_4_;
    collisionState_00.scanAxis = in_stack_40._108_4_;
    collisionState_00.minBounds.x = (short)uVar47;
    collisionState_00.minBounds.y = (short)((uint6)uVar47 >> 0x10);
    collisionState_00.minBounds.z = (short)((uint6)uVar47 >> 0x20);
    collisionState_00.maxBounds.x = (short)uVar48;
    collisionState_00.maxBounds.y = (short)((uint6)uVar48 >> 0x10);
    collisionState_00.maxBounds.z = (short)((uint6)uVar48 >> 0x20);
    collisionState_00.firstHitScanAxis = in_stack_40._124_4_;
    collisionState_00.firstHitDetected = in_stack_40[0x80];
    collisionState_00._161_3_ = in_stack_40._129_3_;
    collisionState_00.scaledMaxRadius = (float)in_stack_40._132_4_;
    collisionState_00.elipsoidSpaceOrigin.x = (float)auVar43._0_4_;
    collisionState_00.elipsoidSpaceOrigin.y = (float)auVar43._4_4_;
    collisionState_00.elipsoidSpaceOrigin.z = (float)auVar43._8_4_;
    collisionState_00.elipsoidSpaceDirection.x = (float)auVar44._0_4_;
    collisionState_00.elipsoidSpaceDirection.y = (float)auVar44._4_4_;
    collisionState_00.elipsoidSpaceDirection.z = (float)auVar44._8_4_;
    collisionState_00.elipsoidSpaceDistance = (float)in_stack_40._160_4_;
    bVar23 = MVSweptElipsoidCheck_HandleTriangleTest
                      (p1,p2,p3,vh,distance,(Face__Enum)fStack_8,uStack_5,radius,pos_00,
                       collisionState_00,in_stack_38);
    bStack_2 = bStack_2 | bVar23;
    pVVar26 = pVStack_27;
    pCVar21 = uStack_5;
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
                 (bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                          Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                    ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,
                                     (pMVar2->fields)._.id,
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
  func_?(&stack0xfffffed8,0,0xc4);
  if (chunk != (BoxCollider *)0x0) {
    pVVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                        (&VStack_2,chunk,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fVar5 = pVVar1->z;
    pVVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                        (&VStack_2,chunk,(MethodInfo *)0x0);
    uVar6 = pVVar1->x;
    uVar7 = pVVar1->y;
    fVar8 = pVVar1->z * _UNK_?;
    fVar9 = (float)uVar6 * _UNK_?;
    fVar10 = (float)uVar7 * _UNK_?;
    VStack_2.z = fVar8;
    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    localSpaceBounds.m_Center.y = (float)uVar4;
    localSpaceBounds.m_Center.x = (float)uVar3;
    localSpaceBounds.m_Center.z = fVar5;
    localSpaceBounds.m_Extents.x = fVar9;
    localSpaceBounds.m_Extents.y = fVar10;
    localSpaceBounds.m_Extents.z = fVar8;
    SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
              ((IntVector *)&stack0xffffff68,(IntVector *)&stack0xffffff6e,localSpaceBounds,
               (MethodInfo *)0x0);
    if ((collisionData != (PhysicsCollisionData *)0x0) &&
       (pTVar11 = (collisionData->fields).transform, pTVar11 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                (&VStack_2,pTVar11,(collisionData->fields).point,(MethodInfo *)0x0);
      pTVar11 = (collisionData->fields).transform;
      if (pTVar11 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformDirection
                  (&VStack_2,pTVar11,(collisionData->fields).normal,(MethodInfo *)0x0);
        pTVar11 = (collisionData->fields).transform;
        if (pTVar11 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformDirection
                    (&VStack_2,pTVar11,ray.m_Direction,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pMVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields;
          fVar5 = (pMVar12->worldToElipsoidSpace).m00;
          fVar8 = (pMVar12->worldToElipsoidSpace).m10;
          fVar10 = (pMVar12->worldToElipsoidSpace).m20;
          fVar9 = (pMVar12->worldToElipsoidSpace).m30;
          fVar13 = (pMVar12->worldToElipsoidSpace).m01;
          VStack_2.x = (pMVar12->worldToElipsoidSpace).m11;
          VStack_2.y = (pMVar12->worldToElipsoidSpace).m21;
          VStack_2.z = (pMVar12->worldToElipsoidSpace).m31;
          fVar14 = (pMVar12->worldToElipsoidSpace).m02;
          uVar15 = (pMVar12->worldToElipsoidSpace).m12;
          uVar16 = (pMVar12->worldToElipsoidSpace).m22;
          fVar17 = (pMVar12->worldToElipsoidSpace).m32;
          fVar18 = (pMVar12->worldToElipsoidSpace).m03;
          uVar19 = (pMVar12->worldToElipsoidSpace).m13;
          uVar20 = (pMVar12->worldToElipsoidSpace).m23;
          fVar21 = (pMVar12->worldToElipsoidSpace).m33;
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)chunk,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localToWorldMatrix
                                ((Matrix4x4 *)&stack0xfffffe98,pTVar11,(MethodInfo *)0x0);
            fVar23 = pMVar22->m00;
            puVar24 = (undefined *)pMVar22->m10;
            pSVar25 = (String *)pMVar22->m20;
            lhs.m10 = fVar8;
            lhs.m00 = fVar5;
            lhs.m20 = fVar10;
            lhs.m30 = fVar9;
            lhs.m01 = fVar13;
            lhs.m11 = VStack_2.x;
            lhs.m21 = VStack_2.y;
            lhs.m31 = VStack_2.z;
            lhs.m02 = fVar14;
            lhs.m12 = (float)uVar15;
            lhs.m22 = (float)uVar16;
            lhs.m32 = fVar17;
            lhs.m03 = fVar18;
            lhs.m13 = (float)uVar19;
            lhs.m23 = (float)uVar20;
            lhs.m33 = fVar21;
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                      ((Matrix4x4 *)&stack0xfffffe98,lhs,*pMVar22,(MethodInfo *)0x0);
            pIVar26 = (ICubeModelCollider *)&stack0xffffff20;
            func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar1 = &TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
            fVar5 = pVVar1->x;
            puVar27 = (undefined *)pVVar1->y;
            __return_storage_ptr__ = &VStack_2;
            str1 = (String *)&UNK_?;
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                (__return_storage_ptr__,*pVVar1,(MethodInfo *)0x0);
            VStack_2.z = pVVar1->z * maxRadius;
            if (pIVar26 != (ICubeModelCollider *)0x0) {
              func_?();
              if (pIVar26 != (ICubeModelCollider *)0x0) {
                func_?();
                if (pIVar26 != (ICubeModelCollider *)0x0) {
                  func_?();
                  func_?();
                  fStack_28 = 0.0;
                  fVar8 = ray.m_Origin.x;
                  fVar10 = ray.m_Origin.y;
                  puVar29 = (undefined *)ray.m_Origin.z;
                  fVar9 = ray.m_Direction.z;
                  if ((collisionData->fields).isInsideCollider == 0) {
                    fVar13 = (collisionData->fields).distance - _UNK_?;
                    fVar8 = ray.m_Origin.x + ray.m_Direction.x * fVar13;
                    fVar10 = ray.m_Direction.y * fVar13 + ray.m_Origin.y;
                    VStack_2.z = ray.m_Origin.z - (ray.m_Direction.z * fVar13 + ray.m_Origin.z);
                    puVar29 = &UNK_?;
                    fVar30 = (float10)func_?();
                    fStack_28 = (float)fVar30;
                    distance = distance - fStack_28;
                  }
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  fVar13 = 0.0;
                  pMVar22 = &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace;
                  point.y = fVar10;
                  point.x = fVar8;
                  point.z = (float)puVar29;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            (&VStack_2,pMVar22,point,(MethodInfo *)0x0);
                  pVVar1 = &VStack_2;
                  puVar31 = &UNK_?;
                  vector.y = fVar13;
                  vector.x = (float)puVar29;
                  vector.z = fVar9;
                  pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                            Matrix4x4_MultiplyVector
                                      (pVVar1,&TypeInfo__MVSweptElipsoidCheck->static_fields->
                                                worldToElipsoidSpace,vector,(MethodInfo *)0x0);
                  pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                      (&VStack_2,*pVVar32,(MethodInfo *)0x0);
                  uVar33 = pVVar32->y;
                  fVar9 = pVVar32->z;
                  VStack_2.z = (float)pVVar1 * distance;
                  vector_00.y = (float)puVar31 * distance;
                  vector_00.x = (float)puVar29 * distance;
                  vector_00.z = VStack_2.z;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                            (&VStack_2,
                             &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace,
                             vector_00,(MethodInfo *)0x0);
                  func_?();
                  pTVar11 = (collisionData->fields).transform;
                  if (pTVar11 != (Transform *)0x0) {
                    pVVar1 = &VStack_2;
                    puVar29 = &UNK_?;
                    position.y = fVar8;
                    position.x = (float)pMVar22;
                    position.z = fVar10;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint(pVVar1,pTVar11,position,(MethodInfo *)0x0);
                    if (((float)((uint)puVar27 & _UNK_?) <
                         (float)((uint)puVar29 & _UNK_?)) ||
                       ((float)((uint)puVar27 & _UNK_?) <
                        (float)((uint)pVVar1 & _UNK_?))) {
                      if (((float)((uint)puVar29 & _UNK_?) <
                           (float)((uint)puVar27 & _UNK_?)) ||
                         ((float)((uint)puVar29 & _UNK_?) <
                          (float)((uint)pVVar1 & _UNK_?))) {
                        fStack_34 = 0.0;
                        register0x00001200 = (double)(float)pVVar1;
                        if (0.0 <= (float)pVVar1) {
                          fVar30 = (float10)func_?();
                        }
                        else {
                          fVar30 = (float10)func_?();
                        }
                        fStack_35 = (float)fVar30;
                      }
                      else {
                        fStack_35 = 0.0;
                        register0x00001200 = (double)(float)puVar29;
                        if (0.0 <= (float)puVar29) {
                          fVar30 = (float10)func_?();
                          fStack_34 = (float)fVar30;
                        }
                        else {
                          fVar30 = (float10)func_?();
                          fStack_34 = (float)fVar30;
                        }
                      }
                      fVar8 = 0.0;
                    }
                    else {
                      fStack_35 = 0.0;
                      fStack_34 = 0.0;
                      register0x00001200 = (double)(float)puVar27;
                      if (0.0 <= (float)puVar27) {
                        fVar30 = (float10)func_?();
                        fVar8 = (float)fVar30;
                      }
                      else {
                        fVar30 = (float10)func_?();
                        fVar8 = (float)fVar30;
                      }
                    }
                    fStack_34 = fStack_34 * _UNK_?;
                    fVar8 = fVar8 * _UNK_?;
                    fStack_35 = fStack_35 * _UNK_?;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pVVar36 = TypeInfo__UnityEngine__Vector3->static_fields;
                    uVar37 = (pVVar36->zeroVector).x;
                    uVar38 = (pVVar36->zeroVector).y;
                    fStack_39 = (pVVar36->zeroVector).z;
                    auStack_40._0_4_ = uVar37;
                    auStack_40._4_4_ = uVar38;
                    if ((fVar8 - (float)uVar37) * (fVar8 - (float)uVar37) +
                        (fStack_34 - (float)uVar38) * (fStack_34 - (float)uVar38) +
                        (fStack_35 - fStack_39) * (fStack_35 - fStack_39) < _UNK_?) {
                      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      puVar27 = &UNK_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_scanRect_cant_be_zero,(MethodInfo *)0x0);
                    }
                    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    VStack_2.x = fVar8;
                    VStack_2.y = fStack_34;
                    VStack_2.z = fStack_35;
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    fStack_39 = 0.0;
                    auStack_40._0_4_ = 0.0;
                    auStack_40._4_4_ = 0.0;
                    index = 0;
                    do {
                      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_2,index,(MethodInfo *)0x0);
                      if (_UNK_? < (float)((uint)fVar10 & _UNK_?))
                      goto code_?;
                      index = index + 1;
                    } while (index < 3);
                    auStack_40._0_4_ = fVar8;
                    auStack_40._4_4_ = fStack_34;
                    fStack_39 = fStack_35;
                    str1 = (String *)func_?();
                    __return_storage_ptr__ = (Vector3 *)0x0;
                    puVar24 = &UNK_?;
                    pSVar25 = StringLiteral_No_scan_axis_found_;
                    message = mscorlib.dll::System::String::String_Concat_3
                                        (StringLiteral_No_scan_axis_found_,str1,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)message,(MethodInfo *)0x0);
code_?:
                    pTVar11 = (collisionData->fields).transform;
                    if (pTVar11 != (Transform *)0x0) {
                      pVVar1 = (Vector3 *)auStack_40;
                      puVar29 = &UNK_?;
                      direction.z = fStack_35;
                      direction.x = fVar8;
                      direction.y = fStack_34;
                      pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_TransformDirection
                                          (pVVar1,pTVar11,direction,(MethodInfo *)0x0);
                      VStack_2.z = (collisionData->fields).point.z;
                      VStack_2.x = (collisionData->fields).point.x;
                      VStack_2.y = (collisionData->fields).point.y;
                      pMVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields;
                      pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                          ((Vector3 *)&stack0xffffffa8,*pVVar32,(MethodInfo *)0x0);
                      uVar41 = pVVar32->x;
                      uVar42 = pVVar32->y;
                      fVar10 = pVVar32->z;
                      (pMVar12->collisionPlane).m_Normal.x = (float)uVar41;
                      (pMVar12->collisionPlane).m_Normal.y = (float)uVar42;
                      (pMVar12->collisionPlane).m_Normal.z = fVar10;
                      (pMVar12->collisionPlane).m_Distance =
                           (float)((uint)((float)uVar41 * VStack_2.x + (float)uVar42 * VStack_2.y +
                                         fVar10 * VStack_2.z) ^
                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                  );
                      uVar43 = (collisionData->fields).point.x;
                      uVar44 = (collisionData->fields).point.y;
                      pTVar11 = (collisionData->fields).transform;
                      fVar10 = (collisionData->fields).point.z;
                      auStack_40._0_4_ = uVar41;
                      auStack_40._4_4_ = uVar43;
                      fStack_39 = (float)uVar44;
                      if (pTVar11 != (Transform *)0x0) {
                        direction_00.z = fStack_35;
                        direction_00.x = fVar8;
                        direction_00.y = fStack_34;
                        pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_TransformDirection
                                            ((Vector3 *)&stack0xffffffa8,pTVar11,direction_00,
                                             (MethodInfo *)0x0);
                        planeOrigin.y = fStack_39;
                        planeOrigin.x = (float)auStack_40._4_4_;
                        planeOrigin.z = fVar10;
                        MVSweptElipsoidCheck_GetRaysProjectedOnPlane
                                  (boundRays,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane,
                                   planeOrigin,*pVVar32,(MethodInfo *)0x0);
                        if ((collisionData->fields).isInsideCollider != 0) {
                          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0)
                          {
                            func_?();
                          }
                          MVSweptElipsoidCheck_MoveAxisAlignedRectBackward
                                    (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,
                                     ray.m_Origin,ray.m_Direction,(MethodInfo *)0x0);
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
                          localNormal.y._0_2_ = (int16_t)__return_storage_ptr__;
                          localNormal.x = (float)str1;
                          localNormal.y._2_2_ = (int16_t)((uint)__return_storage_ptr__ >> 0x10);
                          localNormal.z._0_2_ = SUB42(fVar5,0);
                          localNormal.z._2_2_ = (int16_t)((uint)fVar5 >> 0x10);
                          localHit.y = (float)puVar24;
                          localHit.x = fVar23;
                          localHit.z = (float)pSVar25;
                          localDir.y = (float)puVar29;
                          localDir.x = (float)puVar27;
                          localDir.z = (float)pVVar1;
                          MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
                                    (TypeInfo__MVSweptElipsoidCheck->static_fields->
                                     minMaxCalculateAxisAlignedRect,localNormal,localHit,localDir,
                                     (MethodInfo *)0x0);
                        }
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar45 = MVSweptElipsoidCheck_LayerScan_1
                                           (radius,TypeInfo__MVSweptElipsoidCheck->static_fields->
                                                   minMaxCalculateAxisAlignedRect,vh,distance,
                                            (CollisionState *)&stack0xfffffed8,(MethodInfo *)0x0);
                        if (bVar45 == 0) {
                          return 0;
                        }
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        fVar5 = vh->distance;
                        VStack_2.z = fVar5 * fVar9;
                        vector_01.y = fVar5 * (float)uVar33;
                        vector_01.x = fVar5 * 0.0;
                        vector_01.z = VStack_2.z;
                        UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                  ((Vector3 *)&stack0xffffffa8,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                    elipsoidSpaceToWorld,vector_01,(MethodInfo *)0x0);
                        fVar30 = (float10)func_?();
                        vh->distance = (float)(fVar30 + (float10)fStack_28);
                        if (wo != (ICubeModelCollider *)0x0) {
                          iVar46 = func_?();
                          iVar47 = func_?();
                          vh->woId = iVar46;
                          vh->isCubeHit = 1;
                          vh->collider = (collisionData->fields).collider;
                          func_?();
                          vh->transform = (collisionData->fields).transform;
                          func_?();
                          vh->interactionFlags = iVar47;
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
  pcVar48 = (code *)swi(3);
  bVar45 = (*pcVar48)();
  return bVar45;
}


/* Boolean LayerScan(Vector3, Vector3[], VoxelHit ByRef, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan_1
               (Vector3 radius,Vector3__Array *alignedRect,VoxelHit *vh,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    in_stack_1 = 0x3480;
    in_stack_2 = 0x119c;
    in_stack_3 = 0x9f9;
    in_stack_4 = 0x1025;
    func_?();
    cRam_? = '\x01';
  }
  fStack_5 = 0.0;
  iStack_6 = 0;
  fStack_7 = 0.0;
  iStack_8 = 0;
  IStack_9.x = 0;
  IStack_9.y = 0;
  IStack_9.z = 0;
  IStack_10.x = 0;
  IStack_10.y = 0;
  IStack_10.z = 0;
  uStack_11 = 0.0;
  iStack_12 = 0;
  fStack_13 = 0.0;
  iStack_14 = 0;
  vh->distance = INFINITY;
  if (alignedRect != (Vector3__Array *)0x0) {
    if (alignedRect->max_length == 0) goto code_?;
    uVar15._0_4_ = (Il2CppMethodPointer)alignedRect->vector[0].x;
    uVar15._4_4_ = (Il2CppMethodPointer)alignedRect->vector[0].y;
    bVar16 = false;
    auStack_17._8_4_ = alignedRect->vector[0].z;
    iVar18 = 0;
    auStack_17._12_4_ = alignedRect->vector[0].x;
    pIStack_19 = (Il2CppClass *)alignedRect->vector[0].y;
    bVar20 = false;
    auStack_17._0_8_ = uVar15;
    pMStack_21 = (MethodInfo *)auStack_17._8_4_;
    pIStack_22 = (Il2CppMethodPointer)uVar15;
    pIStack_23 = uVar15._4_4_;
    pMStack_24 = (MethodInfo *)auStack_17._8_4_;
    pMStack_25 = (MethodInfo *)auStack_17._8_4_;
    do {
      iVar26._2_2_ = (undefined2)iVar18;
      uVar27 = (undefined2)((uint)iVar18 >> 0x10);
      if ((iVar18 == collisionState->scanAxis) || (bVar16)) {
        if ((bool)(bVar16 & iVar18 != collisionState->scanAxis)) {
          in_stack_3 = 1;
          in_stack_4 = 0;
          in_stack_28 = 0xaed;
          in_stack_29 = 0x1025;
          in_stack_30 = (Vector3 *)func_?();
          in_stack_31 = &UNK_?;
          pMStack_32 = (MethodInfo *)
                       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 (in_stack_30,(int32_t)in_stack_33,in_stack_34);
          in_stack_34 = (MethodInfo *)(auStack_17 + 0xc);
          in_stack_33 = &UNK_?;
          in_stack_35 = iVar18;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    ((Vector3 *)in_stack_34,iVar18,(float)pMStack_32,(MethodInfo *)0x0);
          in_stack_1 = iVar26._2_2_;
          in_stack_2 = uVar27;
          bVar16 = bVar20;
        }
      }
      else {
        in_stack_3 = 1;
        in_stack_4 = 0;
        in_stack_28 = 0xaa8;
        in_stack_29 = 0x1025;
        in_stack_30 = (Vector3 *)func_?();
        in_stack_31 = &UNK_?;
        fVar36 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (in_stack_30,(int32_t)in_stack_33,in_stack_34);
        in_stack_34 = (MethodInfo *)auStack_17;
        in_stack_33 = &UNK_?;
        in_stack_35 = iVar18;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                  ((Vector3 *)in_stack_34,iVar18,fVar36,(MethodInfo *)0x0);
        bVar20 = true;
        in_stack_1 = iVar26._2_2_;
        in_stack_2 = uVar27;
        bVar16 = bVar20;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < 3);
    fVar36 = (float)auStack_17._8_4_ - (float)pMStack_24;
    fVar37 = (float)auStack_17._0_4_ - (float)pIStack_22;
    fVar38 = (float)auStack_17._4_4_ - (float)pIStack_23;
    __return_storage_ptr__ = (Vector3 *)&stack0xffffff54;
    puVar39 = &UNK_?;
    value.y = fVar38;
    value.x = fVar37;
    value.z = fVar36;
    pVVar40 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (__return_storage_ptr__,value,(MethodInfo *)0x0);
    uVar41 = pVVar40->x;
    uVar42 = pVVar40->y;
    pMVar43 = (MethodInfo *)pVVar40->z;
    fVar44 = (float)pMStack_21 - (float)pMStack_24;
    uVar45 = CONCAT44((float)pIStack_19 - (float)pIStack_23,
                      (float)auStack_17._12_4_ - (float)pIStack_22);
    pVVar40 = (Vector3 *)&stack0xffffff54;
    uVar27 = 0xbbe;
    uVar46 = 0x1025;
    value_00.z = fVar44;
    value_00.x = (float)auStack_17._12_4_ - (float)pIStack_22;
    value_00.y = (float)pIStack_19 - (float)pIStack_23;
    pMStack_24 = (MethodInfo *)fVar44;
    pVVar47 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (pVVar40,value_00,(MethodInfo *)0x0);
    uVar48 = pVVar47->x;
    uVar49 = pVVar47->y;
    method_00 = (MethodInfo *)pVVar47->z;
    uVar50 = (undefined2)uVar41;
    uVar51 = (undefined2)((uint)uVar41 >> 0x10);
    uVar52 = (undefined2)uVar42;
    uVar53 = (undefined2)((uint)uVar42 >> 0x10);
    pfVar54 = afStack_55;
    puVar56 = &UNK_?;
    localPos_01.y._0_2_ = uVar50;
    localPos_01.x = (float)pfVar54;
    localPos_01.y._2_2_ = uVar51;
    localPos_01.z._0_2_ = uVar52;
    localPos_01.z._2_2_ = uVar53;
    iVar26._2_2_ = uVar53;
    pIStack_23 = (Il2CppMethodPointer)uVar48;
    pMStack_24 = (MethodInfo *)uVar49;
    IVar57 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_01,pMVar43);
    fStack_5 = *IVar57._0_4_;
    iStack_6 = *(int16_t *)(IVar57._0_4_ + 1);
    uVar58 = 0;
    uVar59 = 0;
    uVar60 = SUB42(method_00,0);
    uVar61 = (undefined2)((uint)method_00 >> 0x10);
    pfVar62 = afStack_55;
    uVar63 = 0xc1a;
    uVar64 = 0x1025;
    localPos_02.y = (float)pIStack_23;
    localPos_02.x = (float)pfVar62;
    localPos_02.z = (float)pMStack_24;
    pIVar65 = pIStack_23;
    pMVar43 = pMStack_24;
    IVar57 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_02,method_00);
    fStack_7 = *IVar57._0_4_;
    iStack_8 = *(int16_t *)(IVar57._0_4_ + 1);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      in_stack_1 = 0xc3d;
      in_stack_2 = 0x1025;
      func_?();
    }
    pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
    if (pCVar66 != (CellTraverser *)0x0) {
      localOrigin.y = (float)uVar15._4_4_;
      localOrigin.x = (float)(Il2CppMethodPointer)uVar15;
      iVar18 = 0x31;
      uVar67 = 0;
      uVar68 = 0;
      pCVar69 = collisionState;
      pfVar70 = (float *)&stack0xfffffe80;
      while( true ) {
        if (iVar18 == 0) break;
        iVar18 = iVar18 + -1;
        *pfVar70 = (pCVar69->localOrigin).x;
        pCVar69 = (CollisionState *)&(pCVar69->localOrigin).y;
        pfVar70 = pfVar70 + 1;
      }
      localOrigin.z = (float)pMStack_25;
      collisionState_00.localToElipsoidSpace.m10 = (float)in_stack_71;
      auVar72 = in_stack_73._0_12_;
      auVar74 = in_stack_73._12_12_;
      auVar75 = in_stack_73._24_12_;
      auVar76 = in_stack_73._36_12_;
      auVar77 = in_stack_73._48_12_;
      auVar78 = in_stack_73._60_12_;
      collisionState_00.localOrigin.x = (float)auVar72._0_4_;
      collisionState_00.localOrigin.y = (float)auVar72._4_4_;
      collisionState_00.localOrigin.z = (float)auVar72._8_4_;
      collisionState_00.localHitPoint.x = (float)auVar74._0_4_;
      collisionState_00.localHitPoint.y = (float)auVar74._4_4_;
      collisionState_00.localHitPoint.z = (float)auVar74._8_4_;
      collisionState_00.localNormal.x = (float)auVar75._0_4_;
      collisionState_00.localNormal.y = (float)auVar75._4_4_;
      collisionState_00.localNormal.z = (float)auVar75._8_4_;
      collisionState_00.localDirection.x = (float)auVar76._0_4_;
      collisionState_00.localDirection.y = (float)auVar76._4_4_;
      collisionState_00.localDirection.z = (float)auVar76._8_4_;
      collisionState_00.origin.x = (float)auVar77._0_4_;
      collisionState_00.origin.y = (float)auVar77._4_4_;
      collisionState_00.origin.z = (float)auVar77._8_4_;
      collisionState_00.direction.x = (float)auVar78._0_4_;
      collisionState_00.direction.y = (float)auVar78._4_4_;
      collisionState_00.direction.z = (float)auVar78._8_4_;
      collisionState_00.cmb = (ICubeModelCollider *)in_stack_73._72_4_;
      collisionState_00.localToElipsoidSpace.m00 = (float)in_stack_73._76_4_;
      collisionState_00.localToElipsoidSpace.m20 = (float)in_stack_31;
      collisionState_00.localToElipsoidSpace.m30 = (float)in_stack_30;
      collisionState_00.localToElipsoidSpace.m01 = (float)in_stack_33;
      collisionState_00.localToElipsoidSpace.m11 = (float)in_stack_34;
      collisionState_00.localToElipsoidSpace.m21 = (float)in_stack_35;
      collisionState_00.localToElipsoidSpace.m31 = (float)puVar39;
      collisionState_00.localToElipsoidSpace.m02 = (float)__return_storage_ptr__;
      collisionState_00.localToElipsoidSpace.m12 = fVar37;
      collisionState_00.localToElipsoidSpace.m22 = fVar38;
      collisionState_00.localToElipsoidSpace.m32 = fVar36;
      collisionState_00.localToElipsoidSpace.m03._0_2_ = uVar27;
      collisionState_00.localToElipsoidSpace.m03._2_2_ = uVar46;
      collisionState_00.localToElipsoidSpace.m13 = (float)pVVar40;
      collisionState_00.localToElipsoidSpace.m23 = (float)(int)uVar45;
      collisionState_00.localToElipsoidSpace.m33 = (float)(int)((ulonglong)uVar45 >> 0x20);
      collisionState_00.scanAxis = (int32_t)fVar44;
      collisionState_00.minBounds._0_4_ = puVar56;
      collisionState_00._148_4_ = pfVar54;
      collisionState_00.maxBounds.y = uVar50;
      collisionState_00.maxBounds.z = uVar51;
      collisionState_00.firstHitScanAxis._0_2_ = uVar52;
      collisionState_00.firstHitScanAxis._2_2_ = iVar26._2_2_;
      collisionState_00._160_2_ = uVar63;
      collisionState_00._162_2_ = uVar64;
      collisionState_00.scaledMaxRadius._0_2_ = (short)pfVar62;
      collisionState_00.scaledMaxRadius._2_2_ = (short)((uint)pfVar62 >> 0x10);
      collisionState_00.elipsoidSpaceOrigin.x = (float)pIVar65;
      collisionState_00.elipsoidSpaceOrigin.y = (float)pMVar43;
      collisionState_00.elipsoidSpaceOrigin.z._0_2_ = uVar60;
      collisionState_00.elipsoidSpaceOrigin.z._2_2_ = uVar61;
      collisionState_00.elipsoidSpaceDirection.x._0_2_ = uVar58;
      collisionState_00.elipsoidSpaceDirection.x._2_2_ = uVar59;
      collisionState_00.elipsoidSpaceDirection.y._0_2_ = in_stack_28;
      collisionState_00.elipsoidSpaceDirection.y._2_2_ = in_stack_29;
      collisionState_00.elipsoidSpaceDirection.z._0_2_ = in_stack_3;
      collisionState_00.elipsoidSpaceDirection.z._2_2_ = in_stack_4;
      collisionState_00.elipsoidSpaceDistance._0_2_ = in_stack_1;
      collisionState_00.elipsoidSpaceDistance._2_2_ = in_stack_2;
      CellTraverser::CellTraverser_Init
                (pCVar66,localOrigin,collisionState_00,(MethodInfo *)CONCAT22(uVar68,uVar67));
      uVar15 = auStack_17._0_8_;
      alignedRect._0_2_ = (undefined2)auStack_17._0_8_;
      alignedRect._2_1_ = SUB81(auStack_17._0_8_,2);
      alignedRect._3_1_ = SUB81(auStack_17._0_8_,3);
      vh = SUB84(auStack_17._0_8_,4);
      localPos.y._0_2_ = alignedRect._0_2_;
      localPos.x = (float)afStack_55;
      localPos.y._2_1_ = alignedRect._2_1_;
      localPos.y._3_1_ = alignedRect._3_1_;
      localPos.z = (float)vh;
      IVar57 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos,(MethodInfo *)auStack_17._8_4_);
      IStack_9._0_4_ = *IVar57._0_4_;
      IStack_9.z = *(int16_t *)(IVar57._0_4_ + 1);
      localPos_00.y = (float)auStack_17._12_4_;
      localPos_00.x = (float)afStack_55;
      localPos_00.z = (float)pIStack_19;
      IVar57 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos_00,pMStack_21);
      IStack_10._0_4_ = *IVar57._0_4_;
      IStack_10.z = (int16_t)IVar57._0_4_[1];
      iVar26 = collisionState->scanAxis;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar79 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&IStack_9,iVar26,(MethodInfo *)0x0);
      iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->minBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      iVar81 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->maxBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      if ((iVar80 <= iVar79) && (iVar80 = iVar79, iVar81 < iVar79)) {
        iVar80 = iVar81;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (&IStack_9,iVar26,iVar80,(MethodInfo *)0x0);
      iVar26 = collisionState->scanAxis;
      iVar79 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&IStack_9,iVar26,(MethodInfo *)0x0);
      iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->minBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      iVar81 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->maxBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      if ((iVar80 <= iVar79) && (iVar80 = iVar79, iVar81 < iVar79)) {
        iVar80 = iVar81;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (&IStack_10,iVar26,iVar80,(MethodInfo *)0x0);
      fStack_82 = 0.0;
      fStack_83 = 0.0;
      pMStack_32 = (MethodInfo *)0x0;
      pMVar43 = (MethodInfo *)0x0;
      pMStack_25 = (MethodInfo *)0x0;
      do {
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                           ((IntVector *)&fStack_5,(int32_t)pMVar43,(MethodInfo *)0x0);
        if (iVar80 != 0) {
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_9,(int32_t)pMVar43,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar66 == (CellTraverser *)0x0) goto code_?;
          fStack_13 = *(float *)&(pCVar66->fields).voxelPos;
          iStack_14 = (pCVar66->fields).voxelPos.z;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    ((IntVector *)&fStack_13,(int32_t)pMVar43,(MethodInfo *)0x0);
          fStack_82 = (float)func_?();
          pMStack_32 = pMVar43;
        }
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this = (IntVector *)&fStack_7;
        iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                           (this,(int32_t)pMVar43,(MethodInfo *)0x0);
        if (iVar80 != 0) {
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_10,(int32_t)pMVar43,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar66 == (CellTraverser *)0x0) goto code_?;
          fStack_13 = *(float *)&(pCVar66->fields).voxelPos;
          iStack_14 = (pCVar66->fields).voxelPos.z;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    ((IntVector *)&fStack_13,(int32_t)pMVar43,(MethodInfo *)0x0);
          fStack_83 = (float)func_?();
          pMStack_25 = pMVar43;
        }
        pMVar43 = (MethodInfo *)((int)&pMVar43->methodPointer + 1);
      } while ((int)pMVar43 < 3);
      fStack_82 = (float)((int)fStack_82 + 1);
      fStack_83 = (float)((int)fStack_83 + 1);
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
      if (pCVar66 != (CellTraverser *)0x0) {
        iVar26._0_2_ = (pCVar66->fields).voxelPos.x;
        iVar26._2_2_ = (pCVar66->fields).voxelPos.y;
        pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
        if (pCVar66 != (CellTraverser *)0x0) {
          uVar84._0_2_ = (pCVar66->fields).voxelPos.x;
          uVar84._2_2_ = (pCVar66->fields).voxelPos.y;
          pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar66 != (CellTraverser *)0x0) {
            uStack_85 = CONCAT26(uVar53,(pCVar66->fields).voxelPos);
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      ((IntVector *)&uStack_11,iVar26,uVar84 >> 0x10,uStack_86,(MethodInfo *)0x0);
            pIVar87 = &collisionState->maxBounds;
            do {
              do {
                iVar88 = collisionState->scanAxis;
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   ((IntVector *)&uStack_11,iVar88,(MethodInfo *)0x0);
                uVar46 = (undefined2)((uint)collisionState->scanAxis >> 0x10);
                uVar27 = 0x1025;
                iVar79 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (pIVar87,collisionState->scanAxis,(MethodInfo *)0x0);
                if (iVar79 < iVar80) goto code_?;
                iVar88 = collisionState->scanAxis;
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   ((IntVector *)&uStack_11,iVar88,(MethodInfo *)0x0);
                uVar50 = 0;
                pIVar87 = &collisionState->minBounds;
                iVar79 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (pIVar87,collisionState->scanAxis,(MethodInfo *)0x0);
                if (iVar80 < iVar79) goto code_?;
                uVar52 = SUB42(afStack_55,0);
                uVar53 = (undefined2)((uint)afStack_55 >> 0x10);
                uVar51 = SUB82(uVar15,6);
                if (-1 < (int)fStack_82) {
                  _Stack_68.rgctx_data = (Il2CppRGCTXData *)((int)fStack_82 + 1);
                  _Stack_6c.genericMethod = (Il2CppGenericMethod *)((int)fStack_83 + 1);
                  do {
                    uVar63 = (undefined2)((uint)this >> 0x10);
                    _Var16 = _Stack_6c;
                    if (-1 < (int)fStack_83) {
                      do {
                        _Stack_64 = _Var16;
                        iVar80 = iStack_12;
                        fVar36 = uStack_11;
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        uVar27 = (undefined2)((uint)collisionState >> 0x10);
                        IVar57.z = iVar80;
                        IVar57._0_4_ = fVar36;
                        radius_00.y = (float)&UNK_?;
                        radius_00.x = radius.x;
                        radius_00.z._0_2_ = uVar52;
                        radius_00.z._2_2_ = uVar53;
                        uVar63 = uVar51;
                        MVSweptElipsoidCheck_HandleCube
                                  (vh,IVar57,radius_00,3.255041e-29,collisionState,(MethodInfo *)0x0
                                  );
                        iVar79 = iStack_12;
                        fVar36 = uStack_11;
                        iVar80 = iStack_8;
                        fStack_89 = fStack_7;
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          uVar50 = 0x1025;
                          func_?();
                        }
                        i1.z = SUB42(fVar36,0);
                        i1._0_4_ = &stack0xffffff58;
                        i2.y = uVar63;
                        i2.x = iVar79;
                        i2.z = SUB42(fStack_89,0);
                        IVar57 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                 IntVector_op_Addition
                                           (i1,i2,(MethodInfo *)CONCAT22(iVar26._2_2_,iVar80));
                        uVar63 = (undefined2)((uint)this >> 0x10);
                        _Stack_64.genericMethod =
                             (Il2CppGenericMethod *)
                             ((int)&_Stack_64.genericMethod[-1].context.method_inst + 3);
                        uStack_11 = *IVar57._0_4_;
                        iStack_12 = *(int16_t *)(IVar57._0_4_ + 1);
                        _Var16.genericMethod = _Stack_64.genericMethod;
                      } while (_Stack_64.genericMethod != (Il2CppGenericMethod *)0x0);
                    }
                    iVar79 = iStack_12;
                    fVar36 = uStack_11;
                    iVar80 = iStack_8;
                    fStack_89 = fStack_7;
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      uVar27 = 0x1025;
                      func_?();
                    }
                    uVar90 = (ushort)((uint)pIVar87 >> 0x10);
                    iV.z = SUB42(fStack_89,0);
                    iV._0_4_ = _Stack_6c.genericMethod;
                    IVar57 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                                       ((int32_t)&pIStack_19,iV,
                                        (MethodInfo *)CONCAT22(uVar27,iVar80));
                    puVar91 = auStack_17 + 4;
                    i1_00.z = SUB42(fVar36,0);
                    i1_00._0_4_ = puVar91;
                    i2_00.y = uVar46;
                    i2_00.x = iVar79;
                    i2_00.z = (int16_t)*IVar57._0_4_;
                    IVar57 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                                       (i1_00,i2_00,
                                        (MethodInfo *)
                                        CONCAT22(uVar63,*(undefined2 *)(IVar57._0_4_ + 1)));
                    pfVar54 = IVar57._0_4_;
                    uStack_11 = *pfVar54;
                    iStack_12 = *(int16_t *)(pfVar54 + 1);
                    this = (IntVector *)&UNK_?;
                    i1_01.z = SUB42(*pfVar54,0);
                    i1_01._0_4_ = &stack0xffffff60;
                    i2_01.y = uVar90;
                    i2_01.x = *(undefined2 *)(pfVar54 + 1);
                    i2_01.z = SUB42(fStack_5,0);
                    IVar57 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                       (i1_01,i2_01,(MethodInfo *)CONCAT22(uVar50,iStack_6));
                    uVar27 = (undefined2)((uint)puVar91 >> 0x10);
                    pIVar87 = (IntVector *)((uint)uVar90 << 0x10);
                    _Stack_68.methodMetadataHandle = _Stack_68.methodMetadataHandle + -1;
                    uStack_11 = *IVar57._0_4_;
                    iStack_12 = *(int16_t *)(IVar57._0_4_ + 1);
                  } while (_Stack_68.rgctx_data != (Il2CppRGCTXData *)0x0);
                }
code_?:
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                CellTraverser::CellTraverser_Step(pCVar66,(MethodInfo *)0x0);
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  this = (IntVector *)&UNK_?;
                  func_?();
                }
                pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                fStack_13 = *(float *)&(pCVar66->fields).stepDir;
                iVar88 = collisionState->scanAxis;
                iStack_14 = (pCVar66->fields).stepDir.z;
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   ((IntVector *)&fStack_13,iVar88,(MethodInfo *)0x0);
                if (iVar80 == 0) {
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                  uVar92 = (pCVar66->fields).voxelPos.x;
                  uStack_11 = (float)CONCAT22(uStack_11._2_2_,uVar92);
                  pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                  uVar93 = (pCVar66->fields).voxelPos.y;
                  uStack_11 = (float)CONCAT22(uVar93,uVar92);
                  pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                  fStack_89 = *(float *)&(pCVar66->fields).voxelPos;
                  iVar18 = 0;
                  iStack_12 = (pCVar66->fields).voxelPos.z;
                  do {
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?();
                    }
                    iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                       ((IntVector *)&fStack_5,iVar18,(MethodInfo *)0x0);
                    if (iVar80 != 0) {
                      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                      if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                      fStack_13 = *(float *)&(pCVar66->fields).stepDir;
                      iStack_14 = (pCVar66->fields).stepDir.z;
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        func_?();
                      }
                      iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                         ((IntVector *)&fStack_13,iVar18,(MethodInfo *)0x0);
                      if (iVar80 == 0) {
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                        if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                        fStack_13 = *(float *)&(pCVar66->fields).stepDir;
                        iStack_14 = (pCVar66->fields).stepDir.z;
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        pMVar43 = pMStack_25;
                        iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                           ((IntVector *)&fStack_13,(int32_t)pMStack_25,
                                            (MethodInfo *)0x0);
                        uVar27 = 0;
                        iVar79 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                           ((IntVector *)&fStack_7,(int32_t)pMVar43,
                                            (MethodInfo *)0x0);
                        if (iVar80 == iVar79) {
                          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          uVar90 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                             ((IntVector *)&uStack_11,(int32_t)pMVar43,
                                              (MethodInfo *)0x0);
                          this = (IntVector *)&UNK_?;
                          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                                    ((IntVector *)&uStack_11,(int32_t)pMVar43,
                                     (int16_t)((uint)uVar90 + (int)fStack_83),(MethodInfo *)0x0);
                        }
                        if (-1 < (int)fStack_82) {
                          iVar18 = (int)fStack_82 + 1;
                          do {
                            iVar80 = iStack_12;
                            fVar36 = uStack_11;
                            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0
                               ) {
                              func_?();
                            }
                            pos_00.z = iVar80;
                            pos_00._0_4_ = fVar36;
                            radius_02.y = (float)&UNK_?;
                            radius_02.x = radius.x;
                            radius_02.z._0_2_ = uVar52;
                            radius_02.z._2_2_ = uVar53;
                            uVar46 = uVar51;
                            MVSweptElipsoidCheck_HandleCube
                                      (vh,pos_00,radius_02,3.255041e-29,(CollisionState *)afStack_55
                                       ,(MethodInfo *)0x0);
                            iVar79 = iStack_12;
                            fVar36 = uStack_11;
                            iVar80 = iStack_6;
                            fStack_89 = fStack_5;
                            if ((TypeInfo__MV__WorldObject__IntVector->_1).
                                cctor_finished_or_no_cctor == 0) {
                              _Stack_68.methodMetadataHandle =
                                   (Il2CppMetadataMethodDefinitionHandle)
                                   TypeInfo__MV__WorldObject__IntVector;
                              _Stack_6c.genericMethod = (Il2CppGenericMethod *)&UNK_?;
                              func_?();
                            }
                            this = (IntVector *)&UNK_?;
                            i1_03.z = SUB42(fVar36,0);
                            i1_03._0_4_ = &pIStack_23;
                            i2_03.y = uVar46;
                            i2_03.x = iVar79;
                            i2_03.z = SUB42(fStack_89,0);
                            IVar57 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                     IntVector_op_Addition
                                               (i1_03,i2_03,(MethodInfo *)CONCAT22(uVar27,iVar80));
                            uStack_11 = *IVar57._0_4_;
                            iStack_12 = *(int16_t *)(IVar57._0_4_ + 1);
                            iVar18 = iVar18 + -1;
                            collisionState = (CollisionState *)afStack_55;
                          } while (iVar18 != 0);
                        }
                        goto code_?;
                      }
                    }
                    iVar18 = iVar18 + 1;
                  } while (iVar18 < 3);
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                  fStack_13 = *(float *)&(pCVar66->fields).stepDir;
                  iStack_14 = (pCVar66->fields).stepDir.z;
                  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pMVar43 = pMStack_32;
                  iVar80 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                     ((IntVector *)&fStack_13,(int32_t)pMStack_32,(MethodInfo *)0x0)
                  ;
                  uVar27 = 0;
                  iVar79 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                     ((IntVector *)&fStack_5,(int32_t)pMVar43,(MethodInfo *)0x0);
                  if (iVar80 == iVar79) {
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?();
                    }
                    uVar90 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                       ((IntVector *)&uStack_11,(int32_t)pMVar43,(MethodInfo *)0x0);
                    this = (IntVector *)&UNK_?;
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                              ((IntVector *)&uStack_11,(int32_t)pMVar43,
                               (int16_t)((uint)uVar90 + (int)fStack_82),(MethodInfo *)0x0);
                  }
                  if (-1 < (int)fStack_83) {
                    iVar18 = (int)fStack_83 + 1;
                    do {
                      iVar80 = iStack_12;
                      fVar36 = uStack_11;
                      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pos.z = iVar80;
                      pos._0_4_ = fVar36;
                      radius_01.y = (float)&UNK_?;
                      radius_01.x = radius.x;
                      radius_01.z._0_2_ = uVar52;
                      radius_01.z._2_2_ = uVar53;
                      uVar46 = uVar51;
                      MVSweptElipsoidCheck_HandleCube
                                (vh,pos,radius_01,3.255041e-29,(CollisionState *)afStack_55,
                                 (MethodInfo *)0x0);
                      iVar79 = iStack_12;
                      fVar36 = uStack_11;
                      iVar80 = iStack_8;
                      fStack_89 = fStack_7;
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        _Stack_68.methodMetadataHandle =
                             (Il2CppMetadataMethodDefinitionHandle)
                             TypeInfo__MV__WorldObject__IntVector;
                        _Stack_6c.genericMethod = (Il2CppGenericMethod *)&UNK_?;
                        func_?();
                      }
                      this = (IntVector *)&UNK_?;
                      i1_02.z = SUB42(fVar36,0);
                      i1_02._0_4_ = &stack0xffffff74;
                      i2_02.y = uVar46;
                      i2_02.x = iVar79;
                      i2_02.z = SUB42(fStack_89,0);
                      IVar57 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                         (i1_02,i2_02,(MethodInfo *)CONCAT22(uVar27,iVar80));
                      uStack_11 = *IVar57._0_4_;
                      iStack_12 = *(int16_t *)(IVar57._0_4_ + 1);
                      iVar18 = iVar18 + -1;
                      collisionState = (CollisionState *)afStack_55;
                    } while (iVar18 != 0);
                  }
                  goto code_?;
                }
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                afStack_55[0] = *(float *)&(pCVar66->fields).voxelPos;
                uStack_11 = (float)CONCAT22(uStack_11._2_2_,SUB42(afStack_55[0],0));
                pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                uVar94 = (pCVar66->fields).voxelPos.y;
                uStack_11 = (float)CONCAT22(uVar94,SUB42(afStack_55[0],0));
                pCVar66 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar66 == (CellTraverser *)0x0) goto code_?;
                pIVar87 = &collisionState->maxBounds;
                fStack_89 = *(float *)&(pCVar66->fields).voxelPos;
                iStack_12 = (pCVar66->fields).voxelPos.z;
              } while (collisionState->firstHitDetected == 0);
              iVar88 = collisionState->scanAxis;
              if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                        ((IntVector *)&uStack_11,iVar88,(MethodInfo *)0x0);
              iVar18 = func_?();
              this = (IntVector *)&UNK_?;
              iVar95 = func_?();
              pIVar87 = &collisionState->maxBounds;
            } while (iVar18 <= iVar95);
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
  pcVar96 = (code *)swi(3);
  bVar97 = (*pcVar96)();
  return bVar97;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
  fVar1 = localBounds.m_Extents.x * _UNK_? * _UNK_?;
  fVar2 = localBounds.m_Extents.y * _UNK_? * _UNK_?;
  if (transform != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xffffffd8,transform,(MethodInfo *)0x0);
    fVar4 = pVVar3->x;
    fVar5 = pVVar3->y;
    position.z = localBounds.m_Center.z;
    position.x = localBounds.m_Center.x;
    position.y = localBounds.m_Center.y;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&stack0xffffffd8,transform,position,(MethodInfo *)0x0);
    uVar6 = pVVar3->x;
    uVar7 = pVVar3->y;
    localBounds.m_Extents.z = pVVar3->z;
    fVar4 = fVar4 * fVar1;
    fVar5 = fVar5 * fVar2;
    localBounds.m_Extents.x = (float)uVar6;
    localBounds.m_Extents.y = (float)uVar7;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffcc,transform,(MethodInfo *)0x0);
    uVar8 = pVVar3->x;
    uVar9 = pVVar3->y;
    fVar1 = localBounds.m_Extents.x - (float)uVar8;
    fVar10 = localBounds.m_Extents.y - (float)uVar9;
    fVar2 = ray.m_Origin.z + (localBounds.m_Extents.z - pVVar3->z);
    localBounds.m_Extents.z = fVar2;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&localBounds.m_Center.z,transform,(MethodInfo *)0x0);
    localBounds.m_Center.z = pQVar11->x;
    localBounds.m_Extents.x = pQVar11->y;
    localBounds.m_Extents.y = pQVar11->z;
    localBounds.m_Extents.z = pQVar11->w;
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray_00.m_Origin.y = ray.m_Origin.y + fVar10;
    ray_00.m_Origin.x = ray.m_Origin.x + fVar1;
    ray_00.m_Origin.z = fVar2;
    ray_00.m_Direction.x = ray.m_Direction.x;
    ray_00.m_Direction.y = ray.m_Direction.y;
    ray_00.m_Direction.z = ray.m_Direction.z;
    radius.y = fVar5;
    radius.x = fVar4;
    radius.z = localBounds.m_Center.z;
    rotation.y = localBounds.m_Extents.x;
    rotation.x = localBounds.m_Center.z;
    rotation.z = localBounds.m_Extents.y;
    rotation.w = localBounds.m_Extents.z;
    pLVar12 = MVSweptElipsoidCheck_MVElipsoidCast_3
                        (ray_00,radius,rotation,distance,all,ignoreWoIds,layerMask,(MethodInfo *)0x0
                        );
    return pLVar12;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pLVar12 = (List_1_VoxelHit_ *)(*pcVar13)();
  return pLVar12;
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
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_5,dir,(MethodInfo *)0x0);
  uVar6._0_4_ = pVVar4->x;
  uVar6._4_4_ = pVVar4->y;
  fVar7 = pVVar4->z;
  fStack_8 = (float)((uint)(startOrigin.y * (float)uVar6._4_4_ +
                            startOrigin.x * (float)(undefined4)uVar6 + startOrigin.z * fVar7) ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  startOrigin.z = 0.0;
  uStack_9 = uVar6;
  if (cRam_? == '\0') {
    fStack_10 = fVar7;
    func_?(&TypeInfo__UnityEngine__Vector3,uVar3,uVar1,uVar2);
    cRam_? = '\x01';
  }
  fStack_10 = (float)((uint)dir.z ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12 = (pVVar11->zeroVector).x;
  uVar13 = (pVVar11->zeroVector).y;
  value.y = (float)uVar12;
  value.x = (float)((uint)dir.x ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  value.z = (float)uVar13;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_5,value,(MethodInfo *)(pVVar11->zeroVector).z);
  pVVar14 = pointsOnProjectPlane;
  uVar3 = pVVar4->x;
  uVar1 = pVVar4->y;
  fVar15 = pVVar4->z;
  uStack_16 = 0;
  if (pointsOnProjectPlane != (Vector3__Array *)0x0) {
    pVVar4 = pointsOnProjectPlane->vector;
    for (; (int)uStack_16 < (int)pVVar14->max_length; uStack_16 = uStack_16 + 1) {
      if (pVVar14->max_length <= uStack_16) goto code_?;
      uStack_9._0_4_ = pVVar4->x;
      uStack_9._4_4_ = pVVar4->y;
      fStack_10 = pVVar4->z;
      if (_UNK_? <
          (float)(uVar6 >> 0x20) * (float)uStack_9._4_4_ +
          (float)uVar6 * (float)(undefined4)uStack_9 + fVar7 * fStack_10 + fStack_8) {
        uVar17 = pVVar4->x;
        uVar18 = pVVar4->y;
        ray.m_Origin.y = (float)uVar18;
        ray.m_Origin.x = (float)uVar17;
        uVar6 = ZEXT48(&pointsOnProjectPlane);
        pointsOnProjectPlane = (Vector3__Array *)0x0;
        ray.m_Origin.z = fStack_10;
        ray.m_Direction.x = (float)uVar3;
        ray.m_Direction.y = (float)uVar1;
        ray.m_Direction.z = fVar15;
        bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                           ((Plane *)&stack0xffffffcc,ray,(float *)&pointsOnProjectPlane,
                            (MethodInfo *)0x0);
        if ((bVar19 != 0) && (startOrigin.z < (float)pointsOnProjectPlane)) {
          startOrigin.z = (float)pointsOnProjectPlane;
        }
      }
      pVVar4 = pVVar4 + 1;
    }
    if (0.0 < startOrigin.z) {
      pointsOnProjectPlane =
           (Vector3__Array *)
           ((float)((uint)dir.x ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
           startOrigin.z);
      fVar7 = (float)((uint)dir.y ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
               startOrigin.z;
      fVar15 = (float)((uint)dir.z ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
               startOrigin.z;
      pVVar4 = pVVar14->vector;
      for (uVar20 = 0; (int)uVar20 < (int)pVVar14->max_length; uVar20 = uVar20 + 1) {
        if (pVVar14->max_length <= uVar20) goto code_?;
        uVar21 = pVVar4->x;
        uVar22 = pVVar4->y;
        startOrigin.z = pVVar4->z + fVar15;
        pVVar4->x = (float)uVar21 + (float)pointsOnProjectPlane;
        pVVar4->y = (float)uVar22 + fVar7;
        pVVar4->z = startOrigin.z;
        pVVar4 = pVVar4 + 1;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  value.x = (float)((uint)localNormal.x ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  value.z = (float)((uint)localNormal.z ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_3,value,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  (pMVar1->collisionPlane0).m_Normal.x = (float)uVar4;
  (pMVar1->collisionPlane0).m_Normal.y = (float)uVar5;
  (pMVar1->collisionPlane0).m_Normal.z = fVar6;
  uVar7 = __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
  (pMVar1->collisionPlane0).m_Distance =
       (float)((uint)((float)uVar4 * localHit.x + (float)uVar5 * localHit.y + fVar6 * localHit.z) ^
              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  localNormal.z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
    uVar7 = __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
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
    uVar10 = _UNK_?;
    for (; (int)uVar7 < (int)axisAlignedRect->max_length; uVar7 = uVar7 + 1) {
      if (axisAlignedRect->max_length <= uVar7) goto code_?;
      fVar11 = pVVar2->z;
      fVar12 = pVVar2->x;
      fVar13 = pVVar2->y;
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
      localHit.z = (float)((uint)(fVar13 * VStack_3.y + fVar12 * VStack_3.x + fVar11 * VStack_3.z)
                          ^ __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                          ) - (pMVar1->collisionPlane0).m_Distance;
      fStack_16 = VStack_3.z;
      if (cRam_? == '\0') {
        VStack_3.x = 3.2571493e-29;
        VStack_3.y = 2.465175e-28;
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
          (fVar12 = localHit.z / fStack_15, 0.0 < fVar12)) && (localNormal.z < fVar12)) {
        localNormal.z = fVar12;
      }
      pVVar2 = pVVar2 + 1;
    }
    if (localNormal.z != 0.0) {
      fVar6 = (float)((uint)localNormal.z ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      pVVar2 = axisAlignedRect->vector;
      for (uVar7 = 0; (int)uVar7 < (int)axisAlignedRect->max_length; uVar7 = uVar7 + 1) {
        if (axisAlignedRect->max_length <= uVar7) goto code_?;
        uVar17 = pVVar2->x;
        uVar18 = pVVar2->y;
        pVVar2->x = (float)uVar17 + localDir.x * fVar6;
        pVVar2->y = (float)uVar18 + localDir.y * fVar6;
        pVVar2->z = pVVar2->z + localDir.z * fVar6;
        pVVar2 = pVVar2 + 1;
      }
    }
    return;
  }
code_?:
  VStack_3.y = (float)&UNK_?;
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
      if ((chunk == (ICubeModelCollider__Class *)0x0) ||
         ((pBVar23 = TypeInfo__UnityEngine__BoxCollider, wo = wo_00,
          (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment <=
          (((BoxCollider__Class *)(chunk->_0).image)->_1).naturalAligment &&
          ((((BoxCollider__Class *)(chunk->_0).image)->_1).typeHierarchy
           [(TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment - 1] ==
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

