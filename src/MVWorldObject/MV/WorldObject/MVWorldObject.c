
/* Void AddInputLink(Link) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddInputLink
               (MVWorldObject *this,Link_1 *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)link,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
              );
    if (link != (Link_1 *)0x0) {
      (link->fields).inputWOID = (this->fields).id;
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (this->fields).OnInputLinkChanged;
      if (this_01 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_01,(Dictionary_2_System_String_System_Object_ *)(this->fields).inputLinkRefs
                   ,
                   MethodInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>__Invoke_System__Collections__Generic__List<MV::WorldObject::Link>_
                  );
      }
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean AddObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).objectLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)link,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Add_MV__WorldObject__ObjectLink_
              );
    (*(code *)(this->klass->vtable).OnObjectLinkChanged.method)
              (this,(this->klass->vtable).IsSingletonObject.methodPtr);
    return 1;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void AddOutputLink(Link) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddOutputLink
               (MVWorldObject *this,Link_1 *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).outputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)link,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
              );
    if (link != (Link_1 *)0x0) {
      (link->fields).outputWOID = (this->fields).id;
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (this->fields).OnOutputLinkChanged;
      if (this_01 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_01,(Dictionary_2_System_String_System_Object_ *)
                           (this->fields).outputLinkRefs,
                   MethodInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>__Invoke_System__Collections__Generic__List<MV::WorldObject::Link>_
                  );
      }
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean ContainObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ContainObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  iVar1 = MVWorldObject_GetIndexOfObjectLink(this,link,(MethodInfo *)0x0);
  return iVar1 != -1;
}


/* MVWorldObject DeepCopy() */

