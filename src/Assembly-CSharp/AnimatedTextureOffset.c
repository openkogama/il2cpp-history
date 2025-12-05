
/* Boolean FindAnimatedTexture() */

bool Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_FindAnimatedTexture
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__MainTex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error_in_AnimatedTextureOffset__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).meshRenderer;
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
  if (pRVar1 != (Renderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar1 = (this->fields).meshRenderer;
      if (((pRVar1 != (Renderer *)0x0) &&
          (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              (pRVar1,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                             (pMVar2,(MethodInfo *)0x0), pTVar3 != (Texture *)0x0)) {
        iVar4 = (*(pTVar3->klass->vtable).get_height.methodPtr)
                          (pTVar3,(pTVar3->klass->vtable).get_height.method);
        iVar5 = (*(pTVar3->klass->vtable).get_width.methodPtr)(pTVar3);
        pRVar1 = (this->fields).meshRenderer;
        (this->fields).offsetRatio = (float)iVar4 / (float)iVar5;
        if ((pRVar1 != (Renderer *)0x0) &&
           (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar1,(MethodInfo *)0x0), fVar6 = _UNK_?,
           pMVar2 != (Material *)0x0)) {
          iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__MainTex,(MethodInfo *)0x0);
          scale.y = fVar6;
          scale.x = (float)iVar4 / (float)iVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScaleImpl
                    (pMVar2,iVar7,scale,(MethodInfo *)0x0);
          pRVar1 = (this->fields).skinnedRenderer;
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
          if (pRVar1 != (Renderer *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pRVar1->fields)._._.m_CachedPtr != (void *)0x0) {
              pRVar1 = (this->fields).skinnedRenderer;
              if (((pRVar1 != (Renderer *)0x0) &&
                  (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                      (pRVar1,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) &&
                 (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                           Material_get_mainTexture(pMVar2,(MethodInfo *)0x0),
                 pTVar3 != (Texture *)0x0)) {
                iVar4 = (*(pTVar3->klass->vtable).get_height.methodPtr)
                                  (pTVar3,(pTVar3->klass->vtable).get_height.method);
                iVar5 = (*(pTVar3->klass->vtable).get_width.methodPtr)(pTVar3);
                pRVar1 = (this->fields).skinnedRenderer;
                (this->fields).offsetRatio = (float)iVar4 / (float)iVar5;
                if ((pRVar1 != (Renderer *)0x0) &&
                   (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                             Renderer_get_material(pRVar1,(MethodInfo *)0x0),
                   pMVar2 != (Material *)0x0)) {
                  iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                    (StringLiteral__MainTex,(MethodInfo *)0x0);
                  scale_00.y = fVar6;
                  scale_00.x = (float)iVar4 / (float)iVar5;
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScaleImpl
                            (pMVar2,iVar7,scale_00,(MethodInfo *)0x0);
                  return 1;
                }
              }
              goto DAT_?;
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Error_in_AnimatedTextureOffset__,(MethodInfo *)0x0);
          return 0;
        }
      }
DAT_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Error_in_AnimatedTextureOffset__,(MethodInfo *)0x0);
  return 0;
}


/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_OnAvatarAnimationChange
               (AnimatedTextureOffset *this,String *newAnimation,MethodInfo *method)

{
  pSVar1 = (this->fields).triggerAnimationName;
  if ((newAnimation != pSVar1) &&
     ((((newAnimation == (String *)0x0 || (pSVar1 == (String *)0x0)) ||
       ((newAnimation->fields)._stringLength != (pSVar1->fields)._stringLength)) ||
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(newAnimation->fields)._firstChar,
                          (uint8_t *)&(pSVar1->fields)._firstChar,
                          (longlong)(newAnimation->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 == 0)))) {
    (this->fields).isActive = 0;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__MainTex,0,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar3 = (this->fields).offsetRatio * 0.0;
    (this->fields).currentOffset = fVar3;
    if (fVar3 != (this->fields).previousOffset) {
      this_00 = (this->fields).skinnedRenderer;
      if ((this_00 == (Renderer *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              (this_00,(MethodInfo *)0x0), this_01 == (Material *)0x0)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                       (StringLiteral__MainTex,(MethodInfo *)0x0);
      offset.y = 0.0;
      offset.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
                (this_01,name,offset,(MethodInfo *)0x0);
      (this->fields).previousOffset = (this->fields).currentOffset;
    }
    return;
  }
  pcVar4 = pcRam_?;
  (this->fields).isActive = 1;
  (this->fields).timer = 0.0;
  pcVar5 = pcRam_?;
  if ((pcVar4 == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar5 = pcVar4, pcVar4 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar5;
  fVar3 = (float)(*pcVar4)();
  (this->fields).animationStartTime = fVar3;
  return;
}


/* Void ResetTextureOffsets() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_ResetTextureOffsets
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pLVar2 = (this->fields).textureOffsetAnimationDataList;
  uVar3 = uVar1;
  while (pLVar2 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
    uVar4 = (uint)uVar3;
    if ((pLVar2->fields)._size <= (int)uVar4) {
      return;
    }
    if (pLVar2 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
    if ((uint)(pLVar2->fields)._size <= uVar4) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar6 = (pLVar2->fields)._items;
    if (pAVar6 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
    if ((uint)pAVar6->max_length <= uVar4) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((uint)(pLVar2->fields)._size <= uVar4) goto code_?;
    pAVar7 = (pLVar2->fields)._items;
    uStack_8 = *(uint *)(&pAVar6->vector[0].hasAlreadyTransitioned + uVar1) & 0xffffff00;
    if (pAVar7 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
    if ((uint)pAVar7->max_length <= uVar4) goto code_?;
    *(undefined8 *)((longlong)&pAVar7->vector[0].textureOffset + uVar1) =
         *(undefined8 *)((longlong)&pAVar6->vector[0].textureOffset + uVar1);
    *(uint *)(&pAVar7->vector[0].hasAlreadyTransitioned + uVar1) = uStack_8;
    uVar1 = uVar1 + 0xc;
    piVar9 = &(pLVar2->fields)._version;
    *piVar9 = *piVar9 + 1;
    uVar3 = (ulonglong)(uVar4 + 1);
    pLVar2 = (this->fields).textureOffsetAnimationDataList;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTextureOffset(Single) */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_SetTextureOffset
               (AnimatedTextureOffset *this,float offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MainTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = offset * (this->fields).offsetRatio;
  (this->fields).currentOffset = fVar1;
  if (fVar1 != (this->fields).previousOffset) {
    this_00 = (this->fields).skinnedRenderer;
    if ((this_00 == (Renderer *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (this_00,(MethodInfo *)0x0), this_01 == (Material *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                     (StringLiteral__MainTex,(MethodInfo *)0x0);
    offset_00.y = 0.0;
    offset_00.x = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
              (this_01,name,offset_00,(MethodInfo *)0x0);
    (this->fields).previousOffset = (this->fields).currentOffset;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_Start
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  ActivateOnAnimationBase::ActivateOnAnimationBase_Start
            ((ActivateOnAnimationBase *)this,(MethodInfo *)0x0);
  bVar1 = AnimatedTextureOffset_FindAnimatedTexture(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,bVar1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (AnimatedTextureOffset *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,bVar1);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_Update
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isActive == 0) {
    return;
  }
  if (0.0 < (this->fields).timer) {
    fVar1 = (this->fields).timer;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    (this->fields).timer = fVar1 - fVar4;
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar1 = _UNK_?;
  fVar4 = fVar4 - (this->fields).animationStartTime;
  fVar5 = (float)FUN_?(fVar4,(this->fields).animationFrameAmount / _UNK_?);
  uVar6 = 0;
  if (fVar5 < (this->fields).previousAnimationTime) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar7 = (this->fields).textureOffsetAnimationDataList;
    uVar8 = uVar6;
    uVar9 = uVar6;
    while (pLVar7 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
      uVar10 = (uint)uVar9;
      if ((pLVar7->fields)._size <= (int)uVar10) goto code_?;
      pLVar7 = (this->fields).textureOffsetAnimationDataList;
      if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
      if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
      pAVar11 = (pLVar7->fields)._items;
      if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
      if ((uint)pAVar11->max_length <= uVar10) goto code_?;
      pLVar7 = (this->fields).textureOffsetAnimationDataList;
      if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
      if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
      pAVar12 = (pLVar7->fields)._items;
      uStack_13 = *(uint *)(&pAVar11->vector[0].hasAlreadyTransitioned + uVar8) & 0xffffff00;
      if (pAVar12 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
      if ((uint)pAVar12->max_length <= uVar10) goto code_?;
      *(undefined8 *)((longlong)&pAVar12->vector[0].textureOffset + uVar8) =
           *(undefined8 *)((longlong)&pAVar11->vector[0].textureOffset + uVar8);
      *(uint *)(&pAVar12->vector[0].hasAlreadyTransitioned + uVar8) = uStack_13;
      uVar8 = uVar8 + 0xc;
      piVar14 = &(pLVar7->fields)._version;
      *piVar14 = *piVar14 + 1;
      uVar9 = (ulonglong)(uVar10 + 1);
      pLVar7 = (this->fields).textureOffsetAnimationDataList;
    }
  }
  else {
code_?:
    pLVar7 = (this->fields).textureOffsetAnimationDataList;
    if (pLVar7 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
      iVar15 = (pLVar7->fields)._size;
      uVar8 = uVar6;
      do {
        uVar10 = (uint)uVar6;
        if (iVar15 <= (int)uVar10) {
code_?:
          fVar1 = (float)FUN_?(fVar4,(this->fields).animationFrameAmount / fVar1);
          (this->fields).previousAnimationTime = fVar1;
          (this->fields).timer = 0.1;
          return;
        }
        if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
        pAVar11 = (pLVar7->fields)._items;
        if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
        if ((uint)pAVar11->max_length <= uVar10) goto code_?;
        uVar3 = *(undefined8 *)((longlong)&pAVar11->vector[0].textureOffset + uVar8);
        fVar5 = (float)FUN_?(fVar4,(this->fields).animationFrameAmount / fVar1);
        if ((float)((ulonglong)uVar3 >> 0x20) / fVar1 < fVar5) {
          if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
          pAVar11 = (pLVar7->fields)._items;
          if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
          if ((uint)pAVar11->max_length <= uVar10) goto code_?;
          if ((&pAVar11->vector[0].hasAlreadyTransitioned)[uVar8] == 0) {
            if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
            if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
            if ((uint)pAVar11->max_length <= uVar10) goto code_?;
            fVar5 = pAVar11->vector[(int)uVar10].frameToChangeTextureAt;
            if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
            pAVar12 = (pLVar7->fields)._items;
            uStack_13 = CONCAT31((int3)((uint)*(undefined4 *)
                                               &pAVar11->vector[(int)uVar10].hasAlreadyTransitioned >>
                                       8),1);
            if (pAVar12 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
            if ((uint)pAVar12->max_length <= uVar10) goto code_?;
            pAVar12->vector[(int)uVar10].textureOffset = pAVar11->vector[(int)uVar10].textureOffset;
            pAVar12->vector[(int)uVar10].frameToChangeTextureAt = fVar5;
            *(uint *)&pAVar12->vector[(int)uVar10].hasAlreadyTransitioned = uStack_13;
            piVar14 = &(pLVar7->fields)._version;
            *piVar14 = *piVar14 + 1;
            pLVar7 = (this->fields).textureOffsetAnimationDataList;
            if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            if ((uint)(pLVar7->fields)._size <= uVar10) {
DAT_?:
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pAVar11 = (pLVar7->fields)._items;
            if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
            if ((uint)pAVar11->max_length <= uVar10) {
code_?:
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            offset = pAVar11->vector[(int)uVar10].textureOffset;
            AnimatedTextureOffset_SetTextureOffset(this,(float)offset,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        uVar6 = (ulonglong)(uVar10 + 1);
        uVar8 = uVar8 + 0xc;
      } while( true );
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateAnimatedTextureOffset() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset_UpdateAnimatedTextureOffset
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isActive == 0) {
    return;
  }
  if (0.0 < (this->fields).timer) {
    fVar1 = (this->fields).timer;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    (this->fields).timer = fVar1 - fVar4;
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar1 = _UNK_?;
  fVar4 = fVar4 - (this->fields).animationStartTime;
  fVar5 = (float)FUN_?(fVar4,(this->fields).animationFrameAmount / _UNK_?);
  uVar6 = 0;
  if (fVar5 < (this->fields).previousAnimationTime) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AnimatedTextureOffset::TextureOffsetAnimationData>__set_Item_int__AnimatedTextureOffset__TextureOffsetAnimationData_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar7 = (this->fields).textureOffsetAnimationDataList;
    uVar8 = uVar6;
    uVar9 = uVar6;
    while (pLVar7 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
      uVar10 = (uint)uVar9;
      if ((pLVar7->fields)._size <= (int)uVar10) goto code_?;
      pLVar7 = (this->fields).textureOffsetAnimationDataList;
      if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
      if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
      pAVar11 = (pLVar7->fields)._items;
      if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
      if ((uint)pAVar11->max_length <= uVar10) goto code_?;
      pLVar7 = (this->fields).textureOffsetAnimationDataList;
      if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
      if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
      pAVar12 = (pLVar7->fields)._items;
      uStack_13 = *(uint *)(&pAVar11->vector[0].hasAlreadyTransitioned + uVar8) & 0xffffff00;
      if (pAVar12 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
      if ((uint)pAVar12->max_length <= uVar10) goto code_?;
      *(undefined8 *)((longlong)&pAVar12->vector[0].textureOffset + uVar8) =
           *(undefined8 *)((longlong)&pAVar11->vector[0].textureOffset + uVar8);
      *(uint *)(&pAVar12->vector[0].hasAlreadyTransitioned + uVar8) = uStack_13;
      uVar8 = uVar8 + 0xc;
      piVar14 = &(pLVar7->fields)._version;
      *piVar14 = *piVar14 + 1;
      uVar9 = (ulonglong)(uVar10 + 1);
      pLVar7 = (this->fields).textureOffsetAnimationDataList;
    }
  }
  else {
code_?:
    pLVar7 = (this->fields).textureOffsetAnimationDataList;
    if (pLVar7 != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) {
      iVar15 = (pLVar7->fields)._size;
      uVar8 = uVar6;
      do {
        uVar10 = (uint)uVar6;
        if (iVar15 <= (int)uVar10) {
code_?:
          fVar1 = (float)FUN_?(fVar4,(this->fields).animationFrameAmount / fVar1);
          (this->fields).previousAnimationTime = fVar1;
          (this->fields).timer = 0.1;
          return;
        }
        if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
        pAVar11 = (pLVar7->fields)._items;
        if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
        if ((uint)pAVar11->max_length <= uVar10) goto code_?;
        uVar3 = *(undefined8 *)((longlong)&pAVar11->vector[0].textureOffset + uVar8);
        fVar5 = (float)FUN_?(fVar4,(this->fields).animationFrameAmount / fVar1);
        if ((float)((ulonglong)uVar3 >> 0x20) / fVar1 < fVar5) {
          if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
          pAVar11 = (pLVar7->fields)._items;
          if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
          if ((uint)pAVar11->max_length <= uVar10) goto code_?;
          if ((&pAVar11->vector[0].hasAlreadyTransitioned)[uVar8] == 0) {
            if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
            if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
            if ((uint)pAVar11->max_length <= uVar10) goto code_?;
            fVar5 = pAVar11->vector[(int)uVar10].frameToChangeTextureAt;
            if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            if ((uint)(pLVar7->fields)._size <= uVar10) goto DAT_?;
            pAVar12 = (pLVar7->fields)._items;
            uStack_13 = CONCAT31((int3)((uint)*(undefined4 *)
                                               &pAVar11->vector[(int)uVar10].hasAlreadyTransitioned >>
                                       8),1);
            if (pAVar12 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
            if ((uint)pAVar12->max_length <= uVar10) goto code_?;
            pAVar12->vector[(int)uVar10].textureOffset = pAVar11->vector[(int)uVar10].textureOffset;
            pAVar12->vector[(int)uVar10].frameToChangeTextureAt = fVar5;
            *(uint *)&pAVar12->vector[(int)uVar10].hasAlreadyTransitioned = uStack_13;
            piVar14 = &(pLVar7->fields)._version;
            *piVar14 = *piVar14 + 1;
            pLVar7 = (this->fields).textureOffsetAnimationDataList;
            if (pLVar7 == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0) break;
            if ((uint)(pLVar7->fields)._size <= uVar10) {
DAT_?:
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pAVar11 = (pLVar7->fields)._items;
            if (pAVar11 == (AnimatedTextureOffset_TextureOffsetAnimationData__Array *)0x0) break;
            if ((uint)pAVar11->max_length <= uVar10) {
code_?:
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            offset = pAVar11->vector[(int)uVar10].textureOffset;
            AnimatedTextureOffset_SetTextureOffset(this,(float)offset,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        uVar6 = (ulonglong)(uVar10 + 1);
        uVar8 = uVar8 + 0xc;
      } while( true );
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AnimatedTextureOffset() */

void Assembly-CSharp.dll::AnimatedTextureOffset::AnimatedTextureOffset__ctor
               (AnimatedTextureOffset *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).animationFrameAmount = 24.0;
  (this->fields).offsetRatio = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
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
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
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
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

