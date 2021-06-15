
/* Void Send(Int32) */

void Assembly-CSharp.dll::OutputSignalTransmitterSpecific::OutputSignalTransmitterSpecific_Send
               (OutputSignalTransmitterSpecific *this,int32_t hotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    this = (OutputSignalTransmitterSpecific *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar1,(this->fields).woId,(MethodInfo *)0x0);
    index = 0;
    if ((MVWorldObject *)this != (MVWorldObject *)0x0) {
      while( true ) {
        this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                            ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                             (MethodInfo *)0x0);
        if (this_00 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) break;
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (this_00,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                           );
        if ((int)pOVar2 <= index) {
          return;
        }
        bVar3 = index == hotIndex;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          hotIndex = (int32_t)TypeInfo__MVGameControllerBase;
          this = (OutputSignalTransmitterSpecific *)&UNK_?;
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                 System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                 ::Int32]::
                 Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                           ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                            (MethodInfo *)0x0);
        if (pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) break;
        pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Item_int_
                           );
        if ((pIVar5 == (IEventSystemHandler *)0x0) || (pMVar1 == (MVWorldObjectClientManager *)0x0))
        break;
        pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,(int32_t)pIVar5[2].klass,(MethodInfo *)0x0);
        iVar7 = func_?(pMVar6,TypeInfo__ILogicWorldObject);
        if (iVar7 == 0) break;
        iVar8 = func_?(0,TypeInfo__ILogicWorldObject,iVar7);
        if (iVar8 == 0) break;
        func_?(0,TypeInfo__IInputSignalReceiver,iVar8,iVar7);
        pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                 System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                 ::Int32]::
                 Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                           ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                            (MethodInfo *)0x0);
        if (pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) break;
        pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Item_int_
                           );
        if (pIVar5 == (IEventSystemHandler *)0x0) break;
        index = index + 1;
        *(bool *)&pIVar5[2].monitor = bVar3;
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