MVWorldObject *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_DeepCopy
          (MVWorldObject *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMStack_6 = (MVWorldObject *)0x0;
  LStack_7.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_7.monitor = (MonitorData *)0x0;
  LStack_7.fields._items = (Color32__Array *)0x0;
  LStack_7.fields._size = 0;
  auStack_8._0_4_ = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  auStack_8._4_4_ = (MonitorData *)0x0;
  auStack_8._8_4_ = (Color32__Array *)0x0;
  auStack_8._12_4_ = (Object *)0x0;
  func_?();
  pOStack_9 = (Object__Class *)0xffffffff;
  piStack_10 = (int *)&stack0xffffff88;
  puStack_4 = &stack0xffffff88;
  pMVar11 = (MVWorldObject *)
           (*(code *)(this->klass->vtable).ShallowCopy.method)
                     (this,(this->klass->vtable).DeepCopy.methodPtr);
  pMStack_12 = pMVar11;
  pMVar13 = (MVWorldObject *)
           func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)pMVar13,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  if (pMVar11 == (MVWorldObject *)0x0) {
code_?:
    pMVar14 = (MVWorldObject *)func_?();
    pMVar15 = pMVar13;
  }
  else {
    (pMVar11->fields).outputLinkRefs = (List_1_MV_WorldObject_Link_ *)pMVar13;
    pLVar16 = (List_1_UnityEngine_Color32_ *)(this->fields).outputLinkRefs;
    if (pLVar16 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_18,pLVar16,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                       );
    LStack_7.klass = (List_1_UnityEngine_Color32___Class *)pLVar17->l;
    LStack_7.monitor = (MonitorData *)pLVar17->next;
    LStack_7.fields._items = (Color32__Array *)pLVar17->ver;
    LStack_7.fields._size = (pLVar17->current).rgba;
    uStack_1 = 0;
    while( true ) {
      auStack_18._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
      ;
      auStack_18._0_4_ = auStack_8 + 0x10;
      cVar19 = func_?();
      if (cVar19 == '\0') break;
      pOVar20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          (auStack_8 + 0x10),
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                         );
      pOStack_21 = (Object__Class *)(pMVar11->fields).outputLinkRefs;
      if (pOVar20 == (Object *)0x0) goto code_?;
      pOStack_22 = pOVar20[1].klass;
      pOStack_23 = pOVar20[2].klass;
      uStack_24 = *(undefined1 *)&pOVar20[2].monitor;
      pMVar25 = (MethodInfo *)&UNK_?;
      pMVar13 = (MVWorldObject *)func_?();
      (((MonoBehaviour__Fields *)&(pMVar13->fields).id)->_)._._.m_CachedPtr = (void *)0xffffffff;
      (pMVar13->fields).groupId = -1;
      ((Vector3 *)&(pMVar13->fields).itemId)->x = -NAN;
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                ((ScaleAnimationBase *)pMVar13,0.0,pMVar25);
      (((MonoBehaviour__Fields *)&(pMVar13->fields).id)->_)._._.m_CachedPtr = pOStack_22;
      (pMVar13->fields).groupId = (int32_t)pOStack_23;
      ((Vector3 *)&(pMVar13->fields).itemId)->x = (float)pOStack_23;
      (pMVar13->fields).inputState = uStack_24;
      if (pOStack_21 == (Object__Class *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pOStack_21,(UIPushOption__Enum)pMVar13,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                );
    }
    pMVar15 = (MVWorldObject *)0x0;
    *piStack_10 = 0x69;
    pOStack_22 = (Object__Class *)0x0;
    uStack_1 = 0xffffffff;
    func_?(auStack_8 + 0x10,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    pMVar14 = pMStack_6;
    if (pMStack_6 == (MVWorldObject *)0x0) {
      if (*piStack_10 == 0x69) {
        pOStack_22 = (Object__Class *)0xffffffff;
      }
      pMVar13 = (MVWorldObject *)
               func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                ((List_1_UnityEngine_Vector4_ *)pMVar13,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
      if (pMVar11 != (MVWorldObject *)0x0) {
        (pMVar11->fields).inputLinkRefs = (List_1_MV_WorldObject_Link_ *)pMVar13;
        pLVar16 = (List_1_UnityEngine_Color32_ *)(this->fields).inputLinkRefs;
        if (pLVar16 != (List_1_UnityEngine_Color32_ *)0x0) {
          pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_18,pLVar16,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                             );
          auStack_8._0_4_ = pLVar17->l;
          auStack_8._4_4_ = pLVar17->next;
          auStack_8._8_4_ = pLVar17->ver;
          auStack_8._12_4_ = (pLVar17->current).rgba;
          uStack_1 = 2;
          while( true ) {
            auStack_18._4_4_ =
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
            ;
            auStack_18._0_4_ = auStack_8;
            cVar19 = func_?();
            pMVar15 = pMStack_6;
            if (cVar19 == '\0') break;
            pOVar20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                auStack_8,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                               );
            pOStack_23 = (Object__Class *)(pMVar11->fields).inputLinkRefs;
            if (pOVar20 == (Object *)0x0) goto code_?;
            pOStack_9 = pOVar20[1].klass;
            pOStack_21 = pOVar20[2].klass;
            uStack_24 = *(undefined1 *)&pOVar20[2].monitor;
            pMVar25 = (MethodInfo *)&UNK_?;
            pMVar13 = (MVWorldObject *)func_?();
            (((MonoBehaviour__Fields *)&(pMVar13->fields).id)->_)._._.m_CachedPtr =
                 (void *)0xffffffff;
            (pMVar13->fields).groupId = -1;
            ((Vector3 *)&(pMVar13->fields).itemId)->x = -NAN;
            Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                      ((ScaleAnimationBase *)pMVar13,0.0,pMVar25);
            (((MonoBehaviour__Fields *)&(pMVar13->fields).id)->_)._._.m_CachedPtr = pOStack_9;
            (pMVar13->fields).groupId = (int32_t)pOStack_21;
            ((Vector3 *)&(pMVar13->fields).itemId)->x = (float)pOStack_21;
            (pMVar13->fields).inputState = uStack_24;
            if (pOStack_23 == (Object__Class *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)pOStack_23,(UIPushOption__Enum)pMVar13,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                      );
          }
          piStack_10[(int)((int)&(pOStack_22->_0).image + 1)] = 0xcc;
          uStack_1 = 0xffffffff;
          func_?(auStack_8,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                         );
          uVar26 = 0;
          if (pMVar15 != (MVWorldObject *)0x0) goto code_?;
          pDVar27 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                             ((this->fields).data,(MethodInfo *)0x0);
          pMVar13 = this;
          if (pMVar11 != (MVWorldObject *)0x0) {
            (pMVar11->fields).data = pDVar27;
            pDVar27 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                               ((this->fields).runTimeData,(MethodInfo *)0x0);
            (pMVar11->fields).runTimeData = pDVar27;
            *unaff_FS_OFFSET = uStack_3;
            return pMVar11;
          }
        }
      }
      goto code_?;
    }
  }
  uVar26 = 0;
  func_?(pMVar14,0,0);
