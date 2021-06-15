
/* Int32 GetLayerNumber(LayerFlags) */

int32_t Assembly-CSharp.dll::LayerUtil::LayerUtil_GetLayerNumber
                  (LayerFlags__Enum layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((int)layer < 1) {
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&layer);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_layer_parameter_constant_should_,arg1,
                         (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)message,(MethodInfo *)0x0);
  }
  else {
    iVar1 = 0;
    if ((layer & LayerFlags__Enum_Default) == 0) {
      do {
        layer = (int)layer >> 1;
        iVar1 = iVar1 + 1;
      } while ((layer & LayerFlags__Enum_Default) == 0);
      return iVar1;
    }
  }
  return 0;
}


/* LayerMask GetMask(LayerFlags) */

LayerMask Assembly-CSharp.dll::LayerUtil::LayerUtil_GetMask
                    (LayerFlags__Enum layerFlags,MethodInfo *method)

{
  return (LayerMask)layerFlags;
}


/* String GetName(LayerFlags) */

String * Assembly-CSharp.dll::LayerUtil::LayerUtil_GetName
                   (LayerFlags__Enum layers,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar1)();
    return pSVar3;
  }
  pcRam_? = pcVar1;
  pSVar3 = (String *)(*pcRam_?)(layers);
  return pSVar3;
}


/* Boolean HasFlags(LayerFlags, LayerFlags) */

bool Assembly-CSharp.dll::LayerUtil::LayerUtil_HasFlags_2
               (LayerFlags__Enum layersMask,LayerFlags__Enum layerFlags,MethodInfo *method)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Boolean HasFlags(Int32, Int32) */

bool Assembly-CSharp.dll::LayerUtil::LayerUtil_HasFlags_3
               (int32_t layersMask,int32_t layerFlags,MethodInfo *method)

{
  return (layersMask & layerFlags) == layerFlags;
}


/* Void SetLayerRecursively(Transform, Int32) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively
               (Transform *transfrom,int32_t layer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pIStack_3 = (IDisposable__Class *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((transfrom != (Transform *)0x0) &&
     (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)transfrom,(MethodInfo *)0x0), this != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (this,layer,(MethodInfo *)0x0);
    pIVar4 = (IDisposable__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                       (transfrom,(MethodInfo *)0x0);
    uStack_1 = 0;
    while (pIVar4 != (IDisposable__Class *)0x0) {
      pIStack_3 = pIVar4;
      cVar5 = func_?();
      if (cVar5 == '\0') {
        uRam_? = 0x4f;
        uStack_1 = 0xffffffff;
        pIStack_3 = TypeInfo__System__IDisposable;
        pIVar4 = (IDisposable__Class *)func_?();
        if (pIVar4 != (IDisposable__Class *)0x0) {
          pIStack_3 = pIVar4;
          func_?();
        }
        *unaff_FS_OFFSET = pIStack_3;
        return;
      }
      pIVar6 = (IEnumerator__Class *)(pIVar4->_0).image;
      uVar7 = 0;
      uVar8._0_1_ = (pIVar6->_1).rank;
      uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar9 = &(&(((IEnumerator__Class *)(pIVar4->_0).image)->vtable).get_Current)
                       [pIVar6->interfaceOffsets[uVar7].offset].method;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      pIStack_3 = (IDisposable__Class *)0x0;
      ppMVar9 = (MethodInfo **)func_?();
code_?:
      pIStack_3 = (IDisposable__Class *)ppMVar9[1];
      pTVar10 = (Transform *)(*(code *)*ppMVar9)();
      if (pTVar10 == (Transform *)0x0) {
        LayerUtil_SetLayerRecursively((Transform *)0x0,layer,(MethodInfo *)0x0);
      }
      else {
        bVar11 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
        if (((pTVar10->klass->_1).naturalAligment < bVar11) ||
           ((pTVar10->klass->_1).typeHierarchy[bVar11 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        transfrom_00 = (Transform *)0x0;
        if (bVar12) {
          transfrom_00 = pTVar10;
        }
        if (transfrom_00 == (Transform *)0x0) {
          func_?();
          break;
        }
        LayerUtil_SetLayerRecursively(transfrom_00,layer,(MethodInfo *)0x0);
      }
    }
    pIStack_3 = (IDisposable__Class *)0x0;
  }
  func_?();
  pIStack_3 = (IDisposable__Class *)0x0;
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  func_?();
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetLayerRecursively(Transform, LayerMask, Int32) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_2
               (Transform *transfrom,LayerMask layersToChange,int32_t layer,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined4 *)&stack0xffffffd0;
  func_?();
  if ((transfrom != (Transform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)transfrom,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
  {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (pGVar2,(MethodInfo *)0x0);
    uVar4 = 1 << ((byte)iVar3 & 0x1f);
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)layersToChange.m_Mask,(MethodInfo *)0x0);
    if ((uVar4 & (uint)pOVar5) == uVar4) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)transfrom,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      puVar1 = (undefined4 *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar2,layer,(MethodInfo *)0x0);
    }
    pTVar6 = (Transform *)&UNK_?;
    pIVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                        (transfrom,(MethodInfo *)0x0);
    while (pIVar7 != (IEnumerator *)0x0) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        *puVar1 = 0x72;
        iVar9 = func_?();
        if (iVar9 != 0) {
          func_?();
        }
        *unaff_FS_OFFSET = pTVar6;
        return;
      }
      pIVar10 = pIVar7->klass;
      uVar11 = 0;
      uVar12._0_1_ = (pIVar10->_1).rank;
      uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
      if (uVar12 != 0) {
        do {
          if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar13 = &(&(pIVar10->vtable).get_Current)[pIVar10->interfaceOffsets[uVar11].offset].
                        method;
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      ppMVar13 = (MethodInfo **)func_?();
code_?:
      pTVar6 = (Transform *)(*(code *)*ppMVar13)();
      if (pTVar6 == (Transform *)0x0) {
        puVar1 = (undefined4 *)&UNK_?;
        LayerUtil_SetLayerRecursively_2((Transform *)0x0,layersToChange,layer,(MethodInfo *)0x0);
      }
      else {
        bVar14 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
        if (((pTVar6->klass->_1).naturalAligment < bVar14) ||
           ((pTVar6->klass->_1).typeHierarchy[bVar14 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        transfrom_00 = (Transform *)0x0;
        if (bVar15) {
          transfrom_00 = pTVar6;
        }
        if (transfrom_00 == (Transform *)0x0) {
          func_?();
          break;
        }
        pTVar6 = (Transform *)0x0;
        puVar1 = (undefined4 *)&UNK_?;
        LayerUtil_SetLayerRecursively_2(transfrom_00,layersToChange,layer,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
       (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)(1 << ((byte)iVar1 & 0x1f)),(MethodInfo *)0x0);
  LayerUtil_SetLayerRecursively_2(transfrom,layersToChange,layer_00,(MethodInfo *)0x0);
  return;
}


/* Void SetLayerRecursively(GameObject, Int32) */

