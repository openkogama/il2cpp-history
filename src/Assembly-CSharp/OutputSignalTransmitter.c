
/* Void Send(Boolean) */

void Assembly-CSharp.dll::OutputSignalTransmitter::OutputSignalTransmitter_Send
               (OutputSignalTransmitter *this,bool isHot,MethodInfo *method)

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
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_7 = (undefined4 *)&stack0xffffffb8, puStack_4 = &stack0xffffffb8,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar8 != (MVWorldObjectClientManager *)0x0) &&
      (this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar8,(this->fields).woId,(MethodInfo *)0x0),
      this_00 != (MVWorldObject *)0x0)) &&
     (this_01 = (List_1_UnityEngine_Color32_ *)
                System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Int32]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                          ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_00,
                           (MethodInfo *)0x0), this_01 != (List_1_UnityEngine_Color32_ *)0x0)) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_01,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                       );
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
    uStack_1 = 0;
    while( true ) {
      CStack_6.monitor =
           (MonitorData *)
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
      ;
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_6;
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x72;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                         );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pOVar11 == (Object *)0x0) || (pMVar8 == (MVWorldObjectClientManager *)0x0)) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (pMVar8,(int32_t)pOVar11[2].klass,(MethodInfo *)0x0);
      iVar12 = func_?();
      if ((iVar12 == 0) || (iVar12 = func_?(0,TypeInfo__ILogicWorldObject), iVar12 == 0))
      break;
      func_?(0,TypeInfo__IInputSignalReceiver,iVar12);
      *(bool *)&pOVar11[2].monitor = isHot;
    }
  }
  func_?();
  func_?(0,0,0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

