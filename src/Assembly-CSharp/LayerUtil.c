
/* Int32 GetLayerNumber(LayerFlags) */

int32_t Assembly-CSharp.dll::LayerUtil::LayerUtil_GetLayerNumber
                  (LayerFlags__Enum layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_layer_parameter_constant_should_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((int)layer < 1) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_1[0]._pointer._value = (void *)0x0;
    aRStack_1[0]._length = 0;
    aRStack_1[0]._12_4_ = 0;
    pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                       (layer,aRStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_layer_parameter_constant_should_,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  else {
    iVar3 = 0;
    if ((layer & LayerFlags__Enum_Default) == 0) {
      do {
        iVar3 = iVar3 + 1;
        layer = (int)layer >> 1;
      } while ((layer & LayerFlags__Enum_Default) == 0);
      return iVar3;
    }
  }
  return 0;
}


/* String GetName(LayerFlags) */

String * Assembly-CSharp.dll::LayerUtil::LayerUtil_GetName
                   (LayerFlags__Enum layers,MethodInfo *method)

{
  pVStack_1 = (Void *)0x0;
  uStack_2._0_4_ = 0;
  uStack_2._4_4_ = 0;
  auStackX_18[0] = 0;
  uStack_3 = 0;
  ppVStack_4 = &pVStack_1;
  puStack_5 = auStackX_18;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?,0), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    FUN_?();
    pcVar6 = (code *)swi(3);
    pSVar8 = (String *)(*pcVar6)();
    return pSVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(layers);
  MStack_9.begin = pVStack_1;
  MStack_9.length = (int32_t)uStack_2;
  MStack_9._12_4_ = uStack_2._4_4_;
  pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::OutStringMarshaller::
           OutStringMarshaller_GetStringAndDispose(&MStack_9,(MethodInfo *)0x0);
  return pSVar8;
}


/* Boolean HasFlags(LayerFlags, LayerFlags) */

