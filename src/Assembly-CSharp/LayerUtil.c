
/* Int32 GetLayerNumber(LayerFlags) */

int32_t Assembly-CSharp.dll::LayerUtil::LayerUtil_GetLayerNumber
                  (LayerFlags__Enum layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_layer_parameter_constant_should_);
    cRam_? = '\x01';
  }
  IStack_1.m_value = layer;
  if ((int)layer < 1) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_layer_parameter_constant_should_,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  else {
    iVar3 = 0;
    if ((layer & LayerFlags__Enum_Default) == 0) {
      do {
        layer = (int)layer >> 1;
        iVar3 = iVar3 + 1;
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
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  pSVar1 = (String *)(*pcRam_?)(layers);
  return pSVar1;
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
  }
  if (transfrom != (Transform *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)transfrom,(MethodInfo *)0x0);
    if (this != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (this,layer,(MethodInfo *)0x0);
      pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (transfrom,(MethodInfo *)0x0);
      uStack_1 = 1;
      while (pIVar4 != (IEnumerator *)0x0) {
        cVar5 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar4);
        if (cVar5 == '\0') {
          uStack_1 = 0xffffffff;
          iVar6 = func_?(pIVar4,TypeInfo__System__IDisposable);
          if (iVar6 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar6);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pIVar4 == (IEnumerator *)0x0) break;
        pIVar7 = pIVar4->klass;
        uVar8 = 0;
        uVar9._0_1_ = (pIVar7->_1).rank;
        uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar10 = &(&(pIVar4->klass->vtable).get_Current)
                         [pIVar4->klass->interfaceOffsets[uVar8].offset].method;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        ppMVar10 = (MethodInfo **)
                  func_?(pIVar4,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        transfrom_00 = (Transform *)(*(code *)*ppMVar10)(pIVar4,ppMVar10[1]);
        if (transfrom_00 == (Transform *)0x0) {
          LayerUtil_SetLayerRecursively((Transform *)0x0,layer,(MethodInfo *)0x0);
        }
        else {
          if (((transfrom_00->klass->_1).naturalAligment <
               (TypeInfo__UnityEngine__Transform->_1).naturalAligment) ||
             ((transfrom_00->klass->_1).typeHierarchy
              [(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
            func_?(transfrom_00,TypeInfo__UnityEngine__Transform);
            break;
          }
          LayerUtil_SetLayerRecursively(transfrom_00,layer,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetLayerRecursively(Transform, String) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_1
               (Transform *transfrom,String *layer,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(layer,(MethodInfo *)0x0)
  ;
  *(undefined1 **)unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetLayerRecursively(Transform, LayerMask, Int32) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_2
               (Transform *transfrom,LayerMask layersToChange,int32_t layer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
  }
  if (transfrom != (Transform *)0x0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)transfrom,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (pGVar4,(MethodInfo *)0x0);
      uVar6 = 1 << ((byte)iVar5 & 0x1f);
      p_Var7 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_AsRef_1((Void *)layersToChange.m_Mask,(MethodInfo *)0x0);
      if ((uVar6 & (uint)p_Var7) == uVar6) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)transfrom,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar4,layer,(MethodInfo *)0x0);
      }
      pIVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (transfrom,(MethodInfo *)0x0);
      uStack_1 = 1;
      while (pIVar7 != (IEnumerator *)0x0) {
        cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar7);
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          iVar9 = func_?(pIVar7,TypeInfo__System__IDisposable);
          if (iVar9 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar9);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pIVar7 == (IEnumerator *)0x0) break;
        pIVar10 = pIVar7->klass;
        uVar11 = 0;
        uVar12._0_1_ = (pIVar10->_1).rank;
        uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
        if (uVar12 != 0) {
          do {
            if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar13 = &(&(pIVar7->klass->vtable).get_Current)
                         [pIVar7->klass->interfaceOffsets[uVar11].offset].method;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar12);
        }
        ppMVar13 = (MethodInfo **)
                  func_?(pIVar7,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        transfrom_00 = (Transform *)(*(code *)*ppMVar13)(pIVar7,ppMVar13[1]);
        if (transfrom_00 == (Transform *)0x0) {
          LayerUtil_SetLayerRecursively_2((Transform *)0x0,layersToChange,layer,(MethodInfo *)0x0);
        }
        else {
          if (((transfrom_00->klass->_1).naturalAligment <
               (TypeInfo__UnityEngine__Transform->_1).naturalAligment) ||
             ((transfrom_00->klass->_1).typeHierarchy
              [(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
            func_?(transfrom_00,TypeInfo__UnityEngine__Transform);
            break;
          }
          LayerUtil_SetLayerRecursively_2(transfrom_00,layersToChange,layer,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetLayerRecursively(Transform, String, String) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_3
               (Transform *transfrom,String *layerToChange,String *layer,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layerToChange,(MethodInfo *)0x0);
  layer_00 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (layer,(MethodInfo *)0x0);
  layersToChange.m_Mask =
       (int32_t)UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_AsRef_1((Void *)(1 << ((byte)iVar1 & 0x1f)),(MethodInfo *)0x0);
  LayerUtil_SetLayerRecursively_2(transfrom,layersToChange,layer_00,(MethodInfo *)0x0);
  return;
}


/* Void SetLayerRecursively(GameObject, Int32) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_4
               (GameObject *gameObject,int32_t layer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (gameObject,layer,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pIVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (pTVar4,(MethodInfo *)0x0);
      uStack_1 = 1;
      while (pIVar5 != (IEnumerator *)0x0) {
        cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
        if (cVar6 == '\0') {
          uStack_1 = 0xffffffff;
          iVar7 = func_?(pIVar5,TypeInfo__System__IDisposable);
          if (iVar7 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar7);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pIVar5 == (IEnumerator *)0x0) break;
        pIVar8 = pIVar5->klass;
        uVar9 = 0;
        uVar10._0_1_ = (pIVar8->_1).rank;
        uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar11 = &(&(pIVar5->klass->vtable).get_Current)
                         [pIVar5->klass->interfaceOffsets[uVar9].offset].method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        ppMVar11 = (MethodInfo **)
                  func_?(pIVar5,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pTVar4 = (Transform *)(*(code *)*ppMVar11)(pIVar5,ppMVar11[1]);
        if (pTVar4 == (Transform *)0x0) {
          LayerUtil_SetLayerRecursively((Transform *)0x0,layer,(MethodInfo *)0x0);
        }
        else {
          if (((pTVar4->klass->_1).naturalAligment <
               (TypeInfo__UnityEngine__Transform->_1).naturalAligment) ||
             ((pTVar4->klass->_1).typeHierarchy
              [(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
            func_?(pTVar4,TypeInfo__UnityEngine__Transform);
            break;
          }
          LayerUtil_SetLayerRecursively(pTVar4,layer,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

