
/* Type Get(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[System::Type,System::
       Type]::ThreadSafeStore_2_System_Type_System_Type__Get
                 (ThreadSafeStore_2_System_Type_System_Type_ *this,Type *key,MethodInfo *method)

{
  pTStack_1 = (Type *)0x0;
  pDVar2 = (this->fields)._store;
  puVar3 = *(undefined4 **)(method->name + 0x60);
  if (pDVar2 != (Dictionary_2_System_Type_System_Type_ *)0x0) {
    cVar4 = (**(code **)puVar3[1])(pDVar2,key,&pTStack_1,(undefined4 *)puVar3[1]);
    if (cVar4 != '\0') {
      return pTStack_1;
    }
    puVar3 = *(undefined4 **)(method->name + 0x60);
  }
  pTVar5 = (Type *)(**(code **)*puVar3)(this,key,(undefined4 *)*puVar3);
  return pTVar5;
}


/* ThreadSafeStore`2[System.Type,System.Type](Func`2[Type,Type]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[System::Type,System::Type]
     ::ThreadSafeStore_2_System_Type_System_Type___ctor
               (ThreadSafeStore_2_System_Type_System_Type_ *this,Func_2_Type_Type_ *creator,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Object;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields)._lock = (Object *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (creator != (Func_2_Type_Type_ *)0x0) {
    (this->fields)._creator = creator;
    return;
  }
  this_01 = (ArgumentNullException *)func_?();
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,StringLiteral_creator,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