void Assembly-CSharp.dll::LayerUtil::LayerUtil_SetLayerRecursively_4
               (GameObject *gameObject,int32_t layer,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pIStack_3 = (IDisposable__Class *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (gameObject != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (gameObject,layer,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pIVar5 = (IDisposable__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (pTVar4,(MethodInfo *)0x0);
      uStack_1 = 0;
      while (pIVar5 != (IDisposable__Class *)0x0) {
        puVar6 = (undefined4 *)0x1;
        pIStack_3 = pIVar5;
        cVar7 = func_?();
        if (cVar7 == '\0') {
          *puVar6 = 0x4f;
          uStack_1 = 0xffffffff;
          pIStack_3 = TypeInfo__System__IDisposable;
          pIVar5 = (IDisposable__Class *)func_?();
          if (pIVar5 != (IDisposable__Class *)0x0) {
            pIStack_3 = pIVar5;
            func_?();
          }
          *unaff_FS_OFFSET = pIStack_3;
          return;
        }
        pIVar8 = (IEnumerator__Class *)(pIVar5->_0).image;
        uVar9 = 0;
        uVar10._0_1_ = (pIVar8->_1).rank;
        uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar11 = &(&(((IEnumerator__Class *)(pIVar5->_0).image)->vtable).get_Current)
                          [pIVar8->interfaceOffsets[uVar9].offset].method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        pIStack_3 = (IDisposable__Class *)0x0;
        ppMVar11 = (MethodInfo **)func_?();
code_?:
        pIStack_3 = (IDisposable__Class *)ppMVar11[1];
        pTVar4 = (Transform *)(*(code *)*ppMVar11)();
        if (pTVar4 == (Transform *)0x0) {
          LayerUtil_SetLayerRecursively((Transform *)0x0,layer,(MethodInfo *)0x0);
        }
        else {
          bVar12 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar4->klass->_1).naturalAligment < bVar12) ||
             ((pTVar4->klass->_1).typeHierarchy[bVar12 - 1] !=
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          transfrom = (Transform *)0x0;
          if (bVar13) {
            transfrom = pTVar4;
          }
          if (transfrom == (Transform *)0x0) {
            func_?();
            break;
          }
          LayerUtil_SetLayerRecursively(transfrom,layer,(MethodInfo *)0x0);
        }
      }
      pIStack_3 = (IDisposable__Class *)0x0;
    }
  }
  func_?();
  pIStack_3 = (IDisposable__Class *)0x0;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