code_?:
  func_?(pMVar15,0,uVar26);
  pcVar28 = (code *)swi(3);
  pMVar13 = (MVWorldObject *)(*pcVar28)();
  return pMVar13;
}


/* Dictionary`2[System.Object,System.Object] DeepCopyWorldObjectDataParameters() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_DeepCopyWorldObjectDataParameters
          (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pSVar2 = (String *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  pCVar3 = (CrossPlatformInputManager_VirtualButton *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectType,&stack0xffffffec);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffa);
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&stack0xffffffe8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffff9);
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&stack0xffffffe4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)func_?();
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)func_?();
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)func_?();
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)func_?();
    (*(code *)(this->klass->vtable).get_Position.method)();
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)func_?();
    (*(code *)(this->klass->vtable).get_Rotation.method)();
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack4 = &stack0xfffffff3;
    pWStack5 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
    pSVar2 = (String *)func_?();
    pIStack6 = (this->klass->vtable).set_Scale.methodPtr;
    pMStack7 = this;
    (*(code *)(this->klass->vtable).get_Scale.method)();
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)func_?();
    pDVar8 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                       ((this->fields).data,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,(CrossPlatformInputManager_VirtualButton *)pDVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack9 = &stack0xfffffff1;
    pWStack10 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
    pSVar2 = (String *)func_?();
    pIStack11 = (this->klass->vtable).set_RunTimeData.methodPtr;
    pMStack12 = this;
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)();
    pDVar8 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1(pDVar8,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,pSVar2,(CrossPlatformInputManager_VirtualButton *)pDVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return pDVar1;
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar13)();
  return pDVar1;
}


/* Int32 GetIndexOfObjectLink(ObjectLink) */

