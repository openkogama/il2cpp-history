
/* Boolean FindAnimatedTexture() */

bool Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_FindAnimatedTexture
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).meshRenderer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
          iVar5 = (*(code *)(pTVar4->klass->vtable).get_height.method)();
          iVar6 = (*(code *)(pTVar4->klass->vtable).get_width.method)(pTVar4);
          (this->fields).offsetRatio = (float)iVar5 / (float)iVar6;
          func_?(&stack0xfffffff4);
          pRVar1 = (this->fields).meshRenderer;
          if (pRVar1 != (Renderer *)0x0) {
            pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar1,(MethodInfo *)0x0);
            if (pMVar3 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                        (pMVar3,StringLiteral__MainTex,(Vector2)0x0,(MethodInfo *)0x0);
              pRVar1 = (this->fields).skinnedRenderer;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                                ((Object_1 *)pRVar1,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
                    iVar5 = (*(code *)(pTVar4->klass->vtable).get_height.method)();
                    iVar6 = (*(code *)(pTVar4->klass->vtable).get_width.method)(pTVar4);
                    uVar7 = CONCAT44(0x3f800000,(float)iVar5 / (float)iVar6);
                    (this->fields).offsetRatio = (float)iVar5 / (float)iVar6;
                    func_?(&stack0xffffffec);
                    pRVar1 = (this->fields).skinnedRenderer;
                    if (pRVar1 != (Renderer *)0x0) {
                      value = (Vector2)(uVar7 & 0xffffffff00000000);
                      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                               Renderer_get_material(pRVar1,(MethodInfo *)0x0);
                      if (pMVar3 != (Material *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                                  (pMVar3,StringLiteral__MainTex,value,(MethodInfo *)0x0);
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
    pcVar8 = (code *)swi(3);
    bVar2 = (*pcVar8)();
    return bVar2;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Error_in_AnimatedTextureOffset__,(MethodInfo *)0x0);
  return 0;
}


/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_OnAvatarAnimationChange
               (AnimatedTextureOffset *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  b = (this->fields).triggerAnimationName;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality(newAnimation,b,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).textureOffsetAnimationDataList;
  while (pLVar1 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).textureOffsetAnimationDataList;
    if (pLVar1 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
    pAVar3 = mscorlib.dll::System::Collections::Generic::
             List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
             List_1_AnimatedTextureOffset_TextureOffsetAnimationData__get_Item
                       ((AnimatedTextureOffset_TextureOffsetAnimationData *)&stack0xffffffe4,pLVar1,
                        index,
                        MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                       );
    pLVar1 = (this->fields).textureOffsetAnimationDataList;
    uVar4 = pAVar3->textureOffset;
    uVar5 = pAVar3->frameToChangeTextureAt;
    value.frameToChangeTextureAt = (float)uVar5;
    value.textureOffset = (float)uVar4;
    uStack_6 = *(uint *)&pAVar3->hasAlreadyTransitioned & 0xffffff00;
    if (pLVar1 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
    value._8_4_ = uStack_6;
    mscorlib.dll::System::Collections::Generic::
    List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
    List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
              (pLVar1,index,value,
               MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
              );
    index = index + 1;
    pLVar1 = (this->fields).textureOffsetAnimationDataList;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetTextureOffset(Single) */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_SetTextureOffset
               (AnimatedTextureOffset *this,float offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).offsetRatio * offset;
  (this->fields).currentOffset = fVar1;
  if (fVar1 == (this->fields).previousOffset) {
    return;
  }
  func_?(&stack0xfffffff4,fVar1,0,0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isActive != 0) {
    fVar1 = (this->fields).timer;
    if (fVar1 <= 0.0) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      dStack_2 = (double)(fVar1 - (this->fields).animationStartTime);
      uStack_3 = (double)((this->fields).animationFrameAmount / _UNK_?);
      dStack_4 = dStack_2;
      uStack_5 = dStack_2;
      fVar6 = (float10)func_?();
      uStack_5 = (double)fVar6;
      if ((float)fVar6 < (this->fields).previousAnimationTime) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        iVar7 = 0;
        pLVar8 = (this->fields).textureOffsetAnimationDataList;
        while (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
          pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                             );
          if ((int)pOVar9 <= iVar7) goto code_?;
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
          if (pLVar8 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
          pAVar10 = mscorlib.dll::System::Collections::Generic::
                   List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
                   List_1_AnimatedTextureOffset_TextureOffsetAnimationData__get_Item
                             (&AStack_11,pLVar8,iVar7,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                             );
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
          uVar12 = pAVar10->textureOffset;
          uVar13 = pAVar10->frameToChangeTextureAt;
          value.frameToChangeTextureAt = (float)uVar13;
          value.textureOffset = (float)uVar12;
          uStack_5._5_3_ = (undefined3)((uint)*(undefined4 *)&pAVar10->hasAlreadyTransitioned >> 8);
          uStack_5._0_5_ = (uint5)(uint)uStack_5;
          if (pLVar8 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
          value._8_4_ = uStack_5._4_4_;
          mscorlib.dll::System::Collections::Generic::
          List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
          List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
                    (pLVar8,iVar7,value,
                     MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                    );
          iVar7 = iVar7 + 1;
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
        }
      }
      else {
code_?:
        iVar7 = 0;
        pLVar8 = (this->fields).textureOffsetAnimationDataList;
        while (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
          pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                             );
          if ((int)pOVar9 <= iVar7) {
code_?:
            dStack_4 = (double)((this->fields).animationFrameAmount / _UNK_?);
            fVar6 = (float10)func_?();
            (this->fields).timer = 0.1;
            (this->fields).previousAnimationTime = (float)fVar6;
            return;
          }
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
          if (pLVar8 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
          pAVar10 = mscorlib.dll::System::Collections::Generic::
                   List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
                   List_1_AnimatedTextureOffset_TextureOffsetAnimationData__get_Item
                             (&AStack_14,pLVar8,iVar7,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                             );
          uVar15 = pAVar10->textureOffset;
          uVar16 = pAVar10->frameToChangeTextureAt;
          fVar1 = (float)uVar16 / _UNK_?;
          uStack_5 = (double)((this->fields).animationFrameAmount / _UNK_?);
          AStack_14.textureOffset = (float)&UNK_?;
          uStack_17 = uVar15;
          uStack_3._0_4_ = (float)uVar16;
          fVar6 = (float10)func_?();
          uStack_5 = (double)fVar6;
          if (fVar1 < (float)fVar6) {
            pLVar8 = (this->fields).textureOffsetAnimationDataList;
            if (pLVar8 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            puVar18 = (undefined8 *)
                     func_?(auStack_19,pLVar8,iVar7,
                                     MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                    );
            AStack_11._0_8_ = *puVar18;
            AStack_11._8_4_ = *(undefined4 *)(puVar18 + 1);
            if (AStack_11.hasAlreadyTransitioned == 0) {
              pLVar8 = (this->fields).textureOffsetAnimationDataList;
              if (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                puVar18 = (undefined8 *)
                         func_?(auStack_19,pLVar8,iVar7,
                                         MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                        );
                pLVar8 = (this->fields).textureOffsetAnimationDataList;
                AStack_11._9_3_ = SUB43((uint)*(undefined4 *)(puVar18 + 1) >> 8,0);
                AStack_11.hasAlreadyTransitioned = 1;
                if (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                  value_00.hasAlreadyTransitioned = 1;
                  value_00._9_3_ = AStack_11._9_3_;
                  value_00._0_8_ = *puVar18;
                  mscorlib.dll::System::Collections::Generic::
                  List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
                  List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
                            (pLVar8,iVar7,value_00,
                             MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                            );
                  pLVar8 = (this->fields).textureOffsetAnimationDataList;
                  if (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                    puVar18 = (undefined8 *)
                             func_?(auStack_19,pLVar8,iVar7,
                                             MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                            );
                    AStack_11._0_8_ = *puVar18;
                    AnimatedTextureOffset_SetTextureOffset
                              (this,AStack_11.textureOffset,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              break;
            }
          }
          iVar7 = iVar7 + 1;
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
        }
      }
      func_?(0);
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).timer = fVar1 - fVar21;
  }
  return;
}


/* Void UpdateAnimatedTextureOffset() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_UpdateAnimatedTextureOffset
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isActive != 0) {
    fVar1 = (this->fields).timer;
    if (fVar1 <= 0.0) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      dStack_2 = (double)(fVar1 - (this->fields).animationStartTime);
      uStack_3 = (double)((this->fields).animationFrameAmount / _UNK_?);
      dStack_4 = dStack_2;
      uStack_5 = dStack_2;
      fVar6 = (float10)func_?();
      uStack_5 = (double)fVar6;
      if ((float)fVar6 < (this->fields).previousAnimationTime) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        iVar7 = 0;
        pLVar8 = (this->fields).textureOffsetAnimationDataList;
        while (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
          pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                             );
          if ((int)pOVar9 <= iVar7) goto code_?;
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
          if (pLVar8 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
          pAVar10 = mscorlib.dll::System::Collections::Generic::
                   List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
                   List_1_AnimatedTextureOffset_TextureOffsetAnimationData__get_Item
                             (&AStack_11,pLVar8,iVar7,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                             );
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
          uVar12 = pAVar10->textureOffset;
          uVar13 = pAVar10->frameToChangeTextureAt;
          value.frameToChangeTextureAt = (float)uVar13;
          value.textureOffset = (float)uVar12;
          uStack_5._5_3_ = (undefined3)((uint)*(undefined4 *)&pAVar10->hasAlreadyTransitioned >> 8);
          uStack_5._0_5_ = (uint5)(uint)uStack_5;
          if (pLVar8 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
          value._8_4_ = uStack_5._4_4_;
          mscorlib.dll::System::Collections::Generic::
          List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
          List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
                    (pLVar8,iVar7,value,
                     MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                    );
          iVar7 = iVar7 + 1;
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
        }
      }
      else {
code_?:
        iVar7 = 0;
        pLVar8 = (this->fields).textureOffsetAnimationDataList;
        while (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
          pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                             );
          if ((int)pOVar9 <= iVar7) {
code_?:
            dStack_4 = (double)((this->fields).animationFrameAmount / _UNK_?);
            fVar6 = (float10)func_?();
            (this->fields).timer = 0.1;
            (this->fields).previousAnimationTime = (float)fVar6;
            return;
          }
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
          if (pLVar8 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
          pAVar10 = mscorlib.dll::System::Collections::Generic::
                   List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
                   List_1_AnimatedTextureOffset_TextureOffsetAnimationData__get_Item
                             (&AStack_14,pLVar8,iVar7,
                              MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                             );
          uVar15 = pAVar10->textureOffset;
          uVar16 = pAVar10->frameToChangeTextureAt;
          fVar1 = (float)uVar16 / _UNK_?;
          uStack_5 = (double)((this->fields).animationFrameAmount / _UNK_?);
          AStack_14.textureOffset = (float)&UNK_?;
          uStack_17 = uVar15;
          uStack_3._0_4_ = (float)uVar16;
          fVar6 = (float10)func_?();
          uStack_5 = (double)fVar6;
          if (fVar1 < (float)fVar6) {
            pLVar8 = (this->fields).textureOffsetAnimationDataList;
            if (pLVar8 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            puVar18 = (undefined8 *)
                     func_?(auStack_19,pLVar8,iVar7,
                                     MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                    );
            AStack_11._0_8_ = *puVar18;
            AStack_11._8_4_ = *(undefined4 *)(puVar18 + 1);
            if (AStack_11.hasAlreadyTransitioned == 0) {
              pLVar8 = (this->fields).textureOffsetAnimationDataList;
              if (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                puVar18 = (undefined8 *)
                         func_?(auStack_19,pLVar8,iVar7,
                                         MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                        );
                pLVar8 = (this->fields).textureOffsetAnimationDataList;
                AStack_11._9_3_ = SUB43((uint)*(undefined4 *)(puVar18 + 1) >> 8,0);
                AStack_11.hasAlreadyTransitioned = 1;
                if (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                  value_00.hasAlreadyTransitioned = 1;
                  value_00._9_3_ = AStack_11._9_3_;
                  value_00._0_8_ = *puVar18;
                  mscorlib.dll::System::Collections::Generic::
                  List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
                  List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
                            (pLVar8,iVar7,value_00,
                             MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                            );
                  pLVar8 = (this->fields).textureOffsetAnimationDataList;
                  if (pLVar8 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
                    puVar18 = (undefined8 *)
                             func_?(auStack_19,pLVar8,iVar7,
                                             MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                                            );
                    AStack_11._0_8_ = *puVar18;
                    AnimatedTextureOffset_SetTextureOffset
                              (this,AStack_11.textureOffset,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              break;
            }
          }
          iVar7 = iVar7 + 1;
          pLVar8 = (this->fields).textureOffsetAnimationDataList;
        }
      }
      func_?(0);
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).timer = fVar1 - fVar21;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

