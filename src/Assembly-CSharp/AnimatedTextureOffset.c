
/* Boolean FindAnimatedTexture() */

bool Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_FindAnimatedTexture
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__MainTex);
    func_?(&StringLiteral_Error_in_AnimatedTextureOffset__);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar1 = (this->fields).meshRenderer;
    if (pRVar1 != (Renderer *)0x0) {
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar1,(MethodInfo *)0x0);
      if (pMVar3 != (Material *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                           (pMVar3,(MethodInfo *)0x0);
        if (pTVar4 != (Texture *)0x0) {
          iVar5 = (*(code *)(pTVar4->klass->vtable).get_height.method)
                            (pTVar4,(pTVar4->klass->vtable).set_height.methodPtr);
          iVar6 = (*(code *)(pTVar4->klass->vtable).get_width.method)
                            (pTVar4,(pTVar4->klass->vtable).set_width.methodPtr);
          fVar7 = 1.0;
          pRVar1 = (this->fields).meshRenderer;
          fVar8 = (float)iVar5 / (float)iVar6;
          (this->fields).offsetRatio = fVar8;
          if (pRVar1 != (Renderer *)0x0) {
            pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar1,(MethodInfo *)0x0);
            if (pMVar3 != (Material *)0x0) {
              value.y = fVar7;
              value.x = fVar8;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                        (pMVar3,StringLiteral__MainTex,value,(MethodInfo *)0x0);
              pRVar1 = (this->fields).skinnedRenderer;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                                ((Object_1 *)pRVar1,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_Error_in_AnimatedTextureOffset__,
                           (MethodInfo *)0x0);
                return 0;
              }
              pRVar1 = (this->fields).skinnedRenderer;
              if (pRVar1 != (Renderer *)0x0) {
                pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   (pRVar1,(MethodInfo *)0x0);
                if (pMVar3 != (Material *)0x0) {
                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                           Material_get_mainTexture(pMVar3,(MethodInfo *)0x0);
                  if (pTVar4 != (Texture *)0x0) {
                    iVar5 = (*(code *)(pTVar4->klass->vtable).get_height.method)
                                      (pTVar4,(pTVar4->klass->vtable).set_height.methodPtr);
                    iVar6 = (*(code *)(pTVar4->klass->vtable).get_width.method)
                                      (pTVar4,(pTVar4->klass->vtable).set_width.methodPtr);
                    fVar8 = 1.0;
                    pRVar1 = (this->fields).skinnedRenderer;
                    (this->fields).offsetRatio = (float)iVar5 / (float)iVar6;
                    if (pRVar1 != (Renderer *)0x0) {
                      fVar7 = 0.0;
                      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                               Renderer_get_material(pRVar1,(MethodInfo *)0x0);
                      if (pMVar3 != (Material *)0x0) {
                        value_00.y = fVar8;
                        value_00.x = fVar7;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                                  (pMVar3,StringLiteral__MainTex,value_00,(MethodInfo *)0x0);
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
    pcVar9 = (code *)swi(3);
    bVar2 = (*pcVar9)();
    return bVar2;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Error_in_AnimatedTextureOffset__,(MethodInfo *)0x0);
  return 0;
}


/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_OnAvatarAnimationChange
               (AnimatedTextureOffset *this,String *newAnimation,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (newAnimation,(this->fields).triggerAnimationName,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields).isActive = 0;
    AnimatedTextureOffset_SetTextureOffset(this,0.0,(MethodInfo *)0x0);
    return;
  }
  (this->fields).isActive = 1;
  (this->fields).timer = 0.0;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).animationStartTime = fVar2;
  return;
}


/* Void ResetTextureOffsets() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_ResetTextureOffsets
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            (this->fields).textureOffsetAnimationDataList;
  while (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    if ((this_00->fields)._size <= index) {
      return;
    }
    if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,this_00,index,
                        MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                       );
    this_01 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
              (this->fields).textureOffsetAnimationDataList;
    uVar2 = pVVar1->alias;
    uVar3 = pVVar1->path;
    value.FirstAxisSign = uVar3;
    value.Quadrant = uVar2;
    uStack_4 = (uint)pVVar1->asset & 0xffffff00;
    if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
    value.SecondAxisSign = uStack_4;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              (this_01,index,value,
               MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
              );
    index = index + 1;
    this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
              (this->fields).textureOffsetAnimationDataList;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTextureOffset(Single) */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_SetTextureOffset
               (AnimatedTextureOffset *this,float offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  fVar1 = offset * (this->fields).offsetRatio;
  (this->fields).currentOffset = fVar1;
  if (fVar1 == (this->fields).previousOffset) {
    return;
  }
  this_00 = (this->fields).skinnedRenderer;
  if ((this_00 != (Renderer *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (this_00,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
              (this_01,StringLiteral__MainTex,(Vector2)0x0,(MethodInfo *)0x0);
    (this->fields).previousOffset = (this->fields).currentOffset;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_Start
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  ActivateOnAnimationBase::ActivateOnAnimationBase_Start
            ((ActivateOnAnimationBase *)this,(MethodInfo *)0x0);
  value = AnimatedTextureOffset_FindAnimatedTexture(this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,value,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_Update
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).isActive != 0) {
    fVar1 = (this->fields).timer;
    if (fVar1 <= 0.0) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      uStack_2 = (double)((this->fields).animationFrameAmount / _UNK_?);
      fVar3 = (float10)func_?();
      uStack_2 = (double)fVar3;
      if ((float)fVar3 < (this->fields).previousAnimationTime) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                         );
          cRam_? = '\x01';
        }
        iVar4 = 0;
        pLVar5 = (this->fields).textureOffsetAnimationDataList;
        while (pLVar5 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
          if ((pLVar5->fields)._size <= iVar4) goto code_?;
          pLVar6 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                   (this->fields).textureOffsetAnimationDataList;
          if (pLVar6 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
          pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_8,pLVar6,iVar4,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                             );
          pLVar9 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                   (this->fields).textureOffsetAnimationDataList;
          uVar10 = pVVar7->alias;
          uVar11 = pVVar7->path;
          value_00.FirstAxisSign = uVar11;
          value_00.Quadrant = uVar10;
          uStack_12._5_3_ = (undefined3)((uint)pVVar7->asset >> 8);
          uStack_12._0_5_ = (uint5)(uint)uStack_12;
          if (pLVar9 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
          value_00.SecondAxisSign = uStack_12._4_4_;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    (pLVar9,iVar4,value_00,
                     MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                    );
          iVar4 = iVar4 + 1;
          pLVar5 = (this->fields).textureOffsetAnimationDataList;
        }
      }
      else {
code_?:
        iVar4 = 0;
        pLVar5 = (this->fields).textureOffsetAnimationDataList;
        while (pLVar5 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
          if ((pLVar5->fields)._size <= iVar4) {
code_?:
            uStack_12 = (double)((this->fields).animationFrameAmount / _UNK_?);
            fVar3 = (float10)func_?();
            (this->fields).previousAnimationTime = (float)fVar3;
            (this->fields).timer = 0.1;
            return;
          }
          pLVar6 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                   (this->fields).textureOffsetAnimationDataList;
          if (pLVar6 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
          pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_13,pLVar6,iVar4,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                             );
          VStack_8.alias = pVVar7->alias;
          VStack_8.path = pVVar7->path;
          VStack_8.asset = pVVar7->asset;
          uStack_2 = (double)CONCAT44((float)VStack_8.path / _UNK_?,(undefined4)uStack_2);
          uStack_12 = (double)((this->fields).animationFrameAmount / _UNK_?);
          fVar3 = (float10)func_?();
          uStack_12 = (double)fVar3;
          if (uStack_2._4_4_ < (float)fVar3) {
            pLVar5 = (this->fields).textureOffsetAnimationDataList;
            if (pLVar5 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            iVar14 = func_?(&stack0xffffffc4,pLVar5,iVar4,
                                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                   );
            if (*(char *)(iVar14 + 8) == '\0') {
              pLVar5 = (this->fields).textureOffsetAnimationDataList;
              if (pLVar5 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                puVar15 = (undefined8 *)
                          func_?(&stack0xffffffc4,pLVar5,iVar4,
                                          MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                         );
                pLVar9 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                         (this->fields).textureOffsetAnimationDataList;
                VStack_8.asset =
                     (VisualTreeAsset *)CONCAT31((int3)((uint)*(undefined4 *)(puVar15 + 1) >> 8),1);
                if (pLVar9 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
                  value.SecondAxisSign = (int32_t)VStack_8.asset;
                  value._0_8_ = *puVar15;
                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                            (pLVar9,iVar4,value,
                             MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                            );
                  pLVar5 = (this->fields).textureOffsetAnimationDataList;
                  if (pLVar5 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                    pfVar16 = (float *)func_?(&stack0xffffffc4,pLVar5,iVar4,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                                  );
                    AnimatedTextureOffset_SetTextureOffset(this,*pfVar16,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              break;
            }
          }
          iVar4 = iVar4 + 1;
          pLVar5 = (this->fields).textureOffsetAnimationDataList;
        }
      }
      func_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).timer = fVar1 - fVar18;
  }
  return;
}


/* Void UpdateAnimatedTextureOffset() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_UpdateAnimatedTextureOffset
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).isActive != 0) {
    fVar1 = (this->fields).timer;
    if (fVar1 <= 0.0) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      uStack_2 = (double)((this->fields).animationFrameAmount / _UNK_?);
      fVar3 = (float10)func_?();
      uStack_2 = (double)fVar3;
      if ((float)fVar3 < (this->fields).previousAnimationTime) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                         );
          cRam_? = '\x01';
        }
        iVar4 = 0;
        pLVar5 = (this->fields).textureOffsetAnimationDataList;
        while (pLVar5 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
          if ((pLVar5->fields)._size <= iVar4) goto code_?;
          pLVar6 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                   (this->fields).textureOffsetAnimationDataList;
          if (pLVar6 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
          pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_8,pLVar6,iVar4,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                             );
          pLVar9 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                   (this->fields).textureOffsetAnimationDataList;
          uVar10 = pVVar7->alias;
          uVar11 = pVVar7->path;
          value_00.FirstAxisSign = uVar11;
          value_00.Quadrant = uVar10;
          uStack_12._5_3_ = (undefined3)((uint)pVVar7->asset >> 8);
          uStack_12._0_5_ = (uint5)(uint)uStack_12;
          if (pLVar9 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
          value_00.SecondAxisSign = uStack_12._4_4_;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    (pLVar9,iVar4,value_00,
                     MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                    );
          iVar4 = iVar4 + 1;
          pLVar5 = (this->fields).textureOffsetAnimationDataList;
        }
      }
      else {
code_?:
        iVar4 = 0;
        pLVar5 = (this->fields).textureOffsetAnimationDataList;
        while (pLVar5 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
          if ((pLVar5->fields)._size <= iVar4) {
code_?:
            uStack_12 = (double)((this->fields).animationFrameAmount / _UNK_?);
            fVar3 = (float10)func_?();
            (this->fields).previousAnimationTime = (float)fVar3;
            (this->fields).timer = 0.1;
            return;
          }
          pLVar6 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                   (this->fields).textureOffsetAnimationDataList;
          if (pLVar6 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
          pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_13,pLVar6,iVar4,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                             );
          VStack_8.alias = pVVar7->alias;
          VStack_8.path = pVVar7->path;
          VStack_8.asset = pVVar7->asset;
          uStack_2 = (double)CONCAT44((float)VStack_8.path / _UNK_?,(undefined4)uStack_2);
          uStack_12 = (double)((this->fields).animationFrameAmount / _UNK_?);
          fVar3 = (float10)func_?();
          uStack_12 = (double)fVar3;
          if (uStack_2._4_4_ < (float)fVar3) {
            pLVar5 = (this->fields).textureOffsetAnimationDataList;
            if (pLVar5 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            iVar14 = func_?(&stack0xffffffc4,pLVar5,iVar4,
                                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                   );
            if (*(char *)(iVar14 + 8) == '\0') {
              pLVar5 = (this->fields).textureOffsetAnimationDataList;
              if (pLVar5 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                puVar15 = (undefined8 *)
                          func_?(&stack0xffffffc4,pLVar5,iVar4,
                                          MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                         );
                pLVar9 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                         (this->fields).textureOffsetAnimationDataList;
                VStack_8.asset =
                     (VisualTreeAsset *)CONCAT31((int3)((uint)*(undefined4 *)(puVar15 + 1) >> 8),1);
                if (pLVar9 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
                  value.SecondAxisSign = (int32_t)VStack_8.asset;
                  value._0_8_ = *puVar15;
                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                            (pLVar9,iVar4,value,
                             MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                            );
                  pLVar5 = (this->fields).textureOffsetAnimationDataList;
                  if (pLVar5 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                    pfVar16 = (float *)func_?(&stack0xffffffc4,pLVar5,iVar4,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                                  );
                    AnimatedTextureOffset_SetTextureOffset(this,*pfVar16,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              break;
            }
          }
          iVar4 = iVar4 + 1;
          pLVar5 = (this->fields).textureOffsetAnimationDataList;
        }
      }
      func_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).timer = fVar1 - fVar18;
  }
  return;
}


/* AnimatedTextureOffset() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset__ctor
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  (this->fields).animationFrameAmount = 24.0;
  (this->fields).offsetRatio = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