int32_t MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetIndexOfObjectLink
                  (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).objectLinkRefs;
  while (pLVar2 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    iVar3 = iVar1;
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Count__
                       );
    if ((int)pOVar4 <= iVar3) {
      return -1;
    }
    pLVar2 = (this->fields).objectLinkRefs;
    if (((pLVar2 == (List_1_MV_WorldObject_ObjectLink_ *)0x0) ||
        (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar1,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                            ), pIVar5 == (IEventSystemHandler *)0x0)) || (link == (ObjectLink *)0x0)
       ) break;
    if (pIVar5[1].monitor == (MonitorData *)(link->fields).objectConnectorWOID) {
      pLVar2 = (this->fields).objectLinkRefs;
      if ((pLVar2 == (List_1_MV_WorldObject_ObjectLink_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar1,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      if (pIVar5[2].klass == (IEventSystemHandler__Class *)(link->fields).objectWOID) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
    pLVar2 = (this->fields).objectLinkRefs;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  iVar1 = (*pcVar6)();
  return iVar1;
}


/* Void GetLinksForClone(List`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
               (MVWorldObject *this,List_1_System_Int32_ *links,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLStack_6 = (List_1_System_Int32_ *)0x0;
  _Stack_38.genericMethod = (Il2CppGenericMethod *)0x0;
  _Stack_34.genericMethod = (Il2CppGenericMethod *)0x0;
  _Stack_30.genericMethod = (Il2CppGenericMethod *)0x0;
  _Stack_2c.genericMethod = (Il2CppGenericMethod *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  iStack_8 = -1;
  pLVar9 = (List_1_UnityEngine_Color32_ *)(this->fields).inputLinkRefs;
  piStack_10 = (int *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if (pLVar9 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    pLVar11 = (List_1_System_Int32_ *)func_?(0);
  }
  else {
    piStack_10 = (int *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    p_Var6 = (_union_155 *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_12,pLVar9,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                       );
    _Stack_38 = *p_Var6;
    _Stack_34 = p_Var6[1];
    _Stack_30 = p_Var6[2];
    _Stack_2c = p_Var6[3];
    uStack_1 = 0;
    while( true ) {
      pMVar13 = (MethodInfo *)&UNK_?;
      cVar14 = func_?();
      unaff_ESI = links;
      if (cVar14 == '\0') break;
      pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&_Stack_38,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                         );
      if ((pOVar15 == (Object *)0x0) || (links == (List_1_System_Int32_ *)0x0))
      goto code_?;
      item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
      item.rgba = (int32_t)pOVar15[1].klass;
      bVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains
                        ((List_1_UnityEngine_Color32_ *)links,item,pMVar13);
      if (bVar16 == 0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)links,(UIPushOption__Enum)pOVar15[1].klass,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    *piStack_10 = 0x49;
    iStack_8 = 0;
    uStack_1 = 0xffffffff;
    func_?(&_Stack_38,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    pLVar11 = pLStack_6;
    if (pLStack_6 == (List_1_System_Int32_ *)0x0) {
      if (*piStack_10 == 0x49) {
        iStack_8 = -1;
      }
      pLVar9 = (List_1_UnityEngine_Color32_ *)(this->fields).outputLinkRefs;
      if (pLVar9 != (List_1_UnityEngine_Color32_ *)0x0) {
        pMVar13 = (MethodInfo *)auStack_12;
        pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)pMVar13,pLVar9,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                           );
        CStack_7.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar17->l;
        CStack_7.monitor = (MonitorData *)pLVar17->next;
        CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar17->ver;
        CStack_7.fields.syncRoot = (Object *)(pLVar17->current).rgba;
        uStack_1 = 2;
        while( true ) {
          auStack_12._8_4_ =
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
          ;
          auStack_12._4_4_ = auStack_12 + 0x10;
          auStack_12._0_4_ = &UNK_?;
          cVar14 = func_?();
          unaff_ESI = pLStack_6;
          if (cVar14 == '\0') break;
          pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              (auStack_12 + 0x10),
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                             );
          unaff_ESI = links;
          if ((pOVar15 == (Object *)0x0) || (links == (List_1_System_Int32_ *)0x0))
          goto code_?;
          item_00._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
          item_00.rgba = (int32_t)pOVar15[1].klass;
          bVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__Contains
                            ((List_1_UnityEngine_Color32_ *)links,item_00,pMVar13);
          if (bVar16 == 0) {
            pMVar13 = (MethodInfo *)links;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)links,(UIPushOption__Enum)pOVar15[1].klass,
                       MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          }
        }
        piStack_10[iStack_8 + 1] = 0x92;
        uStack_1 = 0xffffffff;
        func_?(auStack_12 + 0x10,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                       );
        if (unaff_ESI == (List_1_System_Int32_ *)0x0) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pLVar11,0,0);
code_?:
  func_?(unaff_ESI,0,0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void GetObjectLinksForClone(List`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
               (MVWorldObject *this,List_1_System_Int32_ *objectLinks,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).objectLinkRefs;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      method_00 = (MethodInfo *)&UNK_?;
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x49;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                            );
      if ((unaff_ESI == (Object *)0x0) || (objectLinks == (List_1_System_Int32_ *)0x0)) break;
      item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
      item.rgba = (int32_t)unaff_ESI[1].klass;
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains
                        ((List_1_UnityEngine_Color32_ *)objectLinks,item,method_00);
      if (bVar11 == 0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)objectLinks,(UIPushOption__Enum)unaff_ESI[1].klass,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialRemoveFromWOData
               (MVWorldObject *this,Dictionary_2_System_Object_System_Object_ *dataToRemove,
               MethodInfo *method)

{
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
            ((this->fields).data,dataToRemove,(MethodInfo *)0x0);
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialUpdateWOData
               (MVWorldObject *this,Dictionary_2_System_Object_System_Object_ *newWOData,
               MethodInfo *method)

{
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields).data,newWOData,(MethodInfo *)0x0);
  return;
}


/* Boolean RemoveInputLink(Link) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveInputLink
               (MVWorldObject *this,Link_1 *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).inputLinkRefs;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
    ;
    item.rgba = (int32_t)link;
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Remove(this_00,item,unaff_ESI);
    this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).OnInputLinkChanged;
    if (this_01 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_01,(Dictionary_2_System_String_System_Object_ *)(this->fields).inputLinkRefs,
                 MethodInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>__Invoke_System__Collections__Generic__List<MV::WorldObject::Link>_
                );
      return bVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean RemoveObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = MVWorldObject_GetIndexOfObjectLink(this,link,(MethodInfo *)0x0);
  if (index != -1) {
    this_00 = (List_1_MVPlayer_ *)(this->fields).objectLinkRefs;
    if (this_00 != (List_1_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,index,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__RemoveAt_int_
                );
      (*(code *)(this->klass->vtable).OnObjectLinkChanged.method)(this);
      return 1;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  return 0;
}


/* Boolean RemoveOutputLink(Link) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveOutputLink
               (MVWorldObject *this,Link_1 *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).outputLinkRefs;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
    ;
    item.rgba = (int32_t)link;
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Remove(this_00,item,unaff_ESI);
    this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).OnOutputLinkChanged;
    if (this_01 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_01,(Dictionary_2_System_String_System_Object_ *)(this->fields).outputLinkRefs,
                 MethodInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>__Invoke_System__Collections__Generic__List<MV::WorldObject::Link>_
                );
    }
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* MVWorldObject ShallowCopy() */

MVWorldObject *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ShallowCopy
          (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObject *)
           mscorlib.dll::System::Object::Object_MemberwiseClone((Object *)this,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObject *)0x0) {
    return (MVWorldObject *)0x0;
  }
  bVar2 = (TypeInfo__MV__WorldObject__MVWorldObject->_1).naturalAligment;
  if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
     ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
      (Il2CppClass *)TypeInfo__MV__WorldObject__MVWorldObject)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pMVar4 = (MVWorldObject *)0x0;
  if (bVar3) {
    pMVar4 = pMVar1;
  }
  if (pMVar4 != (MVWorldObject *)0x0) {
    return pMVar4;
  }
  func_?(pMVar1,TypeInfo__MV__WorldObject__MVWorldObject);
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVWorldObject *)(*pcVar5)();
  return pMVar1;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ToString
                   (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,7);
  iStack_1 = (this->fields).type;
  pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    if ((StringLiteral__id__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__id__,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)StringLiteral__id__;
    iStack_5 = (this->fields).id;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    if ((StringLiteral__groupId__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__groupId__,(args->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = (Object *)StringLiteral__groupId__;
    iStack_6 = (this->fields).groupId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar2;
    if ((StringLiteral__itemId__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__itemId__,(args->klass->_0).element_class), iVar4 == 0
       )) goto code_?;
    if (args->max_length < 6) goto code_?;
    args->vector[5] = (Object *)StringLiteral__itemId__;
    iStack_7 = (this->fields).itemId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if ((pOVar2 == (Object *)0x0) ||
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 != 0)) {
      if (6 < args->max_length) {
        args->vector[6] = pOVar2;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        return pSVar8;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar9 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar9)();
  return pSVar8;
}


/* MVWorldObject() */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
               (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  (this->fields).outputLinkRefs = (List_1_MV_WorldObject_Link_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  (this->fields).inputLinkRefs = (List_1_MV_WorldObject_Link_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>
                          );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__List__);
  (this->fields).objectLinkRefs = (List_1_MV_WorldObject_ObjectLink_ *)pLVar1;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).runTimeData = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Vector3 get_Position() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_Position
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).position.y;
  fVar2 = (this->fields).position.z;
  __return_storage_ptr__->x = (this->fields).position.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Vector3 get_Scale() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_Scale
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).scale.y;
  fVar2 = (this->fields).scale.z;
  __return_storage_ptr__->x = (this->fields).scale.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Vector3 get_WorldPosition() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion get_WorldRotation() */

Quaternion *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
          (Quaternion *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Void set_Position(Vector3) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_Position
               (MVWorldObject *this,Vector3 value,MethodInfo *method)

{
  (this->fields).position.x = value.x;
  (this->fields).position.y = value.y;
  (this->fields).position.z = value.z;
  return;
}


/* Void set_Scale(Vector3) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_Scale
               (MVWorldObject *this,Vector3 value,MethodInfo *method)

{
  (this->fields).scale.x = value.x;
  (this->fields).scale.y = value.y;
  (this->fields).scale.z = value.z;
  return;
}

