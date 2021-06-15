
/* Boolean GetShowInShop() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::AccessoryBundle_GetShowInShop
               (AccessoryBundle *this,MethodInfo *method)

{
  this_00 = (this->fields).timelimit;
  if (this_00 != (AccessoryTimelimit *)0x0) {
    if ((this_00->fields).timeLimit != 0) {
      if (this_00 == (AccessoryTimelimit *)0x0) goto code_?;
      iStack_1 = 0;
      iStack_1 = (int64_t)AccessoryTimelimit::AccessoryTimelimit_GetTimeLeft
                                    (this_00,(MethodInfo *)0x0);
      fVar2 = (float10)func_?(&iStack_1,0);
      if ((double)fVar2 <= _UNK_?) {
        return 0;
      }
    }
    return (this->fields).isAvailable;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::AccessoryBundle_ToString
                   (AccessoryBundle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pSVar1 = (this->fields).name;
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    bStack_4 = (this->fields).isAvailable;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    iStack_6 = (this->fields).discount;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    iStack_7 = (this->fields).level;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if (pOVar5 == (Object *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = pOVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar1 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral__0___IsAvailable___1__Discount__,args,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
    iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar8 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar8)();
  return pSVar1;
}


/* AccessoryBundle() */

void MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::AccessoryBundle__ctor
               (AccessoryBundle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).accessoryBundleID = -1;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
            );
  (this->fields).accessoryBundleItems =
       (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)this_00;
  method_00 = TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit;
  this_01 = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_01,0.0,(MethodInfo *)method_00);
  (this->fields).timelimit = (AccessoryTimelimit *)this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Boolean get_IsEmptyBundle() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::
     AccessoryBundle_get_IsEmptyBundle(AccessoryBundle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).accessoryBundleItems;
  if (this_00 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                       );
    return pOVar1 == (Object *)0x0;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsTimeLimited() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::
     AccessoryBundle_get_IsTimeLimited(AccessoryBundle *this,MethodInfo *method)

{
  pAVar1 = (this->fields).timelimit;
  if (pAVar1 != (AccessoryTimelimit *)0x0) {
    return (pAVar1->fields).timeLimit != 0;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

