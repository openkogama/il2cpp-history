
/* Avatar GetAvatar() */

Avatar * Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_GetAvatar
                   (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (Avatar *)0x0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    while( true ) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return pAVar1;
      }
      if (pTVar2 == (Transform *)0x0) break;
      pAVar1 = (Avatar *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pTVar2,
                          Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return pAVar1;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar1 = (Avatar *)(*pcVar4)();
  return pAVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_OnDestroy
               (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 == (MVAvatar *)0x0) {
    return;
  }
  this_00 = (pMVar1->fields).body;
  if ((this_00 == (MVBody *)0x0) ||
     (pBVar2 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0),
     pBVar2 == (BoneAnimation *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pAVar3 = (pBVar2->fields).OnAnimationChange;
    pDVar4 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(TypeInfo__System__Action<System::String>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pDVar4,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)pDVar4,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pBVar2->fields).OnAnimationChange = (Action_1_String_ *)0x0;
code_?:
      func_?();
      pMVar1 = (this->fields).mvAvatar;
      if ((pMVar1 == (MVAvatar *)0x0) ||
         (pAVar6 = (pMVar1->fields).limbManager, pAVar6 == (AvatarLimbManager *)0x0))
      goto code_?;
      pAVar3 = (pAVar6->fields).OnEmoteStart;
      pDVar4 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?(TypeInfo__System__Action<System::String>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar4,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)pDVar4,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        (pAVar6->fields).OnEmoteStart = (Action_1_String_ *)0x0;
        func_?();
        return;
      }
      pAVar3 = (Action_1_String_ *)func_?();
      if (pAVar3 == (Action_1_String_ *)0x0) goto code_?;
      (pAVar6->fields).OnEmoteStart = pAVar3;
      iVar7 = func_?();
      if (iVar7 != 0) {
        func_?();
        return;
      }
      goto code_?;
    }
    pAVar3 = (Action_1_String_ *)func_?();
    if (pAVar3 != (Action_1_String_ *)0x0) {
      (pBVar2->fields).OnAnimationChange = pAVar3;
      iVar7 = func_?();
      if (iVar7 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ActivateOnAnimationBase::ActivateOnAnimationBase_Start
               (ActivateOnAnimationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (Object_1 *)0x0;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) {
code_?:
    func_?();
  }
  else {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    do {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) break;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                    ((Component *)pTVar1,
                     Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    } while (bVar2 == 0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    if (x == (Object_1 *)0x0) goto code_?;
    ppMVar3 = &(this->fields).mvAvatar;
    *ppMVar3 = (MVAvatar *)x[1].monitor;
    func_?();
    if (((*ppMVar3 == (MVAvatar *)0x0) ||
        (this_00 = ((*ppMVar3)->fields).body, this_00 == (MVBody *)0x0)) ||
       (pBVar4 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0),
       pAVar5 = TypeInfo__System__Action<System::String>, pBVar4 == (BoneAnimation *)0x0))
    goto code_?;
    pAVar6 = (pBVar4->fields).OnAnimationChange;
    pDVar7 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pDVar7,(Object *)pAVar5,(void *)(pAVar5->_0).image[5].exportedTypeCount,
               (MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pDVar7,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      (pAVar6->fields)._._.m_target = (Object *)0x0;
code_?:
      func_?();
      pAVar5 = TypeInfo__System__Action<System::String>;
      if ((*ppMVar3 == (MVAvatar *)0x0) ||
         (pAVar9 = ((*ppMVar3)->fields).limbManager, pAVar9 == (AvatarLimbManager *)0x0))
      goto code_?;
      pAVar6 = (pAVar9->fields).OnEmoteStart;
      ppAVar10 = &(pAVar9->fields).OnEmoteStart;
      pDVar7 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar7,(Object *)pAVar5,(void *)(pAVar5->_0).image[5].exportedTypeCount,
                 (MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar6,(Delegate *)pDVar7,(MethodInfo *)0x0);
      if (pDVar8 == (Delegate *)0x0) {
        *ppAVar10 = (Action_1_String_ *)0x0;
        func_?();
        return;
      }
      pAVar6 = (Action_1_String_ *)func_?();
      if (pAVar6 != (Action_1_String_ *)0x0) {
        *ppAVar10 = pAVar6;
        iVar11 = func_?();
        if (iVar11 != 0) {
          func_?();
          return;
        }
      }
    }
    else {
      pOVar12 = (Object *)func_?();
      if (pOVar12 != (Object *)0x0) {
        (pAVar6->fields)._._.m_target = pOVar12;
        iVar11 = func_?();
        if (iVar11 == 0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

