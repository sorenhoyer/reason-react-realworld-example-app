open Utils;

let component = ReasonReact.statelessComponent("Home");

let make = _children => {
  ...component,
  render: _self => <div> ("Home" |> strEl) </div>,
};