bool Assembly-CSharp.dll::LayerUtil::LayerUtil_HasFlags_2
               (LayerFlags__Enum layersMask,LayerFlags__Enum layerFlags,MethodInfo *method)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Void SetLayerRecursively(Transform, Int32) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively
               (Transform *transfrom,int32_t layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((transfrom == (Transform *)0x0) ||
     (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)transfrom,(MethodInfo *)0x0), this == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (this,layer,(MethodInfo *)0x0);
  pIVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                     (transfrom,(MethodInfo *)0x0);
  do {
    if (pIVar2 == (IEnumerator *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar3 == '\0') {
      lVar4 = FUN_?(pIVar2,TypeInfo__System__IDisposable);
      if (lVar4 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar4);
      }
      return;
    }
    if (pIVar2 == (IEnumerator *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pIVar5 = pIVar2->klass;
    uVar6 = 0;
    uVar7._0_1_ = (pIVar5->_1).rank;
    uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar7 != 0) {
      do {
        if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
          pVVar8 = &(pIVar5->vtable).MoveNext + (pIVar5->interfaceOffsets[uVar6].offset + 1);
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    pVVar8 = (VirtualInvokeData *)FUN_?(pIVar2,TypeInfo__System__Collections__IEnumerator,1)
    ;
code_?:
    pTVar9 = (Transform *)(*pVVar8->methodPtr)(pIVar2,pVVar8->method);
    transfrom_00 = (Transform *)0x0;
    if (pTVar9 != (Transform *)0x0) {
      bVar10 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((pTVar9->klass->_1).naturalAligment < bVar10) ||
         (transfrom_00 = pTVar9,
         (pTVar9->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
         (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        FUN_?(pTVar9,TypeInfo__UnityEngine__Transform);
        goto code_?;
      }
    }
    LayerUtil_SetLayerRecursively(transfrom_00,layer,(MethodInfo *)0x0);
  } while( true );
}


/* Void SetLayerRecursively(Transform, String) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_1
               (Transform *transfrom,String *layer,MethodInfo *method)

{
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layer,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((transfrom == (Transform *)0x0) ||
     (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)transfrom,(MethodInfo *)0x0), this == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (this,value,(MethodInfo *)0x0);
  pIVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                     (transfrom,(MethodInfo *)0x0);
  do {
    if (pIVar2 == (IEnumerator *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar3 == '\0') {
      lVar4 = FUN_?(pIVar2,TypeInfo__System__IDisposable);
      if (lVar4 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar4);
      }
      return;
    }
    if (pIVar2 == (IEnumerator *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pIVar5 = pIVar2->klass;
    uVar6 = 0;
    uVar7._0_1_ = (pIVar5->_1).rank;
    uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar7 != 0) {
      do {
        if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
          pVVar8 = &(pIVar5->vtable).MoveNext + (pIVar5->interfaceOffsets[uVar6].offset + 1);
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    pVVar8 = (VirtualInvokeData *)FUN_?(pIVar2,TypeInfo__System__Collections__IEnumerator,1)
    ;
code_?:
    pTVar9 = (Transform *)(*pVVar8->methodPtr)(pIVar2,pVVar8->method);
    transfrom_00 = (Transform *)0x0;
    if (pTVar9 != (Transform *)0x0) {
      bVar10 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((pTVar9->klass->_1).naturalAligment < bVar10) ||
         (transfrom_00 = pTVar9,
         (pTVar9->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
         (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        FUN_?(pTVar9,TypeInfo__UnityEngine__Transform);
        goto code_?;
      }
    }
    LayerUtil_SetLayerRecursively(transfrom_00,value,(MethodInfo *)0x0);
  } while( true );
}


/* Void SetLayerRecursively(Transform, LayerMask, Int32) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_2
               (Transform *transfrom,LayerMask layersToChange,int32_t layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_1[0] = 0;
  if ((transfrom != (Transform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)transfrom,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar4;
      bVar6 = (*pcRam_?)(pvVar3);
      uVar7 = 1 << (bVar6 & 0x1f);
      if ((uVar7 & layersToChange.m_Mask) == uVar7) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)transfrom,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar2,layer,(MethodInfo *)0x0);
      }
      pIStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                             (transfrom,(MethodInfo *)0x0);
      uStack_8 = 0;
      ppIStack_9 = &pIStackX_8;
      plStack_10 = alStack_1;
      while (pIStackX_8 != (IEnumerator *)0x0) {
        cVar11 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        pIVar12 = pIStackX_8;
        if (cVar11 == '\0') {
          alStack_1[0] = FUN_?(pIStackX_8,TypeInfo__System__IDisposable);
          if (alStack_1[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
          }
          return;
        }
        if (pIStackX_8 == (IEnumerator *)0x0) goto code_?;
        pIVar13 = pIStackX_8->klass;
        uVar14 = 0;
        uVar15._0_1_ = (pIVar13->_1).rank;
        uVar15._1_1_ = (pIVar13->_1).minimumAlignment;
        if (uVar15 != 0) {
          do {
            if (pIVar13->interfaceOffsets[uVar14].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar16 = &(pIVar13->vtable).MoveNext + (pIVar13->interfaceOffsets[uVar14].offset + 1);
              goto code_?;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar15);
        }
        pVVar16 = (VirtualInvokeData *)
                 FUN_?(pIStackX_8,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pTVar17 = (Transform *)(*pVVar16->methodPtr)(pIVar12,pVVar16->method);
        transfrom_00 = (Transform *)0x0;
        if (pTVar17 != (Transform *)0x0) {
          bVar6 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar17->klass->_1).naturalAligment < bVar6) ||
             (transfrom_00 = pTVar17,
             (pTVar17->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
             (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
        }
        LayerUtil_SetLayerRecursively_2(transfrom_00,layersToChange,layer,(MethodInfo *)0x0);
      }
    }
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetLayerRecursively(Transform, String, String) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_3
               (Transform *transfrom,String *layerToChange,String *layer,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layerToChange,(MethodInfo *)0x0);
  layersToChange.m_Mask = 1 << ((byte)iVar1 & 0x1f);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layer,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,layersToChange.m_Mask,iVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_2[0] = 0;
  if ((transfrom != (Transform *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)transfrom,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pGVar3->fields)._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar5;
      bVar7 = (*pcRam_?)(pvVar4);
      uVar8 = 1 << (bVar7 & 0x1f);
      if ((uVar8 & layersToChange.m_Mask) == uVar8) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)transfrom,(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar3,iVar1,(MethodInfo *)0x0);
      }
      pIVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (transfrom,(MethodInfo *)0x0);
      uStack_10 = 0;
      puStack_11 = &stack0x00000008;
      plStack_12 = alStack_2;
      while (pIVar9 != (IEnumerator *)0x0) {
        cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar13 == '\0') {
          alStack_2[0] = FUN_?(pIVar9,TypeInfo__System__IDisposable);
          if (alStack_2[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_2[0]);
          }
          return;
        }
        if (pIVar9 == (IEnumerator *)0x0) goto code_?;
        pIVar14 = pIVar9->klass;
        uVar15 = 0;
        uVar16._0_1_ = (pIVar14->_1).rank;
        uVar16._1_1_ = (pIVar14->_1).minimumAlignment;
        if (uVar16 != 0) {
          do {
            if (pIVar14->interfaceOffsets[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar17 = &(pIVar14->vtable).MoveNext + (pIVar14->interfaceOffsets[uVar15].offset + 1);
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar16);
        }
        pVVar17 = (VirtualInvokeData *)
                  FUN_?(pIVar9,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pTVar18 = (Transform *)(*pVVar17->methodPtr)(pIVar9,pVVar17->method);
        transfrom_00 = (Transform *)0x0;
        if (pTVar18 != (Transform *)0x0) {
          bVar7 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar18->klass->_1).naturalAligment < bVar7) ||
             (transfrom_00 = pTVar18,
             (pTVar18->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
             (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
        }
        LayerUtil_SetLayerRecursively_2(transfrom_00,layersToChange,iVar1,(MethodInfo *)0x0);
      }
    }
    FUN_?();
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetLayerRecursively(GameObject, Int32) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_4
               (GameObject *gameObject,int32_t layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (gameObject,layer,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pIVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (pTVar1,(MethodInfo *)0x0);
      do {
        if (pIVar2 == (IEnumerator *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar4 == '\0') {
          lVar5 = FUN_?(pIVar2,TypeInfo__System__IDisposable);
          if (lVar5 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lVar5);
          }
          return;
        }
        if (pIVar2 == (IEnumerator *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pIVar6 = pIVar2->klass;
        uVar7 = 0;
        uVar8._0_1_ = (pIVar6->_1).rank;
        uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
        if (uVar8 != 0) {
          do {
            if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar9 = &(pIVar6->vtable).MoveNext + (pIVar6->interfaceOffsets[uVar7].offset + 1);
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
        }
        pVVar9 = (VirtualInvokeData *)
                 FUN_?(pIVar2,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pTVar10 = (Transform *)(*pVVar9->methodPtr)(pIVar2,pVVar9->method);
        pTVar1 = (Transform *)0x0;
        if (pTVar10 != (Transform *)0x0) {
          bVar11 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar10->klass->_1).naturalAligment < bVar11) ||
             (pTVar1 = pTVar10,
             (pTVar10->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
             (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
            FUN_?(pTVar10,TypeInfo__UnityEngine__Transform);
            goto code_?;
          }
        }
        LayerUtil_SetLayerRecursively(pTVar1,layer,(MethodInfo *)0x0);
      } while( true );
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

