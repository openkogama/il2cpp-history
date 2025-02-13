
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fStack_4 = VStack_2.x;
  fStack_5 = VStack_2.y;
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar6 = &(this->fields)._version;
    *piVar6 = *piVar6 + 1;
    pVVar7 = (this->fields)._items;
    if (pVVar7 != (Vector2__Array *)0x0) {
      uVar8 = (this->fields)._size;
      if (uVar8 < pVVar7->max_length) {
        (this->fields)._size = uVar8 + 1;
        if (pVVar7->max_length <= uVar8) goto code_?;
        pVVar7->vector[uVar8].x = VStack_2.x;
        pVVar7->vector[uVar8].y = VStack_2.y;
      }
      else {
        item.y = VStack_2.y;
        item.x = VStack_2.x;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(this,item,pMVar3->klass->rgctx_data[0xe].method);
      }
      pMVar3 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      piVar6 = &(this->fields)._version;
      *piVar6 = *piVar6 + 1;
      pVVar7 = (this->fields)._items;
      fStack_4 = VStack_2.x;
      fStack_5 = VStack_1.y;
      if (pVVar7 != (Vector2__Array *)0x0) {
        uVar8 = (this->fields)._size;
        if (uVar8 < pVVar7->max_length) {
          (this->fields)._size = uVar8 + 1;
          if (pVVar7->max_length <= uVar8) goto code_?;
          pVVar7->vector[uVar8].x = VStack_2.x;
          pVVar7->vector[uVar8].y = VStack_1.y;
        }
        else {
          item_00.y = VStack_1.y;
          item_00.x = VStack_2.x;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (this,item_00,pMVar3->klass->rgctx_data[0xe].method);
        }
        pMVar3 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar6 = &(this->fields)._version;
        *piVar6 = *piVar6 + 1;
        pVVar7 = (this->fields)._items;
        fStack_4 = VStack_1.x;
        fStack_5 = VStack_1.y;
        if (pVVar7 != (Vector2__Array *)0x0) {
          uVar8 = (this->fields)._size;
          if (uVar8 < pVVar7->max_length) {
            (this->fields)._size = uVar8 + 1;
            if (pVVar7->max_length <= uVar8) goto code_?;
            pVVar7->vector[uVar8].x = VStack_1.x;
            pVVar7->vector[uVar8].y = VStack_1.y;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (this,VStack_1,pMVar3->klass->rgctx_data[0xe].method);
          }
          pMVar3 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar6 = &(this->fields)._version;
          *piVar6 = *piVar6 + 1;
          pVVar7 = (this->fields)._items;
          fStack_4 = VStack_1.x;
          fStack_5 = VStack_2.y;
          if (pVVar7 != (Vector2__Array *)0x0) {
            uVar8 = (this->fields)._size;
            if (uVar8 < pVVar7->max_length) {
              (this->fields)._size = uVar8 + 1;
              if (pVVar7->max_length <= uVar8) goto code_?;
              pVVar7->vector[uVar8].x = VStack_1.x;
              pVVar7->vector[uVar8].y = VStack_2.y;
            }
            else {
              item_01.y = VStack_2.y;
              item_01.x = VStack_1.x;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        (this,item_01,pMVar3->klass->rgctx_data[0xe].method);
            }
            this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)func_?();
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00
                       ,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
                      );
            index_00 = 0;
            while( true ) {
              fVar9 = 0.0;
              fVar10 = 0.0;
              VStack_11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                          List_1_UnityEngine_Vector2__get_Item
                                    (this,index_00,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                    );
              MathFunctions::MathFunctions_Vector2ToVector3
                        (&VStack_11,(Vector3 *)&stack0xffffffc8,ignoreAxis,localIgnoreAxisValue,
                         (MethodInfo *)0x0);
              if (t == (Transform *)0x0) break;
              position.y = fVar10;
              position.x = fVar9;
              position.z = 0.0;
              pPVar12 = (PlaneIdHelper_PlaneQuadrantInfo *)
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                                  (&VStack_13,t,position,(MethodInfo *)0x0);
              pMVar3 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              ;
              iVar14 = pPVar12->Quadrant;
              iVar15 = pPVar12->FirstAxisSign;
              fStack_16 = (float)pPVar12->SecondAxisSign;
              item_02 = *pPVar12;
              if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
              piVar6 = &(this_00->fields)._version;
              *piVar6 = *piVar6 + 1;
              pPVar17 = (this_00->fields)._items;
              if (pPVar17 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) break;
              uVar8 = (this_00->fields)._size;
              if (uVar8 < pPVar17->max_length) {
                (this_00->fields)._size = uVar8 + 1;
                if (pPVar17->max_length <= uVar8) goto code_?;
                pPVar17->vector[uVar8].Quadrant = iVar14;
                pPVar17->vector[uVar8].FirstAxisSign = iVar15;
                pPVar17->vector[uVar8].SecondAxisSign = (int32_t)fStack_16;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                          (this_00,item_02,pMVar3->klass->rgctx_data[0xe].method);
              }
              index_00 = index_00 + 1;
              if (3 < index_00) {
                uVar8 = 0;
                do {
                  pVVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffff88,
                                       (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                       this_00,uVar8 & 3,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  start = *pVVar18;
                  pVVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffff7c,
                                       (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                       this_00,uVar8 & 3,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  uVar19 = pVVar18->alias;
                  fVar9 = (float)pVVar18->path;
                  pVVar20 = pVVar18->asset;
                  index = uVar8 + 1 & 0x80000003;
                  if ((int)index < 0) {
                    index = (index - 1 | 0xfffffffc) + 1;
                  }
                  puStack_21 = (undefined *)uVar19;
                  pVVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffff70,
                                       (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                       this_00,index,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  uVar22 = pVVar18->alias;
                  uVar23 = pVVar18->path;
                  fVar10 = (float)uVar22 + (float)puStack_21;
                  fStack_5 = (float)uVar23 + fVar9;
                  fStack_16 = (float)pVVar18->asset + (float)pVVar20;
                  pVVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::VisualTreeAsset+UsingEntry]::
                            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                      ((VisualTreeAsset_UsingEntry *)&stack0xffffff64,
                                       (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                       this_00,uVar8 & 3,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                      );
                  uStack_24._0_4_ = pVVar18->alias;
                  uStack_24._4_4_ = pVVar18->path;
                  pVStack_25 = pVVar18->asset;
                  VStack_13.x = fVar10 - (float)(undefined4)uStack_24;
                  VStack_13.y = fStack_5 - (float)uStack_24._4_4_;
                  VStack_13.z = fStack_16 - (float)pVStack_25;
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  end.y = VStack_13.y;
                  end.x = VStack_13.x;
                  end.z = VStack_13.z;
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_2
                            ((Vector3)start,end,(MethodInfo *)0x0);
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
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
                      ((Vector3 *)&puStack_7,value_01,(MethodInfo *)0x0);
  uVar8._0_4_ = pVVar1->x;
  uVar8._4_4_ = pVVar1->y;
  fVar9 = pVVar1->z;
  fVar10 = fVar3 * fVar9 - fVar4 * (float)uVar8._4_4_;
  fVar4 = fVar4 * (float)(undefined4)uVar8 - fVar2 * fVar9;
  value.y = fVar4;
  value.x = fVar10;
  value.z = fVar2 * (float)uVar8._4_4_ - fVar3 * (float)(undefined4)uVar8;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&puStack_7,value,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  uVar11 = pVVar1->x;
  uVar12 = pVVar1->y;
  fVar13 = (float)uVar8;
  fVar14 = (float)((ulonglong)uVar8 >> 0x20);
  fVar3 = pVVar1->z;
  pVVar15 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
  if (pVVar15 != (Vector3__Array *)0x0) {
    if (pVVar15->max_length != 0) {
      pVVar15->vector[0].x = fVar13 + (float)uVar11;
      pVVar15->vector[0].y = fVar14 + (float)uVar12;
      pVVar15->vector[0].z = fVar9 + fVar3;
      uVar16 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      pVVar15 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
      if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
      if (1 < pVVar15->max_length) {
        pVVar15->vector[1].x = fVar13 - (float)uVar11;
        pVVar15->vector[1].y = fVar14 - (float)uVar12;
        pVVar15->vector[1].z = fVar9 - fVar2;
        pVVar15 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
        if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
        if (2 < pVVar15->max_length) {
          pVVar15->vector[2].x = (float)uVar11 + (float)((uint)fVar13 ^ uVar16);
          pVVar15->vector[2].y = (float)uVar12 + (float)((uint)fVar14 ^ uVar16);
          pVVar15->vector[2].z = fVar2 + (float)((uint)fVar9 ^ uVar16);
          pVVar15 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
          if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
          if (3 < pVVar15->max_length) {
            uVar17 = 0;
            iVar18 = 0;
            pVVar15->vector[3].x = (float)((uint)fVar13 ^ uVar16) - (float)uVar11;
            pVVar15->vector[3].y = (float)((uint)fVar14 ^ uVar16) - (float)uVar12;
            pVVar15->vector[3].z = (float)((uint)fVar9 ^ uVar16) - fVar2;
            cmb = (ICubeModelCollider *)0x0;
            while( true ) {
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar15 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
              if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
              if ((int)pVVar15->max_length <= (int)uVar17) {
                return;
              }
              if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pRVar19 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
              if ((pRVar19 == (Ray__Array *)0x0) ||
                 (pVVar15 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays,
                 pVVar15 == (Vector3__Array *)0x0)) goto code_?;
              if (pVVar15->max_length <= uVar17) break;
              pMVar20 = TypeInfo__MVSweptElipsoidCheck->static_fields;
              vector.z = *(float *)((int)&pVVar15->vector[0].x + (int)(cmb + 3 + -2));
              vector._0_8_ = *(undefined8 *)((int)&pVVar15->vector[0].x + (int)(cmb + 2 + -2));
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                  ((Vector3 *)&puStack_7,&pMVar20->elipsoidSpaceToWorld,vector,
                                   (MethodInfo *)0x0);
              uVar21 = pVVar1->x;
              uVar22 = pVVar1->y;
              fVar2 = pVVar1->z;
              if (pRVar19->max_length <= uVar17) break;
              *(ulonglong *)((int)&pRVar19->vector[0].m_Origin.x + iVar18) =
                   CONCAT44((float)&puStack_7 + (float)uVar22,(float)uVar21 + 3.28775e-29);
              *(float *)((int)&pRVar19->vector[0].m_Origin.z + iVar18) = fVar10 + fVar2;
              pRVar19 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
              if (pRVar19 == (Ray__Array *)0x0) goto code_?;
              if (pRVar19->max_length <= uVar17) break;
              value_00.y = (float)&UNK_?;
              value_00.x = fVar4;
              value_00.z = (float)&puStack_7;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&stack0xffffffc8,value_00,(MethodInfo *)0x0);
              uVar17 = uVar17 + 1;
              fVar2 = pVVar1->z;
              cmb = (ICubeModelCollider *)&(pMVar20->elipsoidSpaceToWorld).m30;
              *(undefined8 *)((int)&pRVar19->vector[0].m_Direction.x + iVar18) =
                   *(undefined8 *)pVVar1;
              *(float *)((int)&pRVar19->vector[0].m_Direction.z + iVar18) = fVar2;
              iVar18 = iVar18 + 0x18;
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
      fVar13 = (float)((uint)(ray.m_Direction.y * (float)uStack_20._4_4_ +
                              ray.m_Direction.x * (float)(undefined4)uStack_20 +
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
  ppIVar1 = (Il2CppClass **)CONCAT22(pos.y,pos.x);
  pIStack_2 = (Il2CppRGCTXData *)((uint)pIStack_2 & 0xffffff00);
  uStack_3 = ppIVar1;
  uStack_4 = (void *)CONCAT22(pos.z,(undefined2)uStack_4);
  uStack_5 = CONCAT22(pos.z,(undefined2)uStack_5);
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    ppIVar1 = (Il2CppClass **)CONCAT22(pos.y,pos.x);
    uStack_4 = (void *)CONCAT22(pos.z,(undefined2)uStack_4);
  }
  if ((short)uStack_3 < (collisionState->minBounds).x) {
    return;
  }
  if (uStack_3._2_2_ < (collisionState->minBounds).y) {
    return;
  }
  if (uStack_5._2_2_ < (collisionState->minBounds).z) {
    return;
  }
  if ((collisionState->maxBounds).x < (short)uStack_3) {
    return;
  }
  if ((collisionState->maxBounds).y < uStack_3._2_2_) {
    return;
  }
  if ((collisionState->maxBounds).z < uStack_5._2_2_) {
    return;
  }
  uStack_3 = ppIVar1;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVStack_6 = (Vector3__Array *)collisionState->scaledMaxRadius;
  iVar7 = (int)uStack_3._2_2_;
  pIStack_8 = (Il2CppClass *)(float)(int)(short)uStack_3;
  pFStack_9 = (FaceFlags__Enum__Array__Class *)0x0;
  pIStack_10 = (Il2CppClass *)0x0;
  pIStack_11 = (Il2CppClass *)0x0;
  pIStack_12 = (Il2CppClass *)0x0;
  fStack_13 = (float)(int)uStack_4._2_2_;
  uVar14 = (collisionState->localOrigin).x;
  uVar15 = (collisionState->localOrigin).y;
  uVar16 = (collisionState->localDirection).x;
  uVar17 = (collisionState->localDirection).y;
  ppMStack_18 = (MethodInfo **)(collisionState->localOrigin).x;
  uStack_3 = (Il2CppClass **)(collisionState->localOrigin).y;
  ppIStack_19 = (Il2CppClass **)(collisionState->localOrigin).z;
  pFStack_20 = (FieldInfo *)(collisionState->localDirection).x;
  pEStack_21 = (EventInfo *)(collisionState->localDirection).y;
  pPStack_22 = (PropertyInfo *)(collisionState->localDirection).z;
  point.y = (float)iVar7;
  point.x = (float)pIStack_8;
  lineStart.y = (float)uVar15 - (float)uVar17 * _UNK_?;
  lineStart.x = (float)uVar14 - (float)uVar16 * _UNK_?;
  point.z = fStack_13;
  lineStart.z = (collisionState->localOrigin).z - (collisionState->localDirection).z * _UNK_?
  ;
  lineEnd.y = (float)uStack_3 + (float)pEStack_21 * _UNK_?;
  lineEnd.x = (float)ppMStack_18 + (float)pFStack_20 * _UNK_?;
  lineEnd.z = (float)ppIStack_19 + (float)pPStack_22 * _UNK_?;
  MathFunctions::MathFunctions_DistancePointLine
            (point,lineStart,lineEnd,(float *)&pFStack_9,(MethodInfo *)0x0);
  if ((float)pVStack_6 + _UNK_? < (float)pFStack_9) {
    return;
  }
  ppIStack_19 = (Il2CppClass **)CONCAT22(pos.y,pos.x);
  pVStack_23 = (Vector3__Array *)collisionState->cmb;
  uStack_4 = (void *)CONCAT22(pos.z,(undefined2)uStack_4);
  if (pVStack_23 != (Vector3__Array *)0x0) {
    pFStack_9 = (FaceFlags__Enum__Array__Class *)pVStack_23->klass;
    uVar24 = 0;
    pVStack_6 = (Vector3__Array *)0x0;
    uVar25._0_1_ = (pFStack_9->_1).rank;
    uVar25._1_1_ = (pFStack_9->_1).minimumAlignment;
    uStack_5 = (uint)uVar25;
    if (uVar25 != 0) {
      do {
        if (pFStack_9->interfaceOffsets[uVar24].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppIVar1 = &((FaceFlags__Enum__Array__Class *)pVStack_23->klass)[1]._0.klass +
                     ((FaceFlags__Enum__Array__Class *)pVStack_23->klass)->interfaceOffsets[uVar24].
                     offset * 2;
          goto code_?;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar25);
    }
    ppIVar1 = (Il2CppClass **)func_?();
code_?:
    pFVar26 = (FaceFlags__Enum__Array__Class *)(*(code *)*ppIVar1)();
    pFStack_9 = pFVar26;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = (Matrix4x4 *)0x0;
    __return_storage_ptr__ = pFVar26;
    bVar27 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      ((CubeBase *)pFVar26,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar27 == 0) {
      return;
    }
    if (pFVar26 != (FaceFlags__Enum__Array__Class *)0x0) {
      if ((char)(pFVar26->_0).byval_arg.attrs == '?') {
        return;
      }
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                ((CubeBase *)pFVar26,
                 &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace,
                 (MethodInfo *)0x0);
      ppIStack_19 = (Il2CppClass **)(int)pos.z;
      iVar7 = (int)pos.x;
      uStack_4 = (void *)0x0;
      iVar28 = (int)pos.y;
      uStack_5 = 0;
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
          pVVar29 = (Vector3__Array *)
                    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
          pVStack_6 = (Vector3__Array *)0x0;
          pFVar26 = pFStack_9;
          pVStack_23 = pVVar29;
          if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
          goto code_?;
        }
        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar29 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
        if ((void *)pVVar29->max_length <= uStack_4) break;
        pPStack_22 = *(PropertyInfo **)((int)&pVVar29->vector[0].z + uStack_5);
        _pFStack_40 = *(undefined8 *)((int)&pVVar29->vector[0].x + uStack_5);
        *(ulonglong *)((int)&pVVar29->vector[0].x + uStack_5) =
             CONCAT44((float)pEStack_21 + (float)iVar28,(float)pFStack_20 + (float)iVar7);
        *(float *)((int)&pVVar29->vector[0].z + uStack_5) =
             (float)pPStack_22 + (float)(int)ppIStack_19;
        pVStack_6 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        pVStack_23 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVStack_23 == (Vector3__Array *)0x0) goto code_?;
        if ((void *)pVStack_23->max_length <= uStack_4) break;
        uVar30 = *(undefined4 *)((int)&pVStack_23->vector[0].z + uStack_5);
        this = &collisionState->localToElipsoidSpace;
        __return_storage_ptr__ = (FaceFlags__Enum__Array__Class *)&stack0xffffff80;
        point_00.z._0_2_ = (short)uVar30;
        point_00._0_8_ = *(undefined8 *)((int)&pVStack_23->vector[0].x + uStack_5);
        point_00.z._2_2_ = (short)((uint)uVar30 >> 0x10);
        pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)__return_storage_ptr__,this,point_00,(MethodInfo *)0x0);
        pVStack_23 = (Vector3__Array *)pVVar31->z;
        if ((void *)pVStack_6->max_length <= uStack_4) break;
        *(undefined8 *)((int)&pVStack_6->vector[0].x + uStack_5) = *(undefined8 *)pVVar31;
        *(Vector3__Array **)((int)&pVStack_6->vector[0].z + uStack_5) = pVStack_23;
        uStack_4 = (void *)((int)uStack_4 + Face__Enum_Bottom);
        uStack_5 = uStack_5 + 0xc;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
code_?:
  if ((int)pVVar29->max_length <= (int)pVStack_6) {
    if (((byte)pIStack_2 != '\0') && (collisionState->firstHitDetected == 0)) {
      key = collisionState->scanAxis;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                        (&pos,key,(MethodInfo *)0x0);
      collisionState->firstHitScanAxis = (int)iVar33;
      collisionState->firstHitDetected = 1;
    }
    return;
  }
  if ((Vector3__Array *)pVVar29->max_length <= pVStack_6) goto code_?;
  bVar34 = *(byte *)((int)&pVStack_6->vector[0].z + (int)(pVVar29->vector + -2));
  ppIStack_19 = (Il2CppClass **)CONCAT31(ppIStack_19._1_3_,bVar34);
  if (((byte)(pFVar26->_0).byval_arg.attrs & bVar34) == 0) {
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ppIVar1 = ppIStack_19;
    uStack_4 = (void *)MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                                  ((FaceFlags__Enum)ppIStack_19,(MethodInfo *)0x0);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                     ((FaceFlags__Enum)ppIVar1,(MethodInfo *)0x0);
    uVar30 = 0;
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
    uVar35 = CONCAT22(pos.y,pos.x);
    method_00 = (MethodInfo *)0x0;
    pCVar36 = collisionState;
    pfVar37 = (float *)&stack0xfffffdb4;
    for (iVar7 = 0x31; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar37 = (pCVar36->localOrigin).x;
      pCVar36 = (CollisionState *)&(pCVar36->localOrigin).y;
      pfVar37 = pfVar37 + 1;
    }
    p1_00.y = (float)pIStack_11;
    p1_00.x = (float)pIStack_10;
    p1_00.z = (float)pIStack_12;
    p2_00.z = (float)pIStack_38;
    p2_00.x = (float)p_Stack_4c;
    p2_00.y = (float)pIStack_39;
    p3_00.z = (float)pPStack_22;
    p3_00.x = (float)pFStack_20;
    p3_00.y = (float)pEStack_21;
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
    fVar52 = distance;
    pvVar53 = uStack_4;
    pFVar26 = pFStack_9;
    uVar54 = radius._0_8_;
    fVar55 = radius.z;
    iVar33 = pos.z;
    bVar27 = MVSweptElipsoidCheck_HandleTriangleTest
                      (p1_00,p2_00,p3_00,vh,distance,(Face__Enum)uStack_4,(Cube *)pFStack_9,radius
                       ,pos_01,collisionState_01,method_00);
    uStack_5 = CONCAT13(bVar27 | (byte)pIStack_2,(undefined3)uStack_5);
    if (((TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
          (Vector3__Array *)0x0) ||
        (func_?(),
        TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0)) ||
       (func_?(),
       TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
       (Vector3__Array *)0x0)) goto code_?;
    pcVar56 = (char *)0x0;
    puVar57 = &uStack_58;
    pIVar59 = (Il2CppImage *)&UNK_?;
    func_?();
    iVar7 = 0x31;
    pos_00.y = pos.y;
    pos_00.x = pos.x;
    in_stack_40 = (MethodInfo *)0x0;
    pCVar36 = collisionState;
    pfVar37 = (float *)&stack0xfffffd94;
    while( true ) {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      *pfVar37 = (pCVar36->localOrigin).x;
      pCVar36 = (CollisionState *)&(pCVar36->localOrigin).y;
      pfVar37 = pfVar37 + 1;
    }
    p2.y._0_2_ = (short)puVar57;
    p2.x = (float)pIVar59;
    p2.y._2_2_ = (short)((uint)puVar57 >> 0x10);
    p1.y = (float)__return_storage_ptr__;
    p1.x = (float)uVar30;
    p1.z = (float)this;
    p2.z = (float)pcVar56;
    p3.z = fStack_13;
    p3._0_8_ = uStack_58;
    pos_00.z = pos.z;
    collisionState_00.localOrigin.y = (float)pvVar53;
    collisionState_00.localOrigin.x = fVar52;
    collisionState_00.localOrigin.z = (float)pFVar26;
    collisionState_00.localHitPoint.x = (float)uVar54;
    collisionState_00.localHitPoint.y = SUB84(uVar54,4);
    collisionState_00.localHitPoint.z = fVar55;
    collisionState_00.localNormal.x = (float)uVar35;
    collisionState_00.localNormal.y._0_2_ = iVar33;
    collisionState_00.localNormal.y._2_2_ = in_stack_60;
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
                      (p1,p2,p3,vh,distance,(Face__Enum)uStack_4,(Cube *)pFStack_9,radius,pos_00,
                       collisionState_00,in_stack_40);
    pIStack_2 = (Il2CppRGCTXData *)(uint)bVar27;
    pVVar29 = pVStack_23;
    pFVar26 = pFStack_9;
    if (uStack_5._3_1_ != '\0') {
      pIStack_2 = (Il2CppRGCTXData *)0x1;
    }
  }
  pVStack_6 = (Vector3__Array *)((int)&pVStack_6->klass + 1);
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
                 (bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                          HashSet_1_System_UInt32__Contains
                                    ((HashSet_1_System_UInt32_ *)ignoreWoIds,(pMVar2->fields)._.id,
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
          (fVar3 - (float)uVar7) * (fVar3 - (float)uVar7) +
          (fVar4 - (float)uVar8) * (fVar4 - (float)uVar8) + fVar5 * fVar5) {
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
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&stack0xfffffed8,0,0xc4);
  if (chunk != (BoxCollider *)0x0) {
    pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                        ((Vector3 *)&BStack_4,chunk,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar3->x;
    uStack_2._4_4_ = pVVar3->y;
    fStack_1 = pVVar3->z;
    pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                        (&VStack_5,chunk,(MethodInfo *)0x0);
    BStack_4.klass = (BoxCollider__Class *)pVVar3->x;
    BStack_4.monitor = (MonitorData *)pVVar3->y;
    BStack_4.fields._._._.m_CachedPtr = (Collider__Fields)pVVar3->z;
    VStack_6.x = (float)BStack_4.klass * _UNK_?;
    VStack_6.y = (float)BStack_4.monitor * _UNK_?;
    VStack_6.z = (float)BStack_4.fields._._._.m_CachedPtr * _UNK_?;
    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    localSpaceBounds.m_Center.z = fStack_1;
    localSpaceBounds.m_Center.x = (float)(undefined4)uStack_2;
    localSpaceBounds.m_Center.y = (float)uStack_2._4_4_;
    localSpaceBounds.m_Extents.x = VStack_6.x;
    localSpaceBounds.m_Extents.y = VStack_6.y;
    localSpaceBounds.m_Extents.z = VStack_6.z;
    SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
              ((IntVector *)&stack0xffffff68,(IntVector *)&stack0xffffff6e,localSpaceBounds,
               (MethodInfo *)0x0);
    if ((collisionData != (PhysicsCollisionData *)0x0) &&
       (pTVar7 = (collisionData->fields).transform, pTVar7 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                ((Vector3 *)&BStack_4,pTVar7,(collisionData->fields).point,(MethodInfo *)0x0);
      pTVar7 = (collisionData->fields).transform;
      if (pTVar7 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformDirection
                  ((Vector3 *)&BStack_4,pTVar7,(collisionData->fields).normal,(MethodInfo *)0x0);
        pTVar7 = (collisionData->fields).transform;
        if (pTVar7 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformDirection
                    ((Vector3 *)&BStack_4,pTVar7,ray.m_Direction,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pMVar8 = TypeInfo__MVSweptElipsoidCheck->static_fields;
          fStack_9 = (pMVar8->worldToElipsoidSpace).m00;
          BStack_4.klass = (BoxCollider__Class *)(pMVar8->worldToElipsoidSpace).m10;
          BStack_4.monitor = (MonitorData *)(pMVar8->worldToElipsoidSpace).m20;
          BStack_4.fields._._._.m_CachedPtr = (Collider__Fields)(pMVar8->worldToElipsoidSpace).m30
          ;
          fVar10 = (pMVar8->worldToElipsoidSpace).m01;
          VStack_5.x = (pMVar8->worldToElipsoidSpace).m11;
          VStack_5.y = (pMVar8->worldToElipsoidSpace).m21;
          VStack_5.z = (pMVar8->worldToElipsoidSpace).m31;
          fStack_1 = (pMVar8->worldToElipsoidSpace).m02;
          VStack_6.x = (pMVar8->worldToElipsoidSpace).m12;
          VStack_6.y = (pMVar8->worldToElipsoidSpace).m22;
          VStack_6.z = (pMVar8->worldToElipsoidSpace).m32;
          fVar11 = (pMVar8->worldToElipsoidSpace).m03;
          fVar12 = (pMVar8->worldToElipsoidSpace).m13;
          fVar13 = (pMVar8->worldToElipsoidSpace).m23;
          fVar14 = (pMVar8->worldToElipsoidSpace).m33;
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)chunk,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localToWorldMatrix
                                ((Matrix4x4 *)&stack0xfffffe98,pTVar7,(MethodInfo *)0x0);
            fVar16 = pMVar15->m00;
            puVar17 = (undefined *)pMVar15->m10;
            pSVar18 = (String *)pMVar15->m20;
            lhs.m10 = (float)BStack_4.klass;
            lhs.m00 = fStack_9;
            lhs.m20 = (float)BStack_4.monitor;
            lhs.m30 = (float)BStack_4.fields._._._.m_CachedPtr;
            lhs.m01 = fVar10;
            lhs.m11 = VStack_5.x;
            lhs.m21 = VStack_5.y;
            lhs.m31 = VStack_5.z;
            lhs.m02 = fStack_1;
            lhs.m12 = VStack_6.x;
            lhs.m22 = VStack_6.y;
            lhs.m32 = VStack_6.z;
            lhs.m03 = fVar11;
            lhs.m13 = fVar12;
            lhs.m23 = fVar13;
            lhs.m33 = fVar14;
            UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                      ((Matrix4x4 *)&stack0xfffffe98,lhs,*pMVar15,(MethodInfo *)0x0);
            pIVar19 = (ICubeModelCollider *)&stack0xffffff20;
            func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar3 = &TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
            fVar10 = pVVar3->x;
            puVar20 = (undefined *)pVVar3->y;
            __return_storage_ptr__ = &VStack_5;
            str1 = (String *)&UNK_?;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                (__return_storage_ptr__,*pVVar3,(MethodInfo *)0x0);
            BStack_4.klass = (BoxCollider__Class *)pVVar3->x;
            BStack_4.monitor = (MonitorData *)pVVar3->y;
            fVar11 = (float)BStack_4.klass * maxRadius;
            VStack_5.z = pVVar3->z * maxRadius;
            VStack_5.y = (float)BStack_4.monitor * maxRadius;
            VStack_5.x = fVar11;
            BStack_4.fields._._._.m_CachedPtr = (Collider__Fields)(Collider__Fields)VStack_5.z;
            if (pIVar19 != (ICubeModelCollider *)0x0) {
              pfVar21 = (float *)func_?();
              VStack_5.x = fVar11 / *pfVar21;
              if (pIVar19 != (ICubeModelCollider *)0x0) {
                iVar22 = func_?();
                VStack_5.y = VStack_5.y / *(float *)(iVar22 + 4);
                if (pIVar19 != (ICubeModelCollider *)0x0) {
                  iVar22 = func_?();
                  VStack_5.z = VStack_5.z / *(float *)(iVar22 + 8);
                  func_?();
                  pIStack_23 = (ICubeModelCollider__Class *)0x0;
                  fVar11 = ray.m_Origin.x;
                  fVar12 = ray.m_Origin.y;
                  puVar24 = (undefined *)ray.m_Origin.z;
                  fVar13 = ray.m_Direction.z;
                  if ((collisionData->fields).isInsideCollider == 0) {
                    fVar14 = (collisionData->fields).distance - _UNK_?;
                    fVar11 = ray.m_Origin.x + ray.m_Direction.x * fVar14;
                    fVar12 = ray.m_Origin.y + ray.m_Direction.y * fVar14;
                    VStack_5.z = ray.m_Origin.z - (ray.m_Origin.z + ray.m_Direction.z * fVar14);
                    VStack_5.y = ray.m_Origin.y - fVar12;
                    VStack_5.x = ray.m_Origin.x - fVar11;
                    puVar24 = &UNK_?;
                    BStack_4.fields._._._.m_CachedPtr =
                         (Collider__Fields)(Collider__Fields)VStack_5.z;
                    fVar25 = (float10)func_?();
                    pIStack_23 = (ICubeModelCollider__Class *)(float)fVar25;
                    distance = distance - (float)pIStack_23;
                  }
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  fVar14 = 0.0;
                  pMVar15 = &TypeInfo__MVSweptElipsoidCheck->static_fields->worldToElipsoidSpace;
                  point.y = fVar12;
                  point.x = fVar11;
                  point.z = (float)puVar24;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            ((Vector3 *)&BStack_4,pMVar15,point,(MethodInfo *)0x0);
                  pBVar26 = &BStack_4;
                  puVar27 = &UNK_?;
                  vector.y = fVar14;
                  vector.x = (float)puVar24;
                  vector.z = fVar13;
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                            Matrix4x4_MultiplyVector
                                      ((Vector3 *)pBVar26,
                                       &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                        worldToElipsoidSpace,vector,(MethodInfo *)0x0);
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                      ((Vector3 *)&BStack_4,*pVVar3,(MethodInfo *)0x0);
                  uVar28 = pVVar3->y;
                  fVar13 = pVVar3->z;
                  BStack_4.fields._._._.m_CachedPtr = (Collider__Fields)((float)pBVar26 * distance)
                  ;
                  vector_00.y = (float)puVar27 * distance;
                  vector_00.x = (float)puVar24 * distance;
                  vector_00.z = (float)BStack_4.fields._._._.m_CachedPtr;
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                            Matrix4x4_MultiplyVector
                                      ((Vector3 *)&BStack_4,
                                       &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                        worldToElipsoidSpace,vector_00,(MethodInfo *)0x0);
                  VStack_5.x = pVVar3->x;
                  VStack_5.y = pVVar3->y;
                  VStack_5.z = pVVar3->z;
                  func_?();
                  pTVar7 = (collisionData->fields).transform;
                  if (pTVar7 != (Transform *)0x0) {
                    pBVar26 = &BStack_4;
                    puVar24 = &UNK_?;
                    position.y = fVar11;
                    position.x = (float)pMVar15;
                    position.z = fVar12;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              ((Vector3 *)pBVar26,pTVar7,position,(MethodInfo *)0x0);
                    VStack_6.x = (float)puVar20;
                    VStack_6.y = (float)puVar24;
                    VStack_6.z = (float)pBVar26;
                    if (((float)((uint)puVar20 & _UNK_?) <
                         (float)((uint)puVar24 & _UNK_?)) ||
                       ((float)((uint)puVar20 & _UNK_?) <
                        (float)((uint)pBVar26 & _UNK_?))) {
                      if (((float)((uint)puVar24 & _UNK_?) <
                           (float)((uint)puVar20 & _UNK_?)) ||
                         ((float)((uint)puVar24 & _UNK_?) <
                          (float)((uint)pBVar26 & _UNK_?))) {
                        uStack_29 = (double)((ulonglong)uStack_29 & 0xffffffff);
                        OStack_30.m_CachedPtr = (undefined *)0x0;
                        if (0.0 <= (float)pBVar26) {
                          fVar25 = (float10)func_?();
                        }
                        else {
                          fVar25 = (float10)func_?();
                        }
                        chunk = (BoxCollider *)(float)fVar25;
                        VStack_6.z = (float)chunk;
                      }
                      else {
                        uStack_29 = (double)((ulonglong)uStack_29 & 0xffffffff);
                        chunk = (BoxCollider *)0x0;
                        register0x00001200 = (double)(float)puVar24;
                        if (0.0 <= (float)puVar24) {
                          fVar25 = (float10)func_?();
                          OStack_30.m_CachedPtr = (void *)(float)fVar25;
                          VStack_6.y = (float)OStack_30.m_CachedPtr;
                        }
                        else {
                          fVar25 = (float10)func_?();
                          OStack_30.m_CachedPtr = (void *)(float)fVar25;
                          VStack_6.y = (float)OStack_30.m_CachedPtr;
                        }
                      }
                    }
                    else {
                      chunk = (BoxCollider *)0x0;
                      OStack_30.m_CachedPtr = (undefined *)0x0;
                      uStack_29 = (double)(float)puVar20;
                      if (0.0 <= (float)puVar20) {
                        fVar25 = (float10)func_?();
                        VStack_6.x = (float)fVar25;
                        uStack_29 = (double)CONCAT44(VStack_6.x,(undefined4)uStack_29);
                      }
                      else {
                        fVar25 = (float10)func_?();
                        VStack_6.x = (float)fVar25;
                        uStack_29 = (double)CONCAT44(VStack_6.x,(undefined4)uStack_29);
                      }
                    }
                    BStack_4.klass = (BoxCollider__Class *)((float)uStack_29._4_4_ * _UNK_?)
                    ;
                    OStack_30.m_CachedPtr = (void *)(OStack_30.m_CachedPtr * _UNK_?);
                    CVar31._._.m_CachedPtr = (Component__Fields)((float)chunk * _UNK_?);
                    uStack_29 = (double)CONCAT44(BStack_4.klass,(undefined4)uStack_29);
                    BStack_4.monitor = OStack_30.m_CachedPtr;
                    pBVar32 = BStack_4.klass;
                    BStack_4.fields._._._.m_CachedPtr =
                         (Collider__Fields)(Collider__Fields)CVar31._._.m_CachedPtr;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                      pBVar32 = uStack_29._4_4_;
                    }
                    pVVar33 = TypeInfo__UnityEngine__Vector3->static_fields;
                    uVar34 = (pVVar33->zeroVector).x;
                    uVar35 = (pVVar33->zeroVector).y;
                    VStack_6.z = (pVVar33->zeroVector).z;
                    if (((float)pBVar32 - (float)uVar34) * ((float)pBVar32 - (float)uVar34) +
                        ((float)OStack_30.m_CachedPtr - (float)uVar35) *
                        ((float)OStack_30.m_CachedPtr - (float)uVar35) +
                        ((float)CVar31._._.m_CachedPtr - VStack_6.z) *
                        ((float)CVar31._._.m_CachedPtr - VStack_6.z) < _UNK_?) {
                      VStack_6.x = (float)uVar34;
                      VStack_6.y = (float)uVar35;
                      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      puVar20 = &UNK_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_scanRect_cant_be_zero,(MethodInfo *)0x0);
                    }
                    VStack_6.x = (float)uStack_29._4_4_;
                    VStack_6.y = (float)OStack_30.m_CachedPtr;
                    VStack_6.z = (float)CVar31._._.m_CachedPtr;
                    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    auStack_36._0_4_ = VStack_6.x;
                    auStack_36._4_4_ = VStack_6.y;
                    OStack_30.m_CachedPtr = (void *)VStack_6.z;
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    iVar22 = 0;
                    do {
                      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                        ((Vector3 *)auStack_36,iVar22,(MethodInfo *)0x0);
                      if (_UNK_? < (float)((uint)fVar11 & _UNK_?))
                      goto code_?;
                      iVar22 = iVar22 + 1;
                    } while (iVar22 < 3);
                    str1 = (String *)func_?();
                    __return_storage_ptr__ = (Vector3 *)0x0;
                    puVar17 = &UNK_?;
                    pSVar18 = StringLiteral_No_scan_axis_found_;
                    message = mscorlib.dll::System::String::String_Concat_3
                                        (StringLiteral_No_scan_axis_found_,str1,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)message,(MethodInfo *)0x0);
code_?:
                    pTVar7 = (collisionData->fields).transform;
                    if (pTVar7 != (Transform *)0x0) {
                      pVVar3 = &VStack_6;
                      puVar24 = &UNK_?;
                      direction.z = (float)BStack_4.fields._._._.m_CachedPtr;
                      direction.x = (float)BStack_4.klass;
                      direction.y = (float)BStack_4.monitor;
                      pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_TransformDirection
                                          (pVVar3,pTVar7,direction,(MethodInfo *)0x0);
                      fVar14 = (collisionData->fields).point.z;
                      fVar11 = (collisionData->fields).point.x;
                      fVar12 = (collisionData->fields).point.y;
                      pMVar8 = TypeInfo__MVSweptElipsoidCheck->static_fields;
                      pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                          ((Vector3 *)auStack_36,*pVVar37,(MethodInfo *)0x0);
                      uVar38 = pVVar37->x;
                      uVar39 = pVVar37->y;
                      VStack_6.z = pVVar37->z;
                      (pMVar8->collisionPlane).m_Normal.x = (float)uVar38;
                      (pMVar8->collisionPlane).m_Normal.y = (float)uVar39;
                      (pMVar8->collisionPlane).m_Normal.z = VStack_6.z;
                      (pMVar8->collisionPlane).m_Distance =
                           (float)((uint)((float)uVar38 * fVar11 + (float)uVar39 * fVar12 +
                                         VStack_6.z * fVar14) ^
                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  );
                      uVar40 = (collisionData->fields).point.x;
                      uVar41 = (collisionData->fields).point.y;
                      pTVar7 = (collisionData->fields).transform;
                      fVar11 = (collisionData->fields).point.z;
                      VStack_6.x = (float)uVar38;
                      VStack_6.y = (float)uVar39;
                      if (pTVar7 != (Transform *)0x0) {
                        direction_00.z = (float)BStack_4.fields._._._.m_CachedPtr;
                        direction_00.x = (float)BStack_4.klass;
                        direction_00.y = (float)BStack_4.monitor;
                        pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_TransformDirection
                                            ((Vector3 *)&BStack_4,pTVar7,direction_00,
                                             (MethodInfo *)0x0);
                        planeOrigin.y = (float)uVar41;
                        planeOrigin.x = (float)uVar40;
                        planeOrigin.z = fVar11;
                        MVSweptElipsoidCheck_GetRaysProjectedOnPlane
                                  (boundRays,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane,
                                   planeOrigin,*pVVar37,(MethodInfo *)0x0);
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
                          localNormal.z._0_2_ = SUB42(fVar10,0);
                          localNormal.z._2_2_ = (int16_t)((uint)fVar10 >> 0x10);
                          localHit.y = (float)puVar17;
                          localHit.x = fVar16;
                          localHit.z = (float)pSVar18;
                          localDir.y = (float)puVar24;
                          localDir.x = (float)puVar20;
                          localDir.z = (float)pVVar3;
                          MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
                                    (TypeInfo__MVSweptElipsoidCheck->static_fields->
                                     minMaxCalculateAxisAlignedRect,localNormal,localHit,localDir,
                                     (MethodInfo *)0x0);
                        }
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar42 = MVSweptElipsoidCheck_LayerScan_1
                                           (radius,TypeInfo__MVSweptElipsoidCheck->static_fields->
                                                   minMaxCalculateAxisAlignedRect,vh,distance,
                                            (CollisionState *)&stack0xfffffed8,(MethodInfo *)0x0);
                        if (bVar42 == 0) {
                          return 0;
                        }
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        fVar10 = vh->distance;
                        BStack_4.fields._._._.m_CachedPtr = (Collider__Fields)(fVar13 * fVar10);
                        vector_01.y = (float)uVar28 * fVar10;
                        vector_01.x = fVar10 * 0.0;
                        vector_01.z = (float)BStack_4.fields._._._.m_CachedPtr;
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::
                                  Matrix4x4_MultiplyVector
                                            ((Vector3 *)&BStack_4,
                                             &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                              elipsoidSpaceToWorld,vector_01,(MethodInfo *)0x0);
                        VStack_5.x = pVVar3->x;
                        VStack_5.y = pVVar3->y;
                        VStack_5.z = pVVar3->z;
                        fVar25 = (float10)func_?();
                        vh->distance = (float)(fVar25 + (float10)(float)pIStack_23);
                        if (wo != (ICubeModelCollider *)0x0) {
                          pIStack_23 = wo->klass;
                          uVar43 = 0;
                          uVar44._0_1_ = (pIStack_23->_1).rank;
                          uVar44._1_1_ = (pIStack_23->_1).minimumAlignment;
                          OStack_30.m_CachedPtr = (void *)(uint)uVar44;
                          if (uVar44 != 0) {
                            do {
                              if (pIStack_23->interfaceOffsets[uVar43].interfaceType ==
                                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                                ppMVar45 = &(&(wo->klass->vtable).get_Id)
                                            [wo->klass->interfaceOffsets[uVar43].offset].method;
                                goto code_?;
                              }
                              uVar43 = uVar43 + 1;
                            } while (uVar43 < uVar44);
                          }
                          ppMVar45 = (MethodInfo **)func_?();
code_?:
                          iVar46 = (*(code *)*ppMVar45)();
                          uVar44 = 0;
                          pIStack_23 = wo->klass;
                          uVar43._0_1_ = (pIStack_23->_1).rank;
                          uVar43._1_1_ = (pIStack_23->_1).minimumAlignment;
                          OStack_30.m_CachedPtr = (void *)(uint)uVar43;
                          uStack_29._4_4_ = (BoxCollider__Class *)iVar46;
                          if (uVar43 != 0) {
                            do {
                              if (pIStack_23->interfaceOffsets[uVar44].interfaceType ==
                                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                                ppMVar45 = &(&(wo->klass->vtable).get_InteractionFlags)
                                            [wo->klass->interfaceOffsets[uVar44].offset].method;
                                goto code_?;
                              }
                              uVar44 = uVar44 + 1;
                            } while (uVar44 < uVar43);
                          }
                          ppMVar45 = (MethodInfo **)func_?();
code_?:
                          iVar47 = (*(code *)*ppMVar45)();
                          vh->woId = (int32_t)uStack_29._4_4_;
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
  bVar42 = (*pcVar48)();
  return bVar42;
}


/* Boolean LayerScan(Vector3, Vector3[], VoxelHit ByRef, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan_1
               (Vector3 radius,Vector3__Array *alignedRect,VoxelHit *vh,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    in_stack_1 = 0xfd78;
    in_stack_2 = 0x11b3;
    in_stack_3 = 0xe0f9;
    in_stack_4 = 0x1026;
    func_?();
    cRam_? = '\x01';
  }
  IStack_5.x = 0;
  IStack_5.y = 0;
  IStack_5.z = 0;
  IStack_6.x = 0;
  IStack_6.y = 0;
  IStack_6.z = 0;
  IStack_7.x = 0;
  IStack_7.y = 0;
  IStack_7.z = 0;
  IStack_8.x = 0;
  IStack_8.y = 0;
  IStack_8.z = 0;
  IStack_9.x = 0;
  IStack_9.y = 0;
  IStack_9.z = 0;
  IStack_10.x = 0;
  IStack_10.y = 0;
  IStack_10.z = 0;
  vh->distance = INFINITY;
  if (alignedRect != (Vector3__Array *)0x0) {
    if (alignedRect->max_length == 0) goto code_?;
    auStack_11._0_4_ = alignedRect->vector[0].x;
    auStack_11._4_4_ = alignedRect->vector[0].y;
    bVar12 = false;
    auStack_11._8_4_ = alignedRect->vector[0].z;
    iVar13 = 0;
    iVar14._2_2_ = (undefined2)auStack_11._0_4_;
    uVar15 = (undefined2)((uint)auStack_11._0_4_ >> 0x10);
    uVar16 = (undefined2)auStack_11._4_4_;
    uVar17 = (undefined2)((uint)auStack_11._4_4_ >> 0x10);
    auStack_11._12_4_ = alignedRect->vector[0].x;
    pIStack_18 = (Il2CppClass *)alignedRect->vector[0].y;
    bVar19 = false;
    pMStack_20 = (MethodInfo *)auStack_11._8_4_;
    pIStack_21 = (Il2CppMethodPointer)auStack_11._0_4_;
    pIStack_22 = (Il2CppMethodPointer)auStack_11._4_4_;
    pMStack_23 = (MethodInfo *)auStack_11._8_4_;
    pMStack_24 = (MethodInfo *)auStack_11._8_4_;
    do {
      uVar25 = (undefined2)iVar13;
      uVar26 = (undefined2)((uint)iVar13 >> 0x10);
      if ((iVar13 == collisionState->scanAxis) || (bVar12)) {
        if ((bool)(bVar12 & iVar13 != collisionState->scanAxis)) {
          in_stack_3 = 1;
          in_stack_4 = 0;
          in_stack_27 = 0xe1f0;
          in_stack_28 = 0x1026;
          in_stack_29 = (Vector3 *)func_?();
          in_stack_30 = &UNK_?;
          pMStack_31 = (MethodInfo *)
                       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 (in_stack_29,(int32_t)in_stack_32,in_stack_33);
          in_stack_33 = (MethodInfo *)(auStack_11 + 0xc);
          in_stack_32 = &UNK_?;
          in_stack_34 = iVar13;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    ((Vector3 *)in_stack_33,iVar13,(float)pMStack_31,(MethodInfo *)0x0);
          in_stack_1 = uVar25;
          in_stack_2 = uVar26;
          bVar12 = bVar19;
        }
      }
      else {
        in_stack_3 = 1;
        in_stack_4 = 0;
        in_stack_27 = 0xe1a8;
        in_stack_28 = 0x1026;
        in_stack_29 = (Vector3 *)func_?();
        in_stack_30 = &UNK_?;
        fVar35 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (in_stack_29,(int32_t)in_stack_32,in_stack_33);
        in_stack_33 = (MethodInfo *)auStack_11;
        in_stack_32 = &UNK_?;
        in_stack_34 = iVar13;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                  ((Vector3 *)in_stack_33,iVar13,fVar35,(MethodInfo *)0x0);
        bVar19 = true;
        in_stack_1 = uVar25;
        in_stack_2 = uVar26;
        bVar12 = bVar19;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    fVar36 = (float)auStack_11._0_4_ - (float)pIStack_21;
    fVar37 = (float)auStack_11._4_4_ - (float)pIStack_22;
    fVar35 = (float)auStack_11._8_4_ - (float)pMStack_23;
    __return_storage_ptr__ = &_Stack_68;
    puVar38 = &UNK_?;
    value.y = fVar37;
    value.x = fVar36;
    value.z = fVar35;
    pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)__return_storage_ptr__,value,(MethodInfo *)0x0);
    uVar40._0_4_ = pVVar39->x;
    uVar40._4_4_ = pVVar39->y;
    pMVar41 = (MethodInfo *)pVVar39->z;
    fVar42 = (float)pMStack_20 - (float)pMStack_23;
    uVar43 = CONCAT44((float)pIStack_18 - (float)pIStack_22,
                      (float)auStack_11._12_4_ - (float)pIStack_21);
    pVVar39 = (Vector3 *)&stack0xffffff5c;
    uVar25 = 0xe2c7;
    uVar26 = 0x1026;
    value_00.z = fVar42;
    value_00.x = (float)auStack_11._12_4_ - (float)pIStack_21;
    value_00.y = (float)pIStack_18 - (float)pIStack_22;
    pVVar44 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (pVVar39,value_00,(MethodInfo *)0x0);
    uVar45 = pVVar44->x;
    uVar46 = pVVar44->y;
    method_00 = (MethodInfo *)pVVar44->z;
    uVar47 = (undefined2)uVar40;
    uVar48 = (undefined2)((ulonglong)uVar40 >> 0x10);
    uVar49 = (undefined2)((ulonglong)uVar40 >> 0x20);
    uVar50 = (undefined2)((ulonglong)uVar40 >> 0x30);
    puVar51 = auStack_52;
    puVar53 = &UNK_?;
    localPos_01.y._0_2_ = uVar47;
    localPos_01.x = (float)puVar51;
    localPos_01.y._2_2_ = uVar48;
    localPos_01.z._0_2_ = uVar49;
    localPos_01.z._2_2_ = uVar50;
    pIStack_22 = (Il2CppMethodPointer)uVar45;
    pMStack_23 = (MethodInfo *)uVar46;
    IVar54 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_01,pMVar41);
    IStack_5._0_4_ = *IVar54._0_4_;
    IStack_5.z = *(int16_t *)(IVar54._0_4_ + 1);
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = SUB42(method_00,0);
    uVar58 = (undefined2)((uint)method_00 >> 0x10);
    puVar59 = auStack_52;
    uVar60 = 0xe323;
    uVar61 = 0x1026;
    localPos_02.y = (float)pIStack_22;
    localPos_02.x = (float)puVar59;
    localPos_02.z = (float)pMStack_23;
    pIVar62 = pIStack_22;
    pMVar41 = pMStack_23;
    IVar54 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_02,method_00);
    IStack_6._0_4_ = *IVar54._0_4_;
    IStack_6.z = *(int16_t *)(IVar54._0_4_ + 1);
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      in_stack_1 = 0xe346;
      in_stack_2 = 0x1026;
      func_?();
    }
    pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
    if (pCVar63 != (CellTraverser *)0x0) {
      localOrigin.x._2_2_ = uVar15;
      localOrigin.x._0_2_ = iVar14._2_2_;
      localOrigin.y._0_2_ = uVar16;
      localOrigin.y._2_2_ = uVar17;
      iVar13 = 0x31;
      iVar14._2_2_ = 0;
      uVar15 = 0;
      pCVar64 = collisionState;
      pfVar65 = (float *)&stack0xfffffe80;
      while( true ) {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        *pfVar65 = (pCVar64->localOrigin).x;
        pCVar64 = (CollisionState *)&(pCVar64->localOrigin).y;
        pfVar65 = pfVar65 + 1;
      }
      localOrigin.z = (float)pMStack_24;
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
      collisionState_00.localToElipsoidSpace.m20 = (float)in_stack_30;
      collisionState_00.localToElipsoidSpace.m30 = (float)in_stack_29;
      collisionState_00.localToElipsoidSpace.m01 = (float)in_stack_32;
      collisionState_00.localToElipsoidSpace.m11 = (float)in_stack_33;
      collisionState_00.localToElipsoidSpace.m21 = (float)in_stack_34;
      collisionState_00.localToElipsoidSpace.m31 = (float)puVar38;
      collisionState_00.localToElipsoidSpace.m02 = (float)__return_storage_ptr__;
      collisionState_00.localToElipsoidSpace.m12 = fVar36;
      collisionState_00.localToElipsoidSpace.m22 = fVar37;
      collisionState_00.localToElipsoidSpace.m32 = fVar35;
      collisionState_00.localToElipsoidSpace.m03._0_2_ = uVar25;
      collisionState_00.localToElipsoidSpace.m03._2_2_ = uVar26;
      collisionState_00.localToElipsoidSpace.m13 = (float)pVVar39;
      collisionState_00.localToElipsoidSpace.m23 = (float)(int)uVar43;
      collisionState_00.localToElipsoidSpace.m33 = (float)(int)((ulonglong)uVar43 >> 0x20);
      collisionState_00.scanAxis = (int32_t)fVar42;
      collisionState_00.minBounds._0_4_ = puVar53;
      collisionState_00._148_4_ = puVar51;
      collisionState_00.maxBounds.y = uVar47;
      collisionState_00.maxBounds.z = uVar48;
      collisionState_00.firstHitScanAxis._0_2_ = uVar49;
      collisionState_00.firstHitScanAxis._2_2_ = uVar50;
      collisionState_00._160_2_ = uVar60;
      collisionState_00._162_2_ = uVar61;
      collisionState_00.scaledMaxRadius._0_2_ = (short)puVar59;
      collisionState_00.scaledMaxRadius._2_2_ = (short)((uint)puVar59 >> 0x10);
      collisionState_00.elipsoidSpaceOrigin.x = (float)pIVar62;
      collisionState_00.elipsoidSpaceOrigin.y = (float)pMVar41;
      collisionState_00.elipsoidSpaceOrigin.z._0_2_ = uVar57;
      collisionState_00.elipsoidSpaceOrigin.z._2_2_ = uVar58;
      collisionState_00.elipsoidSpaceDirection.x._0_2_ = uVar55;
      collisionState_00.elipsoidSpaceDirection.x._2_2_ = uVar56;
      collisionState_00.elipsoidSpaceDirection.y._0_2_ = in_stack_27;
      collisionState_00.elipsoidSpaceDirection.y._2_2_ = in_stack_28;
      collisionState_00.elipsoidSpaceDirection.z._0_2_ = in_stack_3;
      collisionState_00.elipsoidSpaceDirection.z._2_2_ = in_stack_4;
      collisionState_00.elipsoidSpaceDistance._0_2_ = in_stack_1;
      collisionState_00.elipsoidSpaceDistance._2_2_ = in_stack_2;
      CellTraverser::CellTraverser_Init
                (pCVar63,localOrigin,collisionState_00,(MethodInfo *)CONCAT22(uVar15,iVar14._2_2_));
      uVar43 = auStack_11._0_8_;
      alignedRect._0_2_ = (undefined2)auStack_11._0_8_;
      alignedRect._2_1_ = SUB81(auStack_11._0_8_,2);
      alignedRect._3_1_ = SUB81(auStack_11._0_8_,3);
      vh = SUB84(auStack_11._0_8_,4);
      localPos.y._0_2_ = alignedRect._0_2_;
      localPos.x = (float)auStack_52;
      localPos.y._2_1_ = alignedRect._2_1_;
      localPos.y._3_1_ = alignedRect._3_1_;
      localPos.z = (float)vh;
      IVar54 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos,(MethodInfo *)auStack_11._8_4_);
      IStack_7._0_4_ = *IVar54._0_4_;
      IStack_7.z = *(int16_t *)(IVar54._0_4_ + 1);
      localPos_00.y = (float)auStack_11._12_4_;
      localPos_00.x = (float)auStack_52;
      localPos_00.z = (float)pIStack_18;
      IVar54 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos_00,pMStack_20);
      IStack_8._0_4_ = *IVar54._0_4_;
      IStack_8.z = *(int16_t *)(IVar54._0_4_ + 1);
      iVar14 = collisionState->scanAxis;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar74 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&IStack_7,iVar14,(MethodInfo *)0x0);
      iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->minBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      iVar76 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->maxBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      if ((iVar75 <= iVar74) && (iVar75 = iVar74, iVar76 < iVar74)) {
        iVar75 = iVar76;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (&IStack_7,iVar14,iVar75,(MethodInfo *)0x0);
      iVar14 = collisionState->scanAxis;
      iVar74 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&IStack_7,iVar14,(MethodInfo *)0x0);
      iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->minBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      iVar76 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->maxBounds,collisionState->scanAxis,(MethodInfo *)0x0);
      if ((iVar75 <= iVar74) && (iVar75 = iVar74, iVar76 < iVar74)) {
        iVar75 = iVar76;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (&IStack_8,iVar14,iVar75,(MethodInfo *)0x0);
      iStack_77 = 0;
      iStack_78 = 0;
      pMStack_31 = (MethodInfo *)0x0;
      pMVar41 = (MethodInfo *)0x0;
      pMStack_24 = (MethodInfo *)0x0;
      do {
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                           (&IStack_5,(int32_t)pMVar41,(MethodInfo *)0x0);
        if (iVar75 != 0) {
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_7,(int32_t)pMVar41,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar63 == (CellTraverser *)0x0) goto code_?;
          IStack_10.x = (pCVar63->fields).voxelPos.x;
          IStack_10.y = (pCVar63->fields).voxelPos.y;
          IStack_10.z = (pCVar63->fields).voxelPos.z;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_10,(int32_t)pMVar41,(MethodInfo *)0x0);
          iStack_77 = func_?();
          pMStack_31 = pMVar41;
        }
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this = &IStack_6;
        iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                           (this,(int32_t)pMVar41,(MethodInfo *)0x0);
        if (iVar75 != 0) {
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_8,(int32_t)pMVar41,(MethodInfo *)0x0);
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar63 == (CellTraverser *)0x0) goto code_?;
          IStack_10.x = (pCVar63->fields).voxelPos.x;
          IStack_10.y = (pCVar63->fields).voxelPos.y;
          IStack_10.z = (pCVar63->fields).voxelPos.z;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                    (&IStack_10,(int32_t)pMVar41,(MethodInfo *)0x0);
          iStack_78 = func_?();
          pMStack_24 = pMVar41;
        }
        uVar15 = (undefined2)((ulonglong)uVar40 >> 0x30);
        pMVar41 = (MethodInfo *)((int)&pMVar41->methodPointer + 1);
      } while ((int)pMVar41 < 3);
      iStack_77 = iStack_77 + 1;
      iStack_78 = iStack_78 + 1;
      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
      if (pCVar63 != (CellTraverser *)0x0) {
        iVar14._0_2_ = (pCVar63->fields).voxelPos.x;
        iVar14._2_2_ = (pCVar63->fields).voxelPos.y;
        pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
        if (pCVar63 != (CellTraverser *)0x0) {
          uVar79._0_2_ = (pCVar63->fields).voxelPos.x;
          uVar79._2_2_ = (pCVar63->fields).voxelPos.y;
          pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar63 != (CellTraverser *)0x0) {
            iVar80 = (int32_t)(CONCAT26(uVar15,(pCVar63->fields).voxelPos) >> 0x20);
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      (&IStack_9,iVar14,uVar79 >> 0x10,iVar80,(MethodInfo *)0x0);
            do {
              do {
                iVar80 = collisionState->scanAxis;
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (&IStack_9,iVar80,(MethodInfo *)0x0);
                uVar16 = (undefined2)((uint)collisionState->scanAxis >> 0x10);
                uVar15 = 0x1026;
                iVar74 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (&collisionState->maxBounds,collisionState->scanAxis,
                                    (MethodInfo *)0x0);
                if (iVar74 < iVar75) goto code_?;
                iVar80 = collisionState->scanAxis;
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (&IStack_9,iVar80,(MethodInfo *)0x0);
                uVar17 = 0;
                this_00 = &collisionState->minBounds;
                iVar74 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (this_00,collisionState->scanAxis,(MethodInfo *)0x0);
                if (iVar75 < iVar74) goto code_?;
                uVar26 = SUB42(auStack_52,0);
                uVar47 = (undefined2)((uint)auStack_52 >> 0x10);
                uVar25 = SUB82(uVar43,6);
                if (-1 < iStack_77) {
                  ppIStack_81 = (Il2CppType **)(iStack_77 + 1);
                  _Stack_18.rgctx_data = (Il2CppRGCTXData *)(iStack_78 + 1);
                  do {
                    uVar48 = (undefined2)((uint)this >> 0x10);
                    _Var14 = _Stack_18;
                    if (-1 < iStack_78) {
                      do {
                        _Stack_6c = _Var14;
                        iVar75 = IStack_9.z;
                        uVar82 = IStack_9._0_4_;
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        uVar83 = IStack_9._0_4_;
                        IVar54.z = iVar75;
                        IStack_9.x = (int16_t)uVar82;
                        IStack_9.y = SUB42(uVar82,2);
                        IVar54.x = IStack_9.x;
                        IVar54.y = IStack_9.y;
                        radius_00.y = (float)&UNK_?;
                        radius_00.x = radius.x;
                        radius_00.z._0_2_ = uVar26;
                        radius_00.z._2_2_ = uVar47;
                        uVar48 = uVar25;
                        IStack_9._0_4_ = uVar83;
                        pCVar64 = collisionState;
                        MVSweptElipsoidCheck_HandleCube
                                  (vh,IVar54,radius_00,3.291329e-29,collisionState,(MethodInfo *)0x0
                                  );
                        iVar74 = IStack_9.z;
                        uVar82 = IStack_9._0_4_;
                        iVar75 = IStack_6.z;
                        IStack_84.x = IStack_6.x;
                        IStack_84.y = IStack_6.y;
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          uVar17 = 0x1026;
                          func_?();
                        }
                        uVar15 = (undefined2)((uint)pCVar64 >> 0x10);
                        i1.z = (int16_t)uVar82;
                        i1._0_4_ = &stack0xffffff60;
                        i2.y = uVar48;
                        i2.x = iVar74;
                        i2.z = IStack_84.x;
                        IVar54 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                 IntVector_op_Addition
                                           (i1,i2,(MethodInfo *)CONCAT22(iVar14._2_2_,iVar75));
                        uVar48 = (undefined2)((uint)this >> 0x10);
                        _Stack_6c.methodMetadataHandle = _Stack_6c.methodMetadataHandle + -1;
                        IStack_9._0_4_ = *IVar54._0_4_;
                        IStack_9.z = *(int16_t *)(IVar54._0_4_ + 1);
                        _Var14.rgctx_data = _Stack_6c.rgctx_data;
                      } while (_Stack_6c.rgctx_data != (Il2CppRGCTXData *)0x0);
                    }
                    iVar74 = IStack_9.z;
                    uVar82 = IStack_9._0_4_;
                    iVar75 = IStack_6.z;
                    IStack_84.x = IStack_6.x;
                    IStack_84.y = IStack_6.y;
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      uVar15 = 0x1026;
                      func_?();
                    }
                    uVar85 = (ushort)((uint)this_00 >> 0x10);
                    iV.z = IStack_84.x;
                    iV._0_4_ = _Stack_18.rgctx_data;
                    IVar54 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                                       ((int32_t)&pIStack_18,iV,
                                        (MethodInfo *)CONCAT22(uVar15,iVar75));
                    puVar51 = auStack_11 + 4;
                    i1_00.z = (int16_t)uVar82;
                    i1_00._0_4_ = puVar51;
                    i2_00.y = uVar16;
                    i2_00.x = iVar74;
                    i2_00.z = (int16_t)*IVar54._0_4_;
                    IVar54 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                                       (i1_00,i2_00,
                                        (MethodInfo *)
                                        CONCAT22(uVar48,*(undefined2 *)(IVar54._0_4_ + 1)));
                    puVar86 = IVar54._0_4_;
                    IStack_9._0_4_ = *puVar86;
                    IStack_9.z = *(int16_t *)(puVar86 + 1);
                    this = (IntVector *)&UNK_?;
                    i1_01.z = (int16_t)*puVar86;
                    i1_01._0_4_ = &stack0xffffff54;
                    i2_01.y = uVar85;
                    i2_01.x = *(undefined2 *)(puVar86 + 1);
                    i2_01.z = IStack_5.x;
                    IVar54 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                       (i1_01,i2_01,(MethodInfo *)CONCAT22(uVar17,IStack_5.z));
                    uVar15 = (undefined2)((uint)puVar51 >> 0x10);
                    this_00 = (IntVector *)((uint)uVar85 << 0x10);
                    ppIStack_81 = (Il2CppType **)((int)ppIStack_81 + -1);
                    IStack_9._0_4_ = *IVar54._0_4_;
                    IStack_9.z = *(int16_t *)(IVar54._0_4_ + 1);
                  } while (ppIStack_81 != (Il2CppType **)0x0);
                }
code_?:
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                CellTraverser::CellTraverser_Step(pCVar63,(MethodInfo *)0x0);
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  this = (IntVector *)&UNK_?;
                  func_?();
                }
                pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                IStack_10.x = (pCVar63->fields).stepDir.x;
                IStack_10.y = (pCVar63->fields).stepDir.y;
                iVar80 = collisionState->scanAxis;
                IStack_10.z = (pCVar63->fields).stepDir.z;
                if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                   (&IStack_10,iVar80,(MethodInfo *)0x0);
                if (iVar75 == 0) {
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                  uVar87 = (pCVar63->fields).voxelPos.x;
                  IStack_9.x = uVar87;
                  pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                  uVar88 = (pCVar63->fields).voxelPos.y;
                  IStack_9.y = uVar88;
                  pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                  IStack_84.x = (pCVar63->fields).voxelPos.x;
                  IStack_84.y = (pCVar63->fields).voxelPos.y;
                  iVar13 = 0;
                  IStack_9.z = (pCVar63->fields).voxelPos.z;
                  do {
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?();
                    }
                    iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                       (&IStack_5,iVar13,(MethodInfo *)0x0);
                    if (iVar75 != 0) {
                      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                      if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                      IStack_10.x = (pCVar63->fields).stepDir.x;
                      IStack_10.y = (pCVar63->fields).stepDir.y;
                      IStack_10.z = (pCVar63->fields).stepDir.z;
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        func_?();
                      }
                      iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                         (&IStack_10,iVar13,(MethodInfo *)0x0);
                      if (iVar75 == 0) {
                        if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                        if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                        IStack_10.x = (pCVar63->fields).stepDir.x;
                        IStack_10.y = (pCVar63->fields).stepDir.y;
                        IStack_10.z = (pCVar63->fields).stepDir.z;
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        pMVar41 = pMStack_24;
                        iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                           (&IStack_10,(int32_t)pMStack_24,(MethodInfo *)0x0);
                        uVar15 = 0;
                        iVar74 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                           (&IStack_6,(int32_t)pMVar41,(MethodInfo *)0x0);
                        if (iVar75 == iVar74) {
                          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          uVar85 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                             (&IStack_9,(int32_t)pMVar41,(MethodInfo *)0x0);
                          this = (IntVector *)&UNK_?;
                          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                                    (&IStack_9,(int32_t)pMVar41,(int16_t)((uint)uVar85 + iStack_78),
                                     (MethodInfo *)0x0);
                        }
                        if (-1 < iStack_77) {
                          _Stack_18.rgctx_data = (Il2CppRGCTXData *)(iStack_77 + 1);
                          do {
                            iVar75 = IStack_9.z;
                            uVar82 = IStack_9._0_4_;
                            if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0
                               ) {
                              func_?();
                            }
                            uVar83 = IStack_9._0_4_;
                            pos_00.z = iVar75;
                            IStack_9.x = (int16_t)uVar82;
                            IStack_9.y = SUB42(uVar82,2);
                            pos_00.x = IStack_9.x;
                            pos_00.y = IStack_9.y;
                            radius_02.y = (float)&UNK_?;
                            radius_02.x = radius.x;
                            radius_02.z._0_2_ = uVar26;
                            radius_02.z._2_2_ = uVar47;
                            uVar16 = uVar25;
                            IStack_9._0_4_ = uVar83;
                            MVSweptElipsoidCheck_HandleCube
                                      (vh,pos_00,radius_02,3.291329e-29,collisionState,
                                       (MethodInfo *)0x0);
                            iVar74 = IStack_9.z;
                            uVar82 = IStack_9._0_4_;
                            iVar75 = IStack_5.z;
                            IStack_84.x = IStack_5.x;
                            IStack_84.y = IStack_5.y;
                            if ((TypeInfo__MV__WorldObject__IntVector->_1).
                                cctor_finished_or_no_cctor == 0) {
                              _Stack_68.genericMethod =
                                   (Il2CppGenericMethod *)TypeInfo__MV__WorldObject__IntVector;
                              _Stack_6c.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
                              func_?();
                            }
                            this = (IntVector *)&UNK_?;
                            i1_03.z = (int16_t)uVar82;
                            i1_03._0_4_ = &pIStack_22;
                            i2_03.y = uVar16;
                            i2_03.x = iVar74;
                            i2_03.z = IStack_84.x;
                            IVar54 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                     IntVector_op_Addition
                                               (i1_03,i2_03,(MethodInfo *)CONCAT22(uVar15,iVar75));
                            _Stack_18.methodMetadataHandle = _Stack_18.methodMetadataHandle + -1;
                            IStack_9._0_4_ = *IVar54._0_4_;
                            IStack_9.z = *(int16_t *)(IVar54._0_4_ + 1);
                          } while (_Stack_18.rgctx_data != (Il2CppRGCTXData *)0x0);
                          _Stack_18.rgctx_data = (Il2CppRGCTXData *)0x0;
                        }
                        goto code_?;
                      }
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < 3);
                  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                  IStack_10.x = (pCVar63->fields).stepDir.x;
                  IStack_10.y = (pCVar63->fields).stepDir.y;
                  IStack_10.z = (pCVar63->fields).stepDir.z;
                  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pMVar41 = pMStack_31;
                  iVar75 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                     (&IStack_10,(int32_t)pMStack_31,(MethodInfo *)0x0);
                  uVar15 = 0;
                  iVar74 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                     (&IStack_5,(int32_t)pMVar41,(MethodInfo *)0x0);
                  if (iVar75 == iVar74) {
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?();
                    }
                    uVar85 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                                       (&IStack_9,(int32_t)pMVar41,(MethodInfo *)0x0);
                    this = (IntVector *)&UNK_?;
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                              (&IStack_9,(int32_t)pMVar41,(int16_t)((uint)uVar85 + iStack_77),
                               (MethodInfo *)0x0);
                  }
                  if (-1 < iStack_78) {
                    _Stack_18.rgctx_data = (Il2CppRGCTXData *)(iStack_78 + 1);
                    do {
                      iVar75 = IStack_9.z;
                      uVar82 = IStack_9._0_4_;
                      if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      uVar83 = IStack_9._0_4_;
                      pos.z = iVar75;
                      IStack_9.x = (int16_t)uVar82;
                      IStack_9.y = SUB42(uVar82,2);
                      pos.x = IStack_9.x;
                      pos.y = IStack_9.y;
                      radius_01.y = (float)&UNK_?;
                      radius_01.x = radius.x;
                      radius_01.z._0_2_ = uVar26;
                      radius_01.z._2_2_ = uVar47;
                      uVar16 = uVar25;
                      IStack_9._0_4_ = uVar83;
                      MVSweptElipsoidCheck_HandleCube
                                (vh,pos,radius_01,3.291329e-29,collisionState,(MethodInfo *)0x0);
                      iVar74 = IStack_9.z;
                      uVar82 = IStack_9._0_4_;
                      iVar75 = IStack_6.z;
                      IStack_84.x = IStack_6.x;
                      IStack_84.y = IStack_6.y;
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        _Stack_68.genericMethod =
                             (Il2CppGenericMethod *)TypeInfo__MV__WorldObject__IntVector;
                        _Stack_6c.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
                        func_?();
                      }
                      this = (IntVector *)&UNK_?;
                      i1_02.z = (int16_t)uVar82;
                      i1_02._0_4_ = &stack0xffffff70;
                      i2_02.y = uVar16;
                      i2_02.x = iVar74;
                      i2_02.z = IStack_84.x;
                      IVar54 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                         (i1_02,i2_02,(MethodInfo *)CONCAT22(uVar15,iVar75));
                      _Stack_18.methodMetadataHandle = _Stack_18.methodMetadataHandle + -1;
                      IStack_9._0_4_ = *IVar54._0_4_;
                      IStack_9.z = *(int16_t *)(IVar54._0_4_ + 1);
                    } while (_Stack_18.rgctx_data != (Il2CppRGCTXData *)0x0);
                    _Stack_18.rgctx_data = (Il2CppRGCTXData *)0x0;
                  }
                  goto code_?;
                }
                if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                auStack_52._2_4_ = *(undefined4 *)&(pCVar63->fields).voxelPos;
                IStack_9.x = (int16_t)auStack_52._2_4_;
                pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                uVar89 = (pCVar63->fields).voxelPos.y;
                IStack_9.y = uVar89;
                pCVar63 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar63 == (CellTraverser *)0x0) goto code_?;
                IStack_84.x = (pCVar63->fields).voxelPos.x;
                IStack_84.y = (pCVar63->fields).voxelPos.y;
                IStack_9.z = (pCVar63->fields).voxelPos.z;
              } while (collisionState->firstHitDetected == 0);
              iVar80 = collisionState->scanAxis;
              if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                        (&IStack_9,iVar80,(MethodInfo *)0x0);
              iVar13 = func_?();
              this = (IntVector *)&UNK_?;
              iVar90 = func_?();
            } while (iVar13 <= iVar90);
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
  pcVar91 = (code *)swi(3);
  bVar92 = (*pcVar91)();
  return bVar92;
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
  if (transform != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
              ((Vector3 *)&stack0xffffffd8,transform,(MethodInfo *)0x0);
    position.z = localBounds.m_Center.z;
    position.x = localBounds.m_Center.x;
    position.y = localBounds.m_Center.y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        (&localBounds.m_Extents,transform,position,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xffffffd8,(Vector3 *)&stack0xffffffcc,
                         (Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar5 = pVVar1->x;
    uVar6 = pVVar1->y;
    fVar7 = pVVar1->z;
    localBounds.m_Extents.y = (float)uVar5;
    localBounds.m_Extents.z = (float)uVar6;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc0,transform,(MethodInfo *)0x0);
    uVar8 = pVVar1->x;
    uVar9 = pVVar1->y;
    fVar10 = pVVar1->z;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffbc,transform,(MethodInfo *)0x0);
    fVar12 = pQVar11->x;
    fVar13 = pQVar11->y;
    fVar14 = pQVar11->z;
    fVar15 = pQVar11->w;
    if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray_00.m_Origin.y = ray.m_Origin.y + (fVar3 - (float)uVar9);
    ray_00.m_Origin.x = ray.m_Origin.x + (fVar2 - (float)uVar8);
    ray_00.m_Origin.z = ray.m_Origin.z + (fVar4 - fVar10);
    ray_00.m_Direction.x = ray.m_Direction.x;
    ray_00.m_Direction.y = ray.m_Direction.y;
    ray_00.m_Direction.z = ray.m_Direction.z;
    radius.y = localBounds.m_Extents.z;
    radius.x = localBounds.m_Extents.y;
    radius.z = fVar7;
    rotation.y = fVar13;
    rotation.x = fVar12;
    rotation.z = fVar14;
    rotation.w = fVar15;
    pLVar16 = MVSweptElipsoidCheck_MVElipsoidCast_3
                        (ray_00,radius,rotation,distance,all,ignoreWoIds,layerMask,(MethodInfo *)0x0
                        );
    return pLVar16;
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar16 = (List_1_VoxelHit_ *)(*pcVar17)();
  return pLVar16;
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
          (bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__Contains
                             ((HashSet_1_System_UInt32_ *)ignoreWoIds,(wo->fields)._.id,
                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_)
          , bVar20 == 0)))) {
        if (all != 0) {
          if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          this_01 = (HashSet_1_System_UInt32_ *)
                    TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
          if (this_01 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
          bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                  HashSet_1_System_UInt32__Contains
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
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  startOrigin.z = 0.0;
  uStack_9 = uVar6;
  if (cRam_? == '\0') {
    fStack_10 = fVar7;
    func_?(&TypeInfo__UnityEngine__Vector3,uVar3,uVar1,uVar2);
    cRam_? = '\x01';
  }
  fStack_10 = (float)((uint)dir.z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12 = (pVVar11->zeroVector).x;
  uVar13 = (pVVar11->zeroVector).y;
  value.y = (float)uVar12;
  value.x = (float)((uint)dir.x ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
           startOrigin.z);
      fVar7 = (float)((uint)dir.y ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
               startOrigin.z;
      fVar15 = (float)((uint)dir.z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
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
    uVar10 = _UNK_?;
    for (; (int)uVar7 < (int)axisAlignedRect->max_length; uVar7 = uVar7 + 1) {
      if (axisAlignedRect->max_length <= uVar7) goto code_?;
      fVar11 = pVVar2->x;
      fVar12 = pVVar2->y;
      fVar13 = pVVar2->z;
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
      localHit.z = (float)((uint)(fVar11 * VStack_3.x + fVar12 * VStack_3.y + fVar13 * VStack_3.z)
                          ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                          ) - (pMVar1->collisionPlane0).m_Distance;
      fStack_16 = VStack_3.z;
      if (cRam_? == '\0') {
        VStack_3.x = 3.293429e-29;
        VStack_3.y = 2.8404e-28;
        func_?();
        cRam_? = '\x01';
        uVar10 = _UNK_?;
      }
      fVar11 = (float)((uint)fStack_15 & uVar10);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar13 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
      fVar12 = fVar11 * _UNK_?;
      if (fVar11 * _UNK_? <= fVar13) {
        fVar12 = fVar13;
      }
      if (((fVar12 <= (float)((uint)(0.0 - fStack_15) & uVar10)) &&
          (fVar11 = localHit.z / fStack_15, 0.0 < fVar11)) && (localNormal.z < fVar11)) {
        localNormal.z = fVar11;
      }
      pVVar2 = pVVar2 + 1;
    }
    if (localNormal.z != 0.0) {
      fVar6 = (float)((uint)localNormal.z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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

