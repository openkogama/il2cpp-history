
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas_ToString
                   (HighScoreDatas *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = this;
  index = 0;
  pLVar2 = (this->fields).highScores;
  pSVar3 = ::StringLiteral__;
  while (pLVar2 != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                       );
    if ((int)pOVar4 <= index) {
      return pSVar3;
    }
    this = (HighScoreDatas *)((pHVar1->fields).topRank + index);
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
    pLVar2 = (pHVar1->fields).highScores;
    if (pLVar2 == (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) break;
    arg1 = (Object *)
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                     );
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    str1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0____1__u000A,pOVar4,arg1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_2(pSVar3,str1,(MethodInfo *)0x0);
    index = index + 1;
    pLVar2 = (pHVar1->fields).highScores;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* HighScoreDatas() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas__ctor
               (HighScoreDatas *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
            );
  (this->fields).highScores = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_00;
  return;
}


/* HighScoreDatas(Int32, List`1[MV.WorldObject.GamePassSystem.HighScoreEntry]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas__ctor_1
               (HighScoreDatas *this,int32_t topRank,
               List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *highScores,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
            );
  (this->fields).highScores = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).topRank = topRank;
  (this->fields).highScores = highScores;
  return;
}

