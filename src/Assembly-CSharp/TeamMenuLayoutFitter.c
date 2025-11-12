
/* Void FixLayout() */

void Assembly-CSharp.dll::TeamMenuLayoutFitter::TeamMenuLayoutFitter_FixLayout
               (TeamMenuLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                     );
  pVVar2 = (this->fields).layoutGroup;
  if (pVVar2 != (VerticalLayoutGroup *)0x0) {
    (*(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)();
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pTVar4 = (Transform *)0x0;
      pTVar5 = pTVar4;
      if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar5 = pTVar3;
      }
      if (pTVar5 == (Transform *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar5 = pTVar4;
      if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar5 = pTVar3;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      uStack_8 = 0;
      pvVar9 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar9,&uStack_7);
      pVVar2 = (this->fields).layoutGroup;
      fVar11 = uStack_8._4_4_ * _UNK_?;
      if (pVVar2 != (VerticalLayoutGroup *)0x0) {
        fVar12 = *(float *)&(pVVar2->fields)._.m_ChildScaleWidth;
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        iVar13 = (*pcRam_?)();
        UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
        HorizontalOrVerticalLayoutGroup_set_spacing
                  ((HorizontalOrVerticalLayoutGroup *)pVVar2,(fVar12 / _UNK_?) * (float)iVar13
                   ,(MethodInfo *)0x0);
        if (pOVar1 != (Object__Array *)0x0) {
          ppOVar14 = pOVar1->vector;
          do {
            uVar15 = (uint)pTVar4;
            if ((int)pOVar1->max_length <= (int)uVar15) {
              return;
            }
            if ((uint)pOVar1->max_length <= uVar15) {
code_?:
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pOVar16 = *ppOVar14;
            if (pOVar16 == (Object *)0x0) break;
            (*(code *)pOVar16->klass[2]._0.typeMetadataHandle)
                      (pOVar16,fVar11,pOVar16->klass[2]._0.interopData);
            if ((uint)pOVar1->max_length <= uVar15) goto code_?;
            pOVar16 = *ppOVar14;
            if (pOVar16 == (Object *)0x0) break;
            (*(code *)pOVar16->klass[2]._0.implementedInterfaces)
                      (pOVar16,fVar11,pOVar16->klass[2].interfaceOffsets);
            pVVar2 = (this->fields).layoutGroup;
            if (pVVar2 == (VerticalLayoutGroup *)0x0) break;
            (*(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)
                      (pVVar2,(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.method);
            pTVar4 = (Transform *)(ulonglong)(uVar15 + 1);
            ppOVar14 = ppOVar14 + 1;
          } while( true );
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenuLayoutFitter::TeamMenuLayoutFitter_Start
               (TeamMenuLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                     );
  pVVar2 = (this->fields).layoutGroup;
  if (pVVar2 != (VerticalLayoutGroup *)0x0) {
    (*(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)();
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pTVar4 = (Transform *)0x0;
      pTVar5 = pTVar4;
      if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar5 = pTVar3;
      }
      if (pTVar5 == (Transform *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar5 = pTVar4;
      if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar5 = pTVar3;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      uStack_8 = 0;
      pvVar9 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar9,&uStack_7);
      pVVar2 = (this->fields).layoutGroup;
      fVar11 = uStack_8._4_4_ * _UNK_?;
      if (pVVar2 != (VerticalLayoutGroup *)0x0) {
        fVar12 = *(float *)&(pVVar2->fields)._.m_ChildScaleWidth;
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        iVar13 = (*pcRam_?)();
        UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
        HorizontalOrVerticalLayoutGroup_set_spacing
                  ((HorizontalOrVerticalLayoutGroup *)pVVar2,(fVar12 / _UNK_?) * (float)iVar13
                   ,(MethodInfo *)0x0);
        if (pOVar1 != (Object__Array *)0x0) {
          ppOVar14 = pOVar1->vector;
          do {
            uVar15 = (uint)pTVar4;
            if ((int)pOVar1->max_length <= (int)uVar15) {
              return;
            }
            if ((uint)pOVar1->max_length <= uVar15) {
code_?:
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pOVar16 = *ppOVar14;
            if (pOVar16 == (Object *)0x0) break;
            (*(code *)pOVar16->klass[2]._0.typeMetadataHandle)
                      (pOVar16,fVar11,pOVar16->klass[2]._0.interopData);
            if ((uint)pOVar1->max_length <= uVar15) goto code_?;
            pOVar16 = *ppOVar14;
            if (pOVar16 == (Object *)0x0) break;
            (*(code *)pOVar16->klass[2]._0.implementedInterfaces)
                      (pOVar16,fVar11,pOVar16->klass[2].interfaceOffsets);
            pVVar2 = (this->fields).layoutGroup;
            if (pVVar2 == (VerticalLayoutGroup *)0x0) break;
            (*(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)
                      (pVVar2,(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.method);
            pTVar4 = (Transform *)(ulonglong)(uVar15 + 1);
            ppOVar14 = ppOVar14 + 1;
          } while( true );
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

